#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175F5820)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175F56A0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175F5370)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175F5640)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175F59F0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F53F0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175F5A30)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F5C10)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175F6030)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175F6340)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175F5B70)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F5AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonTalentExcelTable_TypeDefinitionIndex = 13478;

	class RogueDLCAeonTalentExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B20);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x10780);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x10781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonTalentRow* GetData(::System::UInt32 AeonTalentID)
		{
			return ((::RPG::GameCore::RogueDLCAeonTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETDATA_OFFSET))(AeonTalentID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAeonTalentRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
