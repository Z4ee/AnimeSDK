#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleMatchContext.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarblePVEMatchContext_MarblePVEMatchType.h"

namespace RPG::Client::ActivityMarble { class MarbleSealTeamLimitation; }
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GETTEAMLIMITATION_OFFSET UNITYSDK_OFFSET(0xC629690)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GET_ENABLETEAMEDIT_OFFSET UNITYSDK_OFFSET(0xC629870)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GET_ISMAINLINE_OFFSET UNITYSDK_OFFSET(0xC628BE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GET_PVEMATCHINFO_OFFSET UNITYSDK_OFFSET(0xC629850)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC628B40)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_SETFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xC628AF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_SET_ENABLETEAMEDIT_OFFSET UNITYSDK_OFFSET(0xC629880)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_SET_PVEMATCHINFO_OFFSET UNITYSDK_OFFSET(0xC629860)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xC6291B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC624B00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC628AB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__GETISSELFFIRST_OFFSET UNITYSDK_OFFSET(0xC6295E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__REQUESTPVEBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xC628C30)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVEMatchContext_TypeDefinitionIndex = 74587;

	class MarblePVEMatchContext : public ::RPG::Client::ActivityMarble::MarbleMatchContext
	{
	public:
		::RPG::GameCore::MarbleMatchInfoConfigRow* _PVEMatchInfo_k__BackingField; // 0x50
		::RPG::Client::ActivityMarble::MarbleSealTeamLimitation* _TeamLimitation; // 0x58
		::System::Action_1<::System::Boolean>* _OnFinish; // 0x60
		::System::Boolean _EnableTeamEdit_k__BackingField; // 0x68
		::RPG::Client::ActivityMarble::MarblePVEMatchContext_MarblePVEMatchType Type; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void SetFinishCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_SETFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_ONFINISH_OFFSET))(this, a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_STARTBATTLE_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::MarbleSealTeamLimitation* GetTeamLimitation()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamLimitation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GETTEAMLIMITATION_OFFSET))(this);
		}

		::System::Boolean _GetIsSelfFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__GETISSELFFIRST_OFFSET))(this);
		}

		::System::Void _RequestPVEBattleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT__REQUESTPVEBATTLEFINISH_OFFSET))(this);
		}

		::RPG::GameCore::MarbleMatchInfoConfigRow* get_PVEMatchInfo()
		{
			return ((::RPG::GameCore::MarbleMatchInfoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GET_PVEMATCHINFO_OFFSET))(this);
		}

		::System::Void set_PVEMatchInfo(::RPG::GameCore::MarbleMatchInfoConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleMatchInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_SET_PVEMATCHINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableTeamEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GET_ENABLETEAMEDIT_OFFSET))(this);
		}

		::System::Void set_EnableTeamEdit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_SET_ENABLETEAMEDIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVEMATCHCONTEXT_GET_ISMAINLINE_OFFSET))(this);
		}
	};
}
