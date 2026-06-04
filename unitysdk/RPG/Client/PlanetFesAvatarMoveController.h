#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC400C30)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_ISINMOVE_OFFSET UNITYSDK_OFFSET(0xC4018F0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_SHOULDFACERIGHT_OFFSET UNITYSDK_OFFSET(0xC401930)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STARTMOVE_OFFSET UNITYSDK_OFFSET(0xC401050)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0xC4016C0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC4019C0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0xC401770)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CALCULATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xC4013F0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CHECKVALID_OFFSET UNITYSDK_OFFSET(0xC401380)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC401B70)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETCURNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0xC4012C0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETLOCALPOSITIONFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xC400DF0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STARTTIMER_OFFSET UNITYSDK_OFFSET(0xC401550)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STOPTIMER_OFFSET UNITYSDK_OFFSET(0xC4014F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarMoveController_TypeDefinitionIndex = 62161;

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
		::Class_1_23F67DD15593C8D6* _MoveTimer; // 0x80

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
