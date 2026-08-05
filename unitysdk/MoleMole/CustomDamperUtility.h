#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CUSTOMDAMPERUTILITY_CRITICAL_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x1BD82330)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_CRITICAL_HALFLIFE_OFFSET UNITYSDK_OFFSET(0x1BD821C0)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_1_OFFSET UNITYSDK_OFFSET(0x1BD80F10)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_OFFSET UNITYSDK_OFFSET(0x1BD80D40)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_CRITICAL_NOGOALSPEED_1_OFFSET UNITYSDK_OFFSET(0x1BD81D40)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_CRITICAL_NOGOALSPEED_OFFSET UNITYSDK_OFFSET(0x1BD81B60)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_CRITICAL_OFFSET UNITYSDK_OFFSET(0x1BD81950)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_OFFSET UNITYSDK_OFFSET(0x1BD81100)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPING_TO_HALFLIFE_OFFSET UNITYSDK_OFFSET(0x1BD822D0)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DOUBLE_SPRING_DAMPER_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BD820E0)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_DOUBLE_SPRING_DAMPER_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BD81FC0)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_FAST_NEGEXP_OFFSET UNITYSDK_OFFSET(0x1BD80E80)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_FREQUENCY_TO_STIFFNESS_OFFSET UNITYSDK_OFFSET(0x1BD81870)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_HALFLIFE_TO_DAMPING_OFFSET UNITYSDK_OFFSET(0x1BD818F0)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_SQUAREF_OFFSET UNITYSDK_OFFSET(0x1BD810B0)
#define MOLEMOLE_CUSTOMDAMPERUTILITY_STIFFNESS_TO_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x1BD82480)
#define MOLEMOLE_CUSTOMDAMPERUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD824F0)

namespace MoleMole
{
	inline static constexpr unsigned int CustomDamperUtility_TypeDefinitionIndex = 66274;

	class CustomDamperUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void damper(::System::Single& x, ::System::Single g, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_OFFSET))(x, g, halflife, dt);
		}

		static ::System::Void damper_1(::UnityEngine::Vector3& x, ::UnityEngine::Vector3 g, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_1_OFFSET))(x, g, halflife, dt);
		}

		static ::System::Single fast_negexp(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_FAST_NEGEXP_OFFSET))(x);
		}

		static ::System::Single squaref(::System::Single x)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_SQUAREF_OFFSET))(x);
		}

		static ::System::Int16 damper_spring(::System::Single& x, ::System::Single& v, ::System::Single x_goal, ::System::Single v_goal, ::System::Single frequency, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Int16(*)(::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_OFFSET))(x, v, x_goal, v_goal, frequency, halflife, dt);
		}

		static ::System::Void damper_spring_critical(::System::Single& x, ::System::Single& v, ::System::Single x_goal, ::System::Single v_goal, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_CRITICAL_OFFSET))(x, v, x_goal, v_goal, halflife, dt);
		}

		static ::System::Void damper_spring_critical_noGoalSpeed(::System::Single& x, ::System::Single& v, ::System::Single x_goal, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_CRITICAL_NOGOALSPEED_OFFSET))(x, v, x_goal, halflife, dt);
		}

		static ::System::Void damper_spring_critical_noGoalSpeed_1(::UnityEngine::Vector3& x, ::UnityEngine::Vector3& v, ::UnityEngine::Vector3 x_goal, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPER_SPRING_CRITICAL_NOGOALSPEED_1_OFFSET))(x, v, x_goal, halflife, dt);
		}

		static ::System::Void double_spring_damper_implicit(::UnityEngine::Vector3& x, ::UnityEngine::Vector3& v, ::UnityEngine::Vector3& xi, ::UnityEngine::Vector3& vi, ::UnityEngine::Vector3 x_goal, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DOUBLE_SPRING_DAMPER_IMPLICIT_OFFSET))(x, v, xi, vi, x_goal, halflife, dt);
		}

		static ::System::Void double_spring_damper_implicit_1(::System::Single& x, ::System::Single& v, ::System::Single& xi, ::System::Single& vi, ::System::Single x_goal, ::System::Single halflife, ::System::Single dt)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DOUBLE_SPRING_DAMPER_IMPLICIT_1_OFFSET))(x, v, xi, vi, x_goal, halflife, dt);
		}

		static ::System::Single critical_halflife(::System::Single frequency)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_CRITICAL_HALFLIFE_OFFSET))(frequency);
		}

		static ::System::Single critical_frequency(::System::Single halflife)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_CRITICAL_FREQUENCY_OFFSET))(halflife);
		}

		static ::System::Single frequency_to_stiffness(::System::Single frequency)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_FREQUENCY_TO_STIFFNESS_OFFSET))(frequency);
		}

		static ::System::Single stiffness_to_frequency(::System::Single stiffness)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_STIFFNESS_TO_FREQUENCY_OFFSET))(stiffness);
		}

		static ::System::Single halflife_to_damping(::System::Single halflife)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_HALFLIFE_TO_DAMPING_OFFSET))(halflife);
		}

		static ::System::Single damping_to_halflife(::System::Single damping)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMDAMPERUTILITY_DAMPING_TO_HALFLIFE_OFFSET))(damping);
		}
	};
}
