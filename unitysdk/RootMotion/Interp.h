#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/InterpolationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_INTERP_BACKINCUBIC_OFFSET UNITYSDK_OFFSET(0xA279A00)
#define ROOTMOTION_INTERP_BACKINQUARTIC_OFFSET UNITYSDK_OFFSET(0xA279A30)
#define ROOTMOTION_INTERP_FLOAT_OFFSET UNITYSDK_OFFSET(0xA261DC0)
#define ROOTMOTION_INTERP_INBACK_OFFSET UNITYSDK_OFFSET(0xA279E10)
#define ROOTMOTION_INTERP_INCUBIC_OFFSET UNITYSDK_OFFSET(0xA279890)
#define ROOTMOTION_INTERP_INELASTICBIG_OFFSET UNITYSDK_OFFSET(0xA279C30)
#define ROOTMOTION_INTERP_INELASTICSMALL_OFFSET UNITYSDK_OFFSET(0xA279BE0)
#define ROOTMOTION_INTERP_INELASTIC_OFFSET UNITYSDK_OFFSET(0xA279F30)
#define ROOTMOTION_INTERP_INOUTCUBIC_OFFSET UNITYSDK_OFFSET(0xA2797E0)
#define ROOTMOTION_INTERP_INOUTQUINTIC_OFFSET UNITYSDK_OFFSET(0xA279810)
#define ROOTMOTION_INTERP_INOUTSINE_OFFSET UNITYSDK_OFFSET(0xA279D10)
#define ROOTMOTION_INTERP_INQUADRATIC_OFFSET UNITYSDK_OFFSET(0xA2798B0)
#define ROOTMOTION_INTERP_INQUARTIC_OFFSET UNITYSDK_OFFSET(0xA279870)
#define ROOTMOTION_INTERP_INQUINTIC_OFFSET UNITYSDK_OFFSET(0xA279850)
#define ROOTMOTION_INTERP_INSINE_OFFSET UNITYSDK_OFFSET(0xA279C80)
#define ROOTMOTION_INTERP_LERPVALUE_OFFSET UNITYSDK_OFFSET(0xA267A00)
#define ROOTMOTION_INTERP_NONE_OFFSET UNITYSDK_OFFSET(0xA2797D0)
#define ROOTMOTION_INTERP_OUTBACKCUBIC_OFFSET UNITYSDK_OFFSET(0xA279A70)
#define ROOTMOTION_INTERP_OUTBACKQUARTIC_OFFSET UNITYSDK_OFFSET(0xA279AB0)
#define ROOTMOTION_INTERP_OUTBACK_OFFSET UNITYSDK_OFFSET(0xA279E40)
#define ROOTMOTION_INTERP_OUTCUBIC_OFFSET UNITYSDK_OFFSET(0xA279990)
#define ROOTMOTION_INTERP_OUTELASTICBIG_OFFSET UNITYSDK_OFFSET(0xA279B70)
#define ROOTMOTION_INTERP_OUTELASTICSMALL_OFFSET UNITYSDK_OFFSET(0xA279B00)
#define ROOTMOTION_INTERP_OUTELASTIC_OFFSET UNITYSDK_OFFSET(0xA279D60)
#define ROOTMOTION_INTERP_OUTINCUBIC_OFFSET UNITYSDK_OFFSET(0xA2799C0)
#define ROOTMOTION_INTERP_OUTINQUARTIC_OFFSET UNITYSDK_OFFSET(0xA279EF0)
#define ROOTMOTION_INTERP_OUTQUARTIC_OFFSET UNITYSDK_OFFSET(0xA279930)
#define ROOTMOTION_INTERP_OUTQUINTIC_OFFSET UNITYSDK_OFFSET(0xA2798C0)
#define ROOTMOTION_INTERP_OUTSINE_OFFSET UNITYSDK_OFFSET(0xA279CD0)
#define ROOTMOTION_INTERP_V3_OFFSET UNITYSDK_OFFSET(0xA279E80)
#define ROOTMOTION_INTERP__CTOR_OFFSET UNITYSDK_OFFSET(0xA279FE0)

namespace RootMotion
{
	inline static constexpr unsigned int Interp_TypeDefinitionIndex = 41794;

	class Interp : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP__CTOR_OFFSET))(this);
		}

		static ::System::Single Float(::System::Single a1, ::RootMotion::InterpolationMode a2)
		{
			return ((::System::Single(*)(::System::Single, ::RootMotion::InterpolationMode))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_FLOAT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 V3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RootMotion::InterpolationMode a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::InterpolationMode))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_V3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single LerpValue(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_LERPVALUE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single None(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_NONE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InOutCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InOutQuintic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTQUINTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InQuintic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUINTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InQuartic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUARTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InQuadratic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUADRATIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutQuintic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTQUINTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutQuartic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTQUARTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutInCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTINCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutInQuartic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTINQUARTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single BackInCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_BACKINCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single BackInQuartic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_BACKINQUARTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutBackCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACKCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutBackQuartic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACKQUARTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutElasticSmall(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTICSMALL_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutElasticBig(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTICBIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InElasticSmall(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTICSMALL_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InElasticBig(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTICBIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INSINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTSINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InOutSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTSINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OutBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACK_OFFSET))(a1, a2, a3);
		}
	};
}
