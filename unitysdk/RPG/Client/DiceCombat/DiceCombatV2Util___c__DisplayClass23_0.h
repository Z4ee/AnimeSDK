#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F487A56015EDF324;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPTitleData; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD612C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xCD615C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__2_OFFSET UNITYSDK_OFFSET(0xCD615E0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2Util___c__DisplayClass23_0_TypeDefinitionIndex = 75703;

	class DiceCombatV2Util___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::UInt32 topPriority; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTitleFromNotifyByUid_b__0(::Class_1_F487A56015EDF324* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F487A56015EDF324*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTitleFromNotifyByUid_b__2(::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2PvPTitleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UTIL___C__DISPLAYCLASS23_0__GETTITLEFROMNOTIFYBYUID_B__2_OFFSET))(this, a1);
		}
	};
}
