#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19A11620)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A114F0)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19A111E0)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19A11490)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19A11770)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A11260)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19A117B0)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A11980)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19A11CD0)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A11FF0)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19A118E0)
#define RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A11840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipExcelTable_TypeDefinitionIndex = 11586;

	class PixAirEquipExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipExcelTable_TypeDefinitionIndex)->GetStaticField(0x36330);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipExcelTable_TypeDefinitionIndex)->GetStaticField(0x36338);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipRow*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipExcelTable_TypeDefinitionIndex)->GetStaticField(0x36340);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipExcelTable_TypeDefinitionIndex)->GetStaticField(0xAD21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEquipRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PixAirEquipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEquipRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
