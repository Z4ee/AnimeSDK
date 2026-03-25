#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueManagerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17618430)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17618280)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17617F50)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17618220)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17618600)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17617FD0)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17618640)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17618820)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17618AC0)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17618E20)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17618780)
#define RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x176186E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueManagerExcelTable_TypeDefinitionIndex = 13442;

	class RogueManagerExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x352A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x352A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x352B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueManagerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueManagerRow* GetData(::System::UInt32 RogueSeason)
		{
			return ((::RPG::GameCore::RogueManagerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_GETDATA_OFFSET))(RogueSeason);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueManagerRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueManagerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
