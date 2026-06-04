#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaGroupDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x197AE7B0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197AE640)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETGROUPIDBYGACHAID_OFFSET UNITYSDK_OFFSET(0x197AF080)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x197AE330)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x197AE5E0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x197AE900)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x197AE3B0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x197AF680)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x197AE940)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x197AEB10)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x197AED60)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197AF710)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x197AEA70)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x197AE9D0)
#define RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x197AF200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaGroupDataExcelTable_TypeDefinitionIndex = 12728;

	class GachaGroupDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x19AE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x19AE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__GachaIDToGroupID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x19AF0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x19AF8);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x86F0);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x86F1);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x86F2);
		}
		static ::System::UInt32* StaticGet_SINGLE_GROUP_OFFSET()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GachaGroupDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x86F4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GachaGroupDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GachaGroupDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GachaGroupDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GachaGroupDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GachaGroupDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetGroupIDByGachaID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_GETGROUPIDBYGACHAID_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
