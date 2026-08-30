#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FindChestFuncDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D099C90)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D099B20)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D099810)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D099AC0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D099E20)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D099890)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D099E60)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D09A030)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D09A440)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09A7B0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D099F90)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D099EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindChestFuncDataExcelTable_TypeDefinitionIndex = 13188;

	class FindChestFuncDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A430);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A438);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A440);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xC500);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xC501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FindChestFuncDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FindChestFuncDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FindChestFuncDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FindChestFuncDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
