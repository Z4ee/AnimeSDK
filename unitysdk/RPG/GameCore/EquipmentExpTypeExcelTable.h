#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentExpTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x196F1FD0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196F1E60)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x196F1B50)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x196F1E00)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x196F21A0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x196F1BD0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x196F21E0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x196F23B0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x196F2570)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x196F2920)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x196F2310)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x196F2270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpTypeExcelTable_TypeDefinitionIndex = 12609;

	class EquipmentExpTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x15180);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x15188);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x15190);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentExpTypeRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EquipmentExpTypeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentExpTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentExpTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
