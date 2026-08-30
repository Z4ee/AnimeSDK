#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define SPINE_MATHUTILS_ATAN2_OFFSET UNITYSDK_OFFSET(0x16051AD0)
#define SPINE_MATHUTILS_CLAMP_OFFSET UNITYSDK_OFFSET(0x160586C0)
#define SPINE_MATHUTILS_COSDEG_OFFSET UNITYSDK_OFFSET(0x16052990)
#define SPINE_MATHUTILS_COS_OFFSET UNITYSDK_OFFSET(0x160529D0)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_1_OFFSET UNITYSDK_OFFSET(0x16058740)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET UNITYSDK_OFFSET(0x160586E0)
#define SPINE_MATHUTILS_SINDEG_OFFSET UNITYSDK_OFFSET(0x160529B0)
#define SPINE_MATHUTILS_SIN_OFFSET UNITYSDK_OFFSET(0x160529F0)
#define SPINE_MATHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x160588C0)

namespace Spine
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 38379;

	class MathUtils : public ::System::Object
	{
	public:
		static ::System::Random** StaticGet_random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(MathUtils_TypeDefinitionIndex)->GetStaticField(0x52580);
		}
		// static const ::System::Single PI; // 0x0
		// static const ::System::Single PI2; // 0x0
		// static const ::System::Single RadDeg; // 0x0
		// static const ::System::Single DegRad; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_MATHUTILS__CCTOR_OFFSET))();
		}

		static ::System::Single Sin(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_SIN_OFFSET))(a1);
		}

		static ::System::Single Cos(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_COS_OFFSET))(a1);
		}

		static ::System::Single SinDeg(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_SINDEG_OFFSET))(a1);
		}

		static ::System::Single CosDeg(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_COSDEG_OFFSET))(a1);
		}

		static ::System::Single Atan2(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_ATAN2_OFFSET))(a1, a2);
		}

		static ::System::Single Clamp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_CLAMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single RandomTriangle(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single RandomTriangle_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_RANDOMTRIANGLE_1_OFFSET))(a1, a2, a3);
		}
	};
}
