#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapPropConditionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x198BFD30)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x198BFC00)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x198BF8F0)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198BFBA0)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198BFE80)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x198BF970)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198BFEC0)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x198C0090)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198C0350)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C0670)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198BFFF0)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x198BFF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapPropConditionConfigExcelTable_TypeDefinitionIndex = 11966;

	class MapPropConditionConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapPropConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x29CC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapPropConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x29CC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapPropConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x29CD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapPropConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9970);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapPropConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9971);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapPropConditionConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapPropConditionConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapPropConditionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapPropConditionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
