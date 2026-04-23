#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_5;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA15DBA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xA15DE70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__2_OFFSET UNITYSDK_OFFSET(0xA15DE90)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2Util___c__DisplayClass23_0_TypeDefinitionIndex = 69941;

	class DiceCombatV2Util___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::UInt32 topPriority; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTitleFromNotifyByUid_b__0(::Class_1_4BC858D7C27E10ED_5* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__0_OFFSET))(this, data);
		}

		::System::Boolean _GetTitleFromNotifyByUid_b__2(::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__2_OFFSET))(this, t);
		}
	};
}
