#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_72AD36D88EE41A35;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA148890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA1486B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_MARKETSHARETREND_OFFSET UNITYSDK_OFFSET(0xA148810)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA148720)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET_ROUNDICON_OFFSET UNITYSDK_OFFSET(0xA1487A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA1486C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_VISITIDS_OFFSET UNITYSDK_OFFSET(0xA148900)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA148880)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandData_TypeDefinitionIndex = 69913;

	class DiceCombatV2BrandData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA__CTOR_OFFSET))(this, id);
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

		static ::RPG::Client::DiceCombat::DiceCombatV2BrandData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BrandData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_CREATE_OFFSET))(id);
		}

		static ::System::Void VisitIDs(::System::Func_2<::System::UInt32, ::System::Boolean>* visit)
		{
			return ((::System::Void(*)(::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDDATA_VISITIDS_OFFSET))(visit);
		}
	};
}
