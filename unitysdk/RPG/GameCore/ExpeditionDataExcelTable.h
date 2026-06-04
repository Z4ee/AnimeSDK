#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19702920)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197027B0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x197024A0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19702750)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19702AB0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19702520)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19702AF0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19702CC0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19703180)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197034F0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19702C20)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19702B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionDataExcelTable_TypeDefinitionIndex = 12628;

	class ExpeditionDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x163D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x163D8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x163E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7FD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7FD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ExpeditionDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
