#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UILineRenderer; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_GET_GEARTRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0x1B6BC540)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B6C3130)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1B6C3520)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x1B6C30C0)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x1B6C31D0)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B6C34E0)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_SETSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B6BBBD0)
#define RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C3570)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingHudSpeedBarView_TypeDefinitionIndex = 80575;

	class B51RacingHudSpeedBarView : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single NABKLKBJGMN; // 0x0
		::UnityEngine::UI::Slider* _slider; // 0x18
		::RPG::Client::UILineRenderer* _lineRenderer; // 0x20
		::UnityEngine::AnimationCurve* _Curve; // 0x28
		::System::Single _gearTransitionDuration; // 0x30
		::System::Single _previewProgress; // 0x34
		::System::String* KPGJFKPALOL; // 0x38
		::System::Boolean HEKAAFPGJIL; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetSpeedBarProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_SETSPEEDBARPROGRESS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void Method_5_73FB9DE4849AF1B5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_73FB9DE4849AF1B5_OFFSET))(this, a1);
		}

		::System::Void Method_5_4389275F4099DE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_METHOD_5_4389275F4099DE36_OFFSET))(this);
		}

		::System::Single get_GearTransitionDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDSPEEDBARVIEW_GET_GEARTRANSITIONDURATION_OFFSET))(this);
		}
	};
}
