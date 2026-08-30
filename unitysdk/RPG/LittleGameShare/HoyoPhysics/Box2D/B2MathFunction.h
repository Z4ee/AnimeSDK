#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2CosSin.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Mat22.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Plane.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_CENTER_OFFSET UNITYSDK_OFFSET(0x1C2FA1B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C2FA170)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_EXTENTS_OFFSET UNITYSDK_OFFSET(0x1C2FA1F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_OVERLAPS_OFFSET UNITYSDK_OFFSET(0x1C2FA2E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_UNION_OFFSET UNITYSDK_OFFSET(0x1C2FA230)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ABSFLOAT_OFFSET UNITYSDK_OFFSET(0x1C2F89A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ABSINT_OFFSET UNITYSDK_OFFSET(0x1C2F8960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ABS_OFFSET UNITYSDK_OFFSET(0x1C2F8C80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ADD_OFFSET UNITYSDK_OFFSET(0x1C2F8AD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ATAN2_OFFSET UNITYSDK_OFFSET(0x1C2F9840)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CLAMPFLOAT_OFFSET UNITYSDK_OFFSET(0x1C2F89C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CLAMPINT_OFFSET UNITYSDK_OFFSET(0x1C2F8970)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CLAMP_OFFSET UNITYSDK_OFFSET(0x1C2F8E30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2COMPUTEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C2F9620)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2COMPUTECOSSIN_OFFSET UNITYSDK_OFFSET(0x1C2F9340)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2COMPUTEROTATIONBETWEENUNITVECTORS_OFFSET UNITYSDK_OFFSET(0x1C2FACE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CROSSSV_OFFSET UNITYSDK_OFFSET(0x1C2F8A70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CROSSVS_OFFSET UNITYSDK_OFFSET(0x1C2F8A40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CROSS_OFFSET UNITYSDK_OFFSET(0x1C2F8A10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2DISTANCESQUARED_OFFSET UNITYSDK_OFFSET(0x1C2F92B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2DISTANCE_OFFSET UNITYSDK_OFFSET(0x1C2F8F30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2DOT_OFFSET UNITYSDK_OFFSET(0x1C2F89E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2GETINVERSE22_OFFSET UNITYSDK_OFFSET(0x1C2FA090)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2GETLENGTHANDNORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C2F90A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INTEGRATEROTATION_OFFSET UNITYSDK_OFFSET(0x1C2F91E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVMULROT_OFFSET UNITYSDK_OFFSET(0x1C2F9A60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVMULTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1C2F9F40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVROTATEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C2F9D50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVTRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1C2F9DF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISNORMALIZEDROT_OFFSET UNITYSDK_OFFSET(0x1C2F9510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1C2F9010)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDAABB_OFFSET UNITYSDK_OFFSET(0x1C2FAA20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDFLOAT_OFFSET UNITYSDK_OFFSET(0x1C2FA770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDPLANE_OFFSET UNITYSDK_OFFSET(0x1C2FAB50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDROTATION_OFFSET UNITYSDK_OFFSET(0x1C2FA7B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C2FA880)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDVEC2_OFFSET UNITYSDK_OFFSET(0x1C2FA780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LEFTPERP_OFFSET UNITYSDK_OFFSET(0x1C2F8AA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LENGTHSQUARED_OFFSET UNITYSDK_OFFSET(0x1C2F9290)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LENGTH_OFFSET UNITYSDK_OFFSET(0x1C2F8F00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LERP_OFFSET UNITYSDK_OFFSET(0x1C2F8B50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAKEAABB_OFFSET UNITYSDK_OFFSET(0x1C2FA320)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAKEROTFROMUNITVECTOR_OFFSET UNITYSDK_OFFSET(0x1C2F9500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAKEROT_OFFSET UNITYSDK_OFFSET(0x1C2F92E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAXFLOAT_OFFSET UNITYSDK_OFFSET(0x1C2F8990)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAXINT_OFFSET UNITYSDK_OFFSET(0x1C2F8950)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAX_OFFSET UNITYSDK_OFFSET(0x1C2F8DA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MINFLOAT_OFFSET UNITYSDK_OFFSET(0x1C2F8980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MININT_OFFSET UNITYSDK_OFFSET(0x1C2F8940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MIN_OFFSET UNITYSDK_OFFSET(0x1C2F8D10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULADD_OFFSET UNITYSDK_OFFSET(0x1C2F8C00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULMV_OFFSET UNITYSDK_OFFSET(0x1C2FA050)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULROT_OFFSET UNITYSDK_OFFSET(0x1C2F9A10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULSUB_OFFSET UNITYSDK_OFFSET(0x1C2F8C40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULSV_OFFSET UNITYSDK_OFFSET(0x1C2F8BD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1C2F9E30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MUL_OFFSET UNITYSDK_OFFSET(0x1C2F8BA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NEG_OFFSET UNITYSDK_OFFSET(0x1C2F8B30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NLERP_OFFSET UNITYSDK_OFFSET(0x1C2F9550)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NORMALIZEROT_OFFSET UNITYSDK_OFFSET(0x1C2F9150)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1C2F8F70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2PLANESEPARATION_OFFSET UNITYSDK_OFFSET(0x1C2FA6A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2RELATIVEANGLE_OFFSET UNITYSDK_OFFSET(0x1C2F9AB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2RIGHTPERP_OFFSET UNITYSDK_OFFSET(0x1C2F8AC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROTATEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C2F9D00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROT_GETANGLE_OFFSET UNITYSDK_OFFSET(0x1C2F9650)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROT_GETXAXIS_OFFSET UNITYSDK_OFFSET(0x1C2F99E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROT_GETYAXIS_OFFSET UNITYSDK_OFFSET(0x1C2F99F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2SOLVE22_OFFSET UNITYSDK_OFFSET(0x1C2FA0E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2SPRINGDAMPER_OFFSET UNITYSDK_OFFSET(0x1C2FA730)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2SUB_OFFSET UNITYSDK_OFFSET(0x1C2F8B00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1C2F9DA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2UNWINDANGLE_OFFSET UNITYSDK_OFFSET(0x1C2F9CE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2FAE00)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MathFunction_TypeDefinitionIndex = 36023;

	class B2MathFunction : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22* StaticGet_b2Mat22_zero()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22*)Il2CppClass::FromTypeDefinitionIndex(B2MathFunction_TypeDefinitionIndex)->GetStaticField(0xB150);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform* StaticGet_b2Transform_identity()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform*)Il2CppClass::FromTypeDefinitionIndex(B2MathFunction_TypeDefinitionIndex)->GetStaticField(0xB160);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2* StaticGet_b2Vec2_zero()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2*)Il2CppClass::FromTypeDefinitionIndex(B2MathFunction_TypeDefinitionIndex)->GetStaticField(0xB170);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot* StaticGet_b2Rot_identity()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot*)Il2CppClass::FromTypeDefinitionIndex(B2MathFunction_TypeDefinitionIndex)->GetStaticField(0xB178);
		}
		// static const ::System::Single B2_PI; // 0x0
		// static const ::System::Single FLT_EPSILON; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION__CCTOR_OFFSET))();
		}

		static ::System::Int32 b2MinInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MININT_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2MaxInt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAXINT_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2AbsInt(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ABSINT_OFFSET))(a1);
		}

		static ::System::Int32 b2ClampInt(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CLAMPINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2MinFloat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MINFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Single b2MaxFloat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAXFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Single b2AbsFloat(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ABSFLOAT_OFFSET))(a1);
		}

		static ::System::Single b2ClampFloat(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CLAMPFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2Dot(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2DOT_OFFSET))(a1, a2);
		}

		static ::System::Single b2Cross(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CROSS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2CrossVS(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CROSSVS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2CrossSV(::System::Single a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CROSSSV_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2LeftPerp(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LEFTPERP_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2RightPerp(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2RIGHTPERP_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Add(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ADD_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Sub(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2SUB_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Neg(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NEG_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Lerp(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LERP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Mul(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MUL_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2MulSV(::System::Single a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULSV_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2MulAdd(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Single a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULADD_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2MulSub(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Single a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULSUB_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Abs(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ABS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Min(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MIN_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Max(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAX_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Clamp(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2CLAMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2Length(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LENGTH_OFFSET))(a1);
		}

		static ::System::Single b2Distance(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2DISTANCE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Normalize(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NORMALIZE_OFFSET))(a1);
		}

		static ::System::Boolean b2IsNormalized(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISNORMALIZED_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetLengthAndNormalize(::System::Single& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::System::Single&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2GETLENGTHANDNORMALIZE_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2NormalizeRot(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NORMALIZEROT_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2IntegrateRotation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::System::Single a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INTEGRATEROTATION_OFFSET))(a1, a2);
		}

		static ::System::Single b2LengthSquared(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2LENGTHSQUARED_OFFSET))(a1);
		}

		static ::System::Single b2DistanceSquared(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2DISTANCESQUARED_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2MakeRot(::System::Single a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAKEROT_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2MakeRotFromUnitVector(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAKEROTFROMUNITVECTOR_OFFSET))(a1);
		}

		static ::System::Boolean b2IsNormalizedRot(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISNORMALIZEDROT_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2NLerp(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2NLERP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2ComputeAngularVelocity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2COMPUTEANGULARVELOCITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2Rot_GetAngle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROT_GETANGLE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Rot_GetXAxis(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROT_GETXAXIS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Rot_GetYAxis(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROT_GETYAXIS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2MulRot(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULROT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2InvMulRot(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVMULROT_OFFSET))(a1, a2);
		}

		static ::System::Single b2RelativeAngle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2RELATIVEANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single b2UnwindAngle(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2UNWINDANGLE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2RotateVector(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ROTATEVECTOR_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2InvRotateVector(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVROTATEVECTOR_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2TransformPoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2TRANSFORMPOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2InvTransformPoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVTRANSFORMPOINT_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2MulTransforms(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULTRANSFORMS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform b2InvMulTransforms(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2INVMULTRANSFORMS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2MulMV(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MULMV_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22 b2GetInverse22(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2GETINVERSE22_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2Solve22(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2SOLVE22_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2AABB_Contains(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_CONTAINS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2AABB_Center(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_CENTER_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2AABB_Extents(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_EXTENTS_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2AABB_Union(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_UNION_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2AABB_Overlaps(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2AABB_OVERLAPS_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB b2MakeAABB(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB(*)(::System::ReadOnlySpan_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2MAKEAABB_OFFSET))(a1, a2, a3);
		}

		static ::System::Single b2PlaneSeparation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2PLANESEPARATION_OFFSET))(a1, a2);
		}

		static ::System::Single b2SpringDamper(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2SPRINGDAMPER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean b2IsValidFloat(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDFLOAT_OFFSET))(a1);
		}

		static ::System::Boolean b2IsValidVec2(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDVEC2_OFFSET))(a1);
		}

		static ::System::Boolean b2IsValidRotation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDROTATION_OFFSET))(a1);
		}

		static ::System::Boolean b2IsValidTransform(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDTRANSFORM_OFFSET))(a1);
		}

		static ::System::Boolean b2IsValidAABB(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDAABB_OFFSET))(a1);
		}

		static ::System::Boolean b2IsValidPlane(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ISVALIDPLANE_OFFSET))(a1);
		}

		static ::System::Single b2Atan2(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2ATAN2_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CosSin b2ComputeCosSin(::System::Single a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CosSin(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2COMPUTECOSSIN_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot b2ComputeRotationBetweenUnitVectors(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MATHFUNCTION_B2COMPUTEROTATIONBETWEENUNITVECTORS_OFFSET))(a1, a2);
		}
	};
}
