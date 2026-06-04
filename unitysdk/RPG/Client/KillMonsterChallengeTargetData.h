#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xBD6B920)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xBD6BB10)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_KILLNUM_OFFSET UNITYSDK_OFFSET(0xBD6B780)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_GET_MONSTERID_OFFSET UNITYSDK_OFFSET(0xBD6B900)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xBD6BA80)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xBD6B7A0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD6B740)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xBD6BD40)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xBD6BE00)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xBD6BDA0)
#define RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xBD6BCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int KillMonsterChallengeTargetData_TypeDefinitionIndex = 59061;

	class KillMonsterChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
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

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState __iFixBaseProxy_CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_KILLMONSTERCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
