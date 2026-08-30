#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class QuadricBezier; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconItemControl; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL_SETTRAILENDPOINT_OFFSET UNITYSDK_OFFSET(0x19EDEED0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL_SETTRAILMOVEANIFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x19EDF130)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EDEBD0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE4C20)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EE46A0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL___ONINITIALIZECOMPONENT_B__9_0_OFFSET UNITYSDK_OFFSET(0x19EE4C50)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopResultValueUpToastControl_TypeDefinitionIndex = 80477;

	class B51RacingCarDevelopResultValueUpToastControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::B51Racing::B51RacingDevelopValueIconItemControl* _IconControl; // 0x38
		::RPG::Client::LocalizedText* _NumText; // 0x40
		::RPG::Client::LocalizedText* _ResultText; // 0x48
		::UnityEngine::Transform* _TrailBeginPoint; // 0x50
		::UnityEngine::Transform* _TrailMidPoint; // 0x58
		::UnityEngine::Transform* _TrailEndPoint; // 0x60
		::RPG::Client::QuadricBezier* _QuadricBezier; // 0x68
		::RPG::Client::MonoAnimationTrigger* _TrailMoveAnimationTrigger; // 0x70
		::System::Action* _OnTrailMoveFinish; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetTrailEndPoint(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL_SETTRAILENDPOINT_OFFSET))(this, a1);
		}

		::System::Void SetTrailMoveAniFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL_SETTRAILMOVEANIFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void __OnInitializeComponent_b__9_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPRESULTVALUEUPTOASTCONTROL___ONINITIALIZECOMPONENT_B__9_0_OFFSET))(this, a1);
		}
	};
}
