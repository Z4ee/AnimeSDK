#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexVertex.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKB2FLOATW_OFFSET UNITYSDK_OFFSET(0xC31D060)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKB2SIMPLEX_OFFSET UNITYSDK_OFFSET(0xC31D530)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKFIXEDARRAYSERIES_OFFSET UNITYSDK_OFFSET(0xC31C470)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKSIZESERIES_OFFSET UNITYSDK_OFFSET(0xC31C420)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKUNIONSERIES_OFFSET UNITYSDK_OFFSET(0xC31D010)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_TESTFLOAT_OFFSET UNITYSDK_OFFSET(0xC31DB20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_TESTVEC2_OFFSET UNITYSDK_OFFSET(0xC31DB90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_THROWIFINVALIDB2SIMPLEXVERTEX_OFFSET UNITYSDK_OFFSET(0xC31DC70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_THROWIFSAFERUNTIMEPLATFORM_OFFSET UNITYSDK_OFFSET(0xC31C370)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_THROWIF_OFFSET UNITYSDK_OFFSET(0xC31DC10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xC31DFA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC31C360)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2RuntimeValidator_TypeDefinitionIndex = 36057;

	class B2RuntimeValidator : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RuntimeValidator** StaticGet_Shared()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RuntimeValidator**)Il2CppClass::FromTypeDefinitionIndex(B2RuntimeValidator_TypeDefinitionIndex)->GetStaticField(0x2A530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR__CCTOR_OFFSET))();
		}

		::System::Void ThrowIfSafeRuntimePlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_THROWIFSAFERUNTIMEPLATFORM_OFFSET))(this);
		}

		::System::Single TestFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_TESTFLOAT_OFFSET))(this);
		}

		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 TestVec2()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_TESTVEC2_OFFSET))(this);
		}

		::System::Void ThrowIf(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_THROWIF_OFFSET))(this, a1, a2);
		}

		::System::Void CheckSizeSeries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKSIZESERIES_OFFSET))(this);
		}

		::System::Void CheckFixedArraySeries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKFIXEDARRAYSERIES_OFFSET))(this);
		}

		::System::Void CheckUnionSeries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKUNIONSERIES_OFFSET))(this);
		}

		::System::Void CheckB2FloatW()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKB2FLOATW_OFFSET))(this);
		}

		::System::Void CheckB2Simplex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_CHECKB2SIMPLEX_OFFSET))(this);
		}

		::System::Void ThrowIfInvalidB2SimplexVertex(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexVertex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RUNTIMEVALIDATOR_THROWIFINVALIDB2SIMPLEXVERTEX_OFFSET))(this, a1, a2);
		}
	};
}
