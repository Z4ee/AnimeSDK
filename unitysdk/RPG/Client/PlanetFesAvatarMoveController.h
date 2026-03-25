#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9F87AC0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_ISINMOVE_OFFSET UNITYSDK_OFFSET(0x9F88790)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_SHOULDFACERIGHT_OFFSET UNITYSDK_OFFSET(0x9F887D0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STARTMOVE_OFFSET UNITYSDK_OFFSET(0x9F87EE0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x9F88550)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F88860)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0x9F88600)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CALCULATETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x9F88280)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CHECKVALID_OFFSET UNITYSDK_OFFSET(0x9F88210)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F88A10)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETCURNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x9F88150)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETLOCALPOSITIONFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x9F87C80)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STARTTIMER_OFFSET UNITYSDK_OFFSET(0x9F883E0)
#define RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STOPTIMER_OFFSET UNITYSDK_OFFSET(0x9F88380)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarMoveController_TypeDefinitionIndex = 54074;

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

		::System::Void StartMove(::System::Single normalizedPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STARTMOVE_OFFSET))(this, normalizedPosition);
		}

		::System::Void StopMove(::System::Boolean resetPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_STOPMOVE_OFFSET))(this, resetPosition);
		}

		::System::Boolean IsInMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_ISINMOVE_OFFSET))(this);
		}

		::System::Boolean ShouldFaceRight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_SHOULDFACERIGHT_OFFSET))(this);
		}

		::System::Void _StartTimer(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STARTTIMER_OFFSET))(this, duration);
		}

		::System::Void _StopTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__STOPTIMER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean _CheckValid(::System::Single v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CHECKVALID_OFFSET))(this, v);
		}

		::System::Void _ApplyPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__APPLYPOSITION_OFFSET))(this, position);
		}

		::System::Void _CalculateTargetPosition(::System::Single normalizedPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__CALCULATETARGETPOSITION_OFFSET))(this, normalizedPosition);
		}

		::UnityEngine::Vector2 _GetLocalPositionFromWorldPosition(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETLOCALPOSITIONFROMWORLDPOSITION_OFFSET))(this, transform);
		}

		::System::Single _GetCurNormalizedPosition()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARMOVECONTROLLER__GETCURNORMALIZEDPOSITION_OFFSET))(this);
		}
	};
}
