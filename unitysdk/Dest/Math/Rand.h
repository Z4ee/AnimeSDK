#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_RAND_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1C40F570)
#define DEST_MATH_RAND_INCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1C40EC20)
#define DEST_MATH_RAND_INCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C410E60)
#define DEST_MATH_RAND_INCUBE_OFFSET UNITYSDK_OFFSET(0x1C410270)
#define DEST_MATH_RAND_INSPHERE_OFFSET UNITYSDK_OFFSET(0x1C411020)
#define DEST_MATH_RAND_INSQUARE_OFFSET UNITYSDK_OFFSET(0x1C40FC90)
#define DEST_MATH_RAND_INTRIANGLE_1_OFFSET UNITYSDK_OFFSET(0x1C411420)
#define DEST_MATH_RAND_INTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1C4112F0)
#define DEST_MATH_RAND_NEXTBOOL_OFFSET UNITYSDK_OFFSET(0x1C40F890)
#define DEST_MATH_RAND_NEXTBYTE_OFFSET UNITYSDK_OFFSET(0x1C40F8D0)
#define DEST_MATH_RAND_NEXTDOUBLE_1_OFFSET UNITYSDK_OFFSET(0x1C40F770)
#define DEST_MATH_RAND_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x1C40F730)
#define DEST_MATH_RAND_NEXTFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1C40F160)
#define DEST_MATH_RAND_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x1C40F840)
#define DEST_MATH_RAND_NEXTINTINCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1C40F6A0)
#define DEST_MATH_RAND_NEXTINT_1_OFFSET UNITYSDK_OFFSET(0x1C40F230)
#define DEST_MATH_RAND_NEXTINT_2_OFFSET UNITYSDK_OFFSET(0x1C40F5B0)
#define DEST_MATH_RAND_NEXTINT_OFFSET UNITYSDK_OFFSET(0x1C40F510)
#define DEST_MATH_RAND_NEXTPOSITIVEINT_OFFSET UNITYSDK_OFFSET(0x1C40F6B0)
#define DEST_MATH_RAND_NEXTUINT_OFFSET UNITYSDK_OFFSET(0x1C40F6F0)
#define DEST_MATH_RAND_ONCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C410F70)
#define DEST_MATH_RAND_ONCUBE_OFFSET UNITYSDK_OFFSET(0x1C4104B0)
#define DEST_MATH_RAND_ONSPHERE_OFFSET UNITYSDK_OFFSET(0x1C4111B0)
#define DEST_MATH_RAND_ONSQUARE_OFFSET UNITYSDK_OFFSET(0x1C40FE10)
#define DEST_MATH_RAND_RANDOMANGLEDEGREES_OFFSET UNITYSDK_OFFSET(0x1C40FC40)
#define DEST_MATH_RAND_RANDOMANGLERADIANS_OFFSET UNITYSDK_OFFSET(0x1C40FBF0)
#define DEST_MATH_RAND_RANDOMCOLOR32OPAQUE_OFFSET UNITYSDK_OFFSET(0x1C40FAB0)
#define DEST_MATH_RAND_RANDOMCOLOR32TRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1C40FB40)
#define DEST_MATH_RAND_RANDOMCOLOROPAQUE_OFFSET UNITYSDK_OFFSET(0x1C40F910)
#define DEST_MATH_RAND_RANDOMCOLORTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1C40F9D0)
#define DEST_MATH_RAND_RANDOMROTATION_OFFSET UNITYSDK_OFFSET(0x1C411550)
#define DEST_MATH_RAND_RESETSEED_OFFSET UNITYSDK_OFFSET(0x1C40F550)
#define DEST_MATH_RAND_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1C40F590)
#define DEST_MATH_RAND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C40F290)
#define DEST_MATH_RAND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C40F410)
#define DEST_MATH_RAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C40F430)

namespace Dest::Math
{
	inline static constexpr unsigned int Rand_TypeDefinitionIndex = 33179;

