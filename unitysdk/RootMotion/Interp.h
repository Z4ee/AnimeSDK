#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/InterpolationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_INTERP_BACKINCUBIC_OFFSET UNITYSDK_OFFSET(0x8E4F260)
#define ROOTMOTION_INTERP_BACKINQUARTIC_OFFSET UNITYSDK_OFFSET(0x8E4F290)
#define ROOTMOTION_INTERP_FLOAT_OFFSET UNITYSDK_OFFSET(0x8E465E0)
#define ROOTMOTION_INTERP_INBACK_OFFSET UNITYSDK_OFFSET(0x8E4F670)
#define ROOTMOTION_INTERP_INCUBIC_OFFSET UNITYSDK_OFFSET(0x8E4F0F0)
#define ROOTMOTION_INTERP_INELASTICBIG_OFFSET UNITYSDK_OFFSET(0x8E4F490)
#define ROOTMOTION_INTERP_INELASTICSMALL_OFFSET UNITYSDK_OFFSET(0x8E4F440)
#define ROOTMOTION_INTERP_INELASTIC_OFFSET UNITYSDK_OFFSET(0x8E4F7D0)
#define ROOTMOTION_INTERP_INOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x8E4F040)
#define ROOTMOTION_INTERP_INOUTQUINTIC_OFFSET UNITYSDK_OFFSET(0x8E4F070)
#define ROOTMOTION_INTERP_INOUTSINE_OFFSET UNITYSDK_OFFSET(0x8E4F570)
#define ROOTMOTION_INTERP_INQUADRATIC_OFFSET UNITYSDK_OFFSET(0x8E4F110)
#define ROOTMOTION_INTERP_INQUARTIC_OFFSET UNITYSDK_OFFSET(0x8E4F0D0)
#define ROOTMOTION_INTERP_INQUINTIC_OFFSET UNITYSDK_OFFSET(0x8E4F0B0)
#define ROOTMOTION_INTERP_INSINE_OFFSET UNITYSDK_OFFSET(0x8E4F4E0)
#define ROOTMOTION_INTERP_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x8E4F750)
#define ROOTMOTION_INTERP_NONE_OFFSET UNITYSDK_OFFSET(0x8E4F030)
#define ROOTMOTION_INTERP_OUTBACKCUBIC_OFFSET UNITYSDK_OFFSET(0x8E4F2D0)
#define ROOTMOTION_INTERP_OUTBACKQUARTIC_OFFSET UNITYSDK_OFFSET(0x8E4F310)
#define ROOTMOTION_INTERP_OUTBACK_OFFSET UNITYSDK_OFFSET(0x8E4F6A0)
#define ROOTMOTION_INTERP_OUTCUBIC_OFFSET UNITYSDK_OFFSET(0x8E4F1F0)
#define ROOTMOTION_INTERP_OUTELASTICBIG_OFFSET UNITYSDK_OFFSET(0x8E4F3D0)
#define ROOTMOTION_INTERP_OUTELASTICSMALL_OFFSET UNITYSDK_OFFSET(0x8E4F360)
#define ROOTMOTION_INTERP_OUTELASTIC_OFFSET UNITYSDK_OFFSET(0x8E4F5C0)
#define ROOTMOTION_INTERP_OUTINCUBIC_OFFSET UNITYSDK_OFFSET(0x8E4F220)
#define ROOTMOTION_INTERP_OUTINQUARTIC_OFFSET UNITYSDK_OFFSET(0x8E4F790)
#define ROOTMOTION_INTERP_OUTQUARTIC_OFFSET UNITYSDK_OFFSET(0x8E4F190)
#define ROOTMOTION_INTERP_OUTQUINTIC_OFFSET UNITYSDK_OFFSET(0x8E4F120)
#define ROOTMOTION_INTERP_OUTSINE_OFFSET UNITYSDK_OFFSET(0x8E4F530)
#define ROOTMOTION_INTERP_V3_OFFSET UNITYSDK_OFFSET(0x8E4F6E0)
#define ROOTMOTION_INTERP__CTOR_OFFSET UNITYSDK_OFFSET(0x8E4F880)

namespace RootMotion
{
	inline static constexpr unsigned int Interp_TypeDefinitionIndex = 40991;

	class Interp : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP__CTOR_OFFSET))(this);
		}

		static ::System::Single Float(::System::Single t, ::RootMotion::InterpolationMode mode)
		{
			return ((::System::Single(*)(::System::Single, ::RootMotion::InterpolationMode))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_FLOAT_OFFSET))(t, mode);
		}

		static ::UnityEngine::Vector3 V3(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::System::Single t, ::RootMotion::InterpolationMode mode)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::InterpolationMode))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_V3_OFFSET))(v1, v2, t, mode);
		}

		static ::System::Single LerpValue(::System::Single value, ::System::Single target, ::System::Single increaseSpeed, ::System::Single decreaseSpeed, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_LERPVALUE_OFFSET))(value, target, increaseSpeed, decreaseSpeed, deltaTime);
		}

		static ::System::Single None(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_NONE_OFFSET))(t, b, c);
		}

		static ::System::Single InOutCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single InOutQuintic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTQUINTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InQuintic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUINTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single InQuadratic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INQUADRATIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutQuintic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTQUINTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutInCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTINCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutInQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTINQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single BackInCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_BACKINCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single BackInQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_BACKINQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutBackCubic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACKCUBIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutBackQuartic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACKQUARTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutElasticSmall(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTICSMALL_OFFSET))(t, b, c);
		}

		static ::System::Single OutElasticBig(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTICBIG_OFFSET))(t, b, c);
		}

		static ::System::Single InElasticSmall(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTICSMALL_OFFSET))(t, b, c);
		}

		static ::System::Single InElasticBig(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTICBIG_OFFSET))(t, b, c);
		}

		static ::System::Single InSine(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INSINE_OFFSET))(t, b, c);
		}

		static ::System::Single OutSine(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTSINE_OFFSET))(t, b, c);
		}

		static ::System::Single InOutSine(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INOUTSINE_OFFSET))(t, b, c);
		}

		static ::System::Single InElastic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INELASTIC_OFFSET))(t, b, c);
		}

		static ::System::Single OutElastic(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTELASTIC_OFFSET))(t, b, c);
		}

		static ::System::Single InBack(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_INBACK_OFFSET))(t, b, c);
		}

		static ::System::Single OutBack(::System::Single t, ::System::Single b, ::System::Single c)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_INTERP_OUTBACK_OFFSET))(t, b, c);
		}
	};
}
