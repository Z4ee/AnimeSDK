#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_72AD36D88EE41A35;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB7C7670)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB7C7490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_MARKETSHARETREND_OFFSET UNITYSDK_OFFSET(0xB7C75F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7C7500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_ROUNDICON_OFFSET UNITYSDK_OFFSET(0xB7C7580)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB7C74A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_VISITIDS_OFFSET UNITYSDK_OFFSET(0xB7C76E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C7660)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandData_TypeDefinitionIndex = 70725;

	class DiceCombatV2BrandData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_ID_OFFSET))(this);
		}

		::Class_1_72AD36D88EE41A35* get__Row()
		{
			return ((::Class_1_72AD36D88EE41A35*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RoundIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_ROUNDICON_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_MarketShareTrend()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_MARKETSHARETREND_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BrandData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BrandData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Void VisitIDs(::System::Func_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_VISITIDS_OFFSET))(a1);
		}
	};
}
