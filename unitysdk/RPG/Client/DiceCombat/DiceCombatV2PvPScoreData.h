#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_9;
class Class_1_5D31F5171A531E0A;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19FE55B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x19FE5820)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x19FE5840)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x19FE5830)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x19FE5850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE5810)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPScoreData_TypeDefinitionIndex = 72241;

	class DiceCombatV2PvPScoreData : public ::System::Object
	{
	public:
		::Class_1_5D31F5171A531E0A* _Row; // 0x10
		::System::String* _Desc_k__BackingField; // 0x18
		::System::UInt32 _Score_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData* Create(::Class_1_45BB92167AED63A0_9* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPScoreData*(*)(::Class_1_45BB92167AED63A0_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_DESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSCOREDATA_SET_SCORE_OFFSET))(this, a1);
		}
	};
}
