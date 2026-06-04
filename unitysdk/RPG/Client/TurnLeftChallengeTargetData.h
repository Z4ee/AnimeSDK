#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }
namespace System { class Object; }

#define RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCAF0930)
#define RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCAF09A0)
#define RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCAF0860)
#define RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA__CONVERT_OFFSET UNITYSDK_OFFSET(0xCAF0720)
#define RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAF06E0)
#define RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCAF0AD0)
#define RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xCAF0A70)

namespace RPG::Client
{
	inline static constexpr unsigned int TurnLeftChallengeTargetData_TypeDefinitionIndex = 59065;

	class TurnLeftChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 _Convert(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA__CONVERT_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TURNLEFTCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}
	};
}
