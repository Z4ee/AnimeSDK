#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusActivityQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189EECE0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189EEB30)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189EE800)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189EEAD0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189EEEB0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189EE880)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189EEEF0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189EF0D0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189EF370)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189EF6D0)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189EF030)
#define RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189EEF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusActivityQuestExcelTable_TypeDefinitionIndex = 13031;

	class HeliobusActivityQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusActivityQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CFC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusActivityQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CFC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusActivityQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CFD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusActivityQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xD820);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusActivityQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xD821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusActivityQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusActivityQuestRow* GetData(::System::UInt32 QuestTabID)
		{
			return ((::RPG::GameCore::HeliobusActivityQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_GETDATA_OFFSET))(QuestTabID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusActivityQuestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusActivityQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSACTIVITYQUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
