#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A196660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1966A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___ENTERNEXTNODESTANDALONE_B__69_0_OFFSET UNITYSDK_OFFSET(0x1A1966F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___REENTERCURNODESTANDALONE_B__68_0_OFFSET UNITYSDK_OFFSET(0x1A1966B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int StageProgressViewModel___c_TypeDefinitionIndex = 71836;

	class StageProgressViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::BaseGameFlow*>** StaticGet___9__69_0()
		{
			return (::System::Action_1<::RPG::Client::BaseGameFlow*>**)Il2CppClass::FromTypeDefinitionIndex(StageProgressViewModel___c_TypeDefinitionIndex)->GetStaticField(0x42270);
		}
		static ::System::Action_1<::RPG::Client::BaseGameFlow*>** StaticGet___9__68_0()
		{
			return (::System::Action_1<::RPG::Client::BaseGameFlow*>**)Il2CppClass::FromTypeDefinitionIndex(StageProgressViewModel___c_TypeDefinitionIndex)->GetStaticField(0x42278);
		}
		static ::RPG::Client::ActivityIdleLive::StageProgressViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::StageProgressViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(StageProgressViewModel___c_TypeDefinitionIndex)->GetStaticField(0x42280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void __ReEnterCurNodeStandalone_b__68_0(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___REENTERCURNODESTANDALONE_B__68_0_OFFSET))(this, a1);
		}

		::System::Void __EnterNextNodeStandalone_b__69_0(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___ENTERNEXTNODESTANDALONE_B__69_0_OFFSET))(this, a1);
		}
	};
}
