#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6AF265B57C1DDED9;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDB79810)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_ISINMOVE_OFFSET UNITYSDK_OFFSET(0xDB7A530)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_SHOULDFACERIGHT_OFFSET UNITYSDK_OFFSET(0xDB7A570)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STARTMOVE_OFFSET UNITYSDK_OFFSET(0xDB79C30)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0xDB7A2D0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDB7A600)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0xDB7A3B0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CALCULATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xDB7A010)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CHECKVALID_OFFSET UNITYSDK_OFFSET(0xDB79FA0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDB7A7E0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETCURNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0xDB79EE0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETLOCALPOSITIONFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xDB799D0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STARTTIMER_OFFSET UNITYSDK_OFFSET(0xDB7A190)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STOPTIMER_OFFSET UNITYSDK_OFFSET(0xDB7A110)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarMoveController_TypeDefinitionIndex = 66480;

	class PlanetFesAvatarMoveController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MoveRangeDuration; // 0x18
		::UnityEngine::AnimationCurve* AnimationCurve; // 0x20
		::UnityEngine::Transform* MoveRangeLeftPoint; // 0x28
		::UnityEngine::Transform* MoveRangeRightPoint; // 0x30
		::UnityEngine::Transform* MoveRangeOriginPoint; // 0x38
		::UnityEngine::Transform* AvatarRoot; // 0x40
		::UnityEngine::Vector3 _AvatarRootOriginPosition; // 0x48
		::UnityEngine::Vector3 _AvatarRootLeftPosition; // 0x54
		::UnityEngine::Vector3 _AvatarRootRightPosition; // 0x60
		::UnityEngine::Vector3 _TargetPosition; // 0x6C
		::System::Boolean _IsInMove; // 0x78
		::Class_1_6AF265B57C1DDED9* _MoveTimer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void StartMove(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STARTMOVE_OFFSET))(this, a1);
		}

		::System::Void StopMove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STOPMOVE_OFFSET))(this, a1);
		}

		::System::Boolean IsInMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_ISINMOVE_OFFSET))(this);
		}

		::System::Boolean ShouldFaceRight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_SHOULDFACERIGHT_OFFSET))(this);
		}

		::System::Void _StartTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STARTTIMER_OFFSET))(this, a1);
		}

		::System::Void _StopTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STOPTIMER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean _CheckValid(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CHECKVALID_OFFSET))(this, a1);
		}

		::System::Void _ApplyPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__APPLYPOSITION_OFFSET))(this, a1);
		}

		::System::Void _CalculateTargetPosition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CALCULATETARGETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GetLocalPositionFromWorldPosition(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETLOCALPOSITIONFROMWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Single _GetCurNormalizedPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETCURNORMALIZEDPOSITION_OFFSET))(this);
		}
	};
}
