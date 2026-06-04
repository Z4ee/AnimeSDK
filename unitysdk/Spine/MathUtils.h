#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define SPINE_MATHUTILS_ATAN2_OFFSET UNITYSDK_OFFSET(0x1AC517D0)
#define SPINE_MATHUTILS_CLAMP_OFFSET UNITYSDK_OFFSET(0x1AC580D0)
#define SPINE_MATHUTILS_COSDEG_OFFSET UNITYSDK_OFFSET(0x1AC52690)
#define SPINE_MATHUTILS_COS_OFFSET UNITYSDK_OFFSET(0x1AC526D0)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_1_OFFSET UNITYSDK_OFFSET(0x1AC58210)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1AC580F0)
#define SPINE_MATHUTILS_SINDEG_OFFSET UNITYSDK_OFFSET(0x1AC526B0)
#define SPINE_MATHUTILS_SIN_OFFSET UNITYSDK_OFFSET(0x1AC526F0)
#define SPINE_MATHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC58320)

namespace Spine
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 36738;

	class MathUtils : public ::System::Object
	{
	public:
		static ::System::Random** StaticGet_random()
		{
			return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(MathUtils_TypeDefinitionIndex)->GetStaticField(0x2BD0);
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
