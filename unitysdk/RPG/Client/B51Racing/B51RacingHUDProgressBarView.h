#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingHUDProgressBarView_RotationAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1B6C2F20)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x1B6C2EB0)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x1B6C2D20)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_EDD16E7B688599FA_OFFSET UNITYSDK_OFFSET(0x1B6C2A20)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B6C2970)
#define RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C3000)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingHUDProgressBarView_TypeDefinitionIndex = 80573;

	class B51RacingHUDProgressBarView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _Rotator; // 0x18
		::UnityEngine::Vector2 _RotationRange; // 0x20
		::RPG::Client::B51Racing::B51RacingHUDProgressBarView_RotationAxis _RotationAxis; // 0x28
		::UnityEngine::AnimationCurve* _Curve; // 0x30
		::UnityEngine::Vector2 _FillRange; // 0x38
		::UnityEngine::UI::SmoothMask* _SmoothMask; // 0x40
		::UnityEngine::UI::Image* _Image; // 0x48
		::System::Single _Progress; // 0x50
		::System::String* LIDGNAHIDBI; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_SETPROGRESS_OFFSET))(this, a1);
		}

		::System::Void Method_5_EDD16E7B688599FA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_EDD16E7B688599FA_OFFSET))(this, a1);
		}

		::System::Void Method_5_E3ADA5CA2C064E44(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_E3ADA5CA2C064E44_OFFSET))(this, a1);
		}

		::System::Void Method_5_41AA181104E03F2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_41AA181104E03F2C_OFFSET))(this);
		}

		::System::Void Method_5_73FB9DE4849AF1B5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGHUDPROGRESSBARVIEW_METHOD_5_73FB9DE4849AF1B5_OFFSET))(this, a1);
		}
	};
}
