#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define SPINE_MATHUTILS_ATAN2_OFFSET UNITYSDK_OFFSET(0x1ECEAC50)
#define SPINE_MATHUTILS_CLAMP_OFFSET UNITYSDK_OFFSET(0x1ECEAC70)
#define SPINE_MATHUTILS_COSDEG_OFFSET UNITYSDK_OFFSET(0x1ECEAC30)
#define SPINE_MATHUTILS_COS_OFFSET UNITYSDK_OFFSET(0x1ECEABF0)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_1_OFFSET UNITYSDK_OFFSET(0x1ECEAE40)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1ECEAC90)
#define SPINE_MATHUTILS_SINDEG_OFFSET UNITYSDK_OFFSET(0x1ECEAC10)
#define SPINE_MATHUTILS_SIN_OFFSET UNITYSDK_OFFSET(0x1ECEABD0)
#define SPINE_MATHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECEAF80)

namespace Spine
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 33516;

	class MathUtils : public ::System::Object
	{
	public:
		static ::System::Random** StaticGet_random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(MathUtils_TypeDefinitionIndex)->GetStaticField(0x28A10);
		}
		// static const ::System::Single PI; // 0x0
		// static const ::System::Single PI2; // 0x0
		// static const ::System::Single RadDeg; // 0x0
		// static const ::System::Single DegRad; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_MATHUTILS__CCTOR_OFFSET))();
		}

		static ::System::Single Sin(::System::Single radians)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_SIN_OFFSET))(radians);
		}

		static ::System::Single Cos(::System::Single radians)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_COS_OFFSET))(radians);
		}

		static ::System::Single SinDeg(::System::Single degrees)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_SINDEG_OFFSET))(degrees);
		}

		static ::System::Single CosDeg(::System::Single degrees)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_COSDEG_OFFSET))(degrees);
		}

		static ::System::Single Atan2(::System::Single y, ::System::Single x)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_ATAN2_OFFSET))(y, x);
		}

		static ::System::Single Clamp(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_CLAMP_OFFSET))(value, min, max);
		}

		static ::System::Single RandomTriangle(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET))(min, max);
		}

		static ::System::Single RandomTriangle_1(::System::Single min, ::System::Single max, ::System::Single mode)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_RANDOMTRIANGLE_1_OFFSET))(min, max, mode);
		}
	};
}
