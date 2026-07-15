#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionSettingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AAD78E0)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AAD77B0)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AAD74A0)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AAD7750)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AAD7A50)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAD7520)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAD7A90)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAD7C60)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AAD7EB0)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAD81D0)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AAD7BC0)
#define RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AAD7B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSettingExcelTable_TypeDefinitionIndex = 13314;

	class ActionSettingExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActionSettingExcelTable_TypeDefinitionIndex)->GetStaticField(0x19B00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActionSettingExcelTable_TypeDefinitionIndex)->GetStaticField(0x19B08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionSettingRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionSettingRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActionSettingExcelTable_TypeDefinitionIndex)->GetStaticField(0x19B10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActionSettingExcelTable_TypeDefinitionIndex)->GetStaticField(0x6040);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActionSettingExcelTable_TypeDefinitionIndex)->GetStaticField(0x6041);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionSettingRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionSettingRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionSettingRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionSettingRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActionSettingRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ActionSettingRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActionSettingRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActionSettingRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