	class Rand : public ::System::Object
	{
	public:
		static ::Dest::Math::Rand** StaticGet__seedGenerator()
		{
			return (::Dest::Math::Rand**)Il2CppClass::FromTypeDefinitionIndex(Rand_TypeDefinitionIndex)->GetStaticField(0x260F0);
		}
		static ::Dest::Math::Rand** StaticGet_Instance()
		{
			return (::Dest::Math::Rand**)Il2CppClass::FromTypeDefinitionIndex(Rand_TypeDefinitionIndex)->GetStaticField(0x260F8);
		}
		// static const ::System::Int32 a = 0x5; // 0x0
		// static const ::System::Int32 b = 0xE; // 0x0
		// static const ::System::Int32 c = 0x1; // 0x0
		// static const ::System::UInt32 DefaultY = 0x104AA1AD; // 0x0
		// static const ::System::UInt32 DefaultZ = 0xD55F8767; // 0x0
		// static const ::System::UInt32 DefaultW = 0x32378FC7; // 0x0
		// static const ::System::UInt32 PositiveMask = 0x7FFFFFFF; // 0x0
		// static const ::System::UInt32 BoolModuloMask = 0x1; // 0x0
		// static const ::System::UInt32 ByteModuloMask = 0xFF; // 0x0
		// static const ::System::Double One_div_uintMaxValuePlusOne; // 0x0
		// static const ::System::Double TwoPi; // 0x0
		::System::UInt32 _y; // 0x10
		::System::UInt32 _x; // 0x14
		::System::UInt32 _w; // 0x18
		::System::UInt32 _z; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_RAND__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_RAND__CTOR_1_OFFSET))(this, seed);
		}

		::System::Void ResetSeed(::System::Int32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RESETSEED_OFFSET))(this, seed);
		}

		::System::Void GetState(::System::UInt32& x, ::System::UInt32& y, ::System::UInt32& z, ::System::UInt32& w)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_GETSTATE_OFFSET))(this, x, y, z, w);
		}

		::System::Void SetState(::System::UInt32 x, ::System::UInt32 y, ::System::UInt32 z, ::System::UInt32 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_SETSTATE_OFFSET))(this, x, y, z, w);
		}

		::System::Int32 NextInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTINT_OFFSET))(this);
		}

		::System::Int32 NextInt_1(::System::Int32 max)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTINT_1_OFFSET))(this, max);
		}

		::System::Int32 NextInt_2(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTINT_2_OFFSET))(this, min, max);
		}

		::System::Int32 NextIntInclusive(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTINTINCLUSIVE_OFFSET))(this, min, max);
		}

		::System::Int32 NextPositiveInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTPOSITIVEINT_OFFSET))(this);
		}

		::System::UInt32 NextUInt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTUINT_OFFSET))(this);
		}

		::System::Double NextDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTDOUBLE_OFFSET))(this);
		}

		::System::Double NextDouble_1(::System::Double min, ::System::Double max)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTDOUBLE_1_OFFSET))(this, min, max);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTFLOAT_OFFSET))(this);
		}

		::System::Single NextFloat_1(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTFLOAT_1_OFFSET))(this, min, max);
		}

		::System::Boolean NextBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTBOOL_OFFSET))(this);
		}

		::System::Byte NextByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_NEXTBYTE_OFFSET))(this);
		}

		::UnityEngine::Color RandomColorOpaque()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RANDOMCOLOROPAQUE_OFFSET))(this);
		}

		::UnityEngine::Color RandomColorTransparent()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RANDOMCOLORTRANSPARENT_OFFSET))(this);
		}

		::UnityEngine::Color32 RandomColor32Opaque()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RANDOMCOLOR32OPAQUE_OFFSET))(this);
		}

		::UnityEngine::Color32 RandomColor32Transparent()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RANDOMCOLOR32TRANSPARENT_OFFSET))(this);
		}

		::System::Single RandomAngleRadians()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RANDOMANGLERADIANS_OFFSET))(this);
		}

		::System::Single RandomAngleDegrees()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RANDOMANGLEDEGREES_OFFSET))(this);
		}

		::UnityEngine::Vector2 InSquare(::System::Single side)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_INSQUARE_OFFSET))(this, side);
		}

		::UnityEngine::Vector2 OnSquare(::System::Single side)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_ONSQUARE_OFFSET))(this, side);
		}

		::UnityEngine::Vector3 InCube(::System::Single side)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_INCUBE_OFFSET))(this, side);
		}

		::UnityEngine::Vector3 OnCube(::System::Single side)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_ONCUBE_OFFSET))(this, side);
		}

		::UnityEngine::Vector2 InCircle(::System::Single radius)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_INCIRCLE_OFFSET))(this, radius);
		}

		::UnityEngine::Vector2 InCircle_1(::System::Single radiusMin, ::System::Single radiusMax)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_INCIRCLE_1_OFFSET))(this, radiusMin, radiusMax);
		}

		::UnityEngine::Vector2 OnCircle(::System::Single radius)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_ONCIRCLE_OFFSET))(this, radius);
		}

		::UnityEngine::Vector3 InSphere(::System::Single radius)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_INSPHERE_OFFSET))(this, radius);
		}

		::UnityEngine::Vector3 OnSphere(::System::Single radius)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_ONSPHERE_OFFSET))(this, radius);
		}

		::UnityEngine::Vector3 InTriangle(::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_INTRIANGLE_OFFSET))(this, v0, v1, v2);
		}

		::UnityEngine::Vector3 InTriangle_1(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_INTRIANGLE_1_OFFSET))(this, v0, v1, v2);
		}

		::UnityEngine::Quaternion RandomRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_RAND_RANDOMROTATION_OFFSET))(this);
		}
	};
}
