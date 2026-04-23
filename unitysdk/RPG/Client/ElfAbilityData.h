#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantAbilityConfigRow; }

#define RPG_CLIENT_ELFABILITYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2209C0)
#define RPG_CLIENT_ELFABILITYDATA_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xA220B40)
#define RPG_CLIENT_ELFABILITYDATA_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xA220C40)
#define RPG_CLIENT_ELFABILITYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA220A50)
#define RPG_CLIENT_ELFABILITYDATA_GET_ISORDINARYABILITY_OFFSET UNITYSDK_OFFSET(0xA220CB0)
#define RPG_CLIENT_ELFABILITYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA220BC0)
#define RPG_CLIENT_ELFABILITYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA220A70)
#define RPG_CLIENT_ELFABILITYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA220AE0)
#define RPG_CLIENT_ELFABILITYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA220A60)
#define RPG_CLIENT_ELFABILITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA220A40)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfAbilityData_TypeDefinitionIndex = 58656;

	class ElfAbilityData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfAbilityData* Create(::System::UInt32 abilityID)
		{
			return ((::RPG::Client::ElfAbilityData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_CREATE_OFFSET))(abilityID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantEmployeeAbility get_Type()
		{
			return ((::RPG::GameCore::RestaurantEmployeeAbility(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Detail()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_GET_DETAIL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_DynamicValues()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_GET_DYNAMICVALUES_OFFSET))(this);
		}

		::System::Boolean get_IsOrdinaryAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_GET_ISORDINARYABILITY_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantAbilityConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantAbilityConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFABILITYDATA_GET__ROW_OFFSET))(this);
		}
	};
}
