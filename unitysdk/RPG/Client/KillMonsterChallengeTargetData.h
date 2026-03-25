#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9973CE0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x9973E90)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_KILLNUM_OFFSET UNITYSDK_OFFSET(0x9973B70)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_MONSTERID_OFFSET UNITYSDK_OFFSET(0x9973CC0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9973E00)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9973B90)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9973B30)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9974110)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x99741F0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x9974180)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x99740A0)

namespace RPG::Client
{
	inline static constexpr unsigned int KillMonsterChallengeTargetData_TypeDefinitionIndex = 51214;

	class KillMonsterChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_MonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_MONSTERID_OFFSET))(this);
		}

		::System::UInt32 get_KillNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_KILLNUM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::RPG::Client::ChallengeTargetState __iFixBaseProxy_CalculateTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
