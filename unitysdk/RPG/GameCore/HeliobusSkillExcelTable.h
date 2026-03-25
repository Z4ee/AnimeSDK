#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172A5BB0)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172A5A30)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172A5700)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172A59D0)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172A5D30)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172A5780)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172A5D70)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172A5F50)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172A6290)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172A65A0)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172A5EB0)
#define RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172A5E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSkillExcelTable_TypeDefinitionIndex = 12592;

	class HeliobusSkillExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x23D30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x23D38);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x23D40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x9640);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x9641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusSkillRow* GetData(::System::UInt32 HeliobusSkillID)
		{
			return ((::RPG::GameCore::HeliobusSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_GETDATA_OFFSET))(HeliobusSkillID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
