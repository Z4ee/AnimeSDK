#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS_GET_B2_AABB_MARGIN_OFFSET UNITYSDK_OFFSET(0xB60D710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS_GET_B2_HUGE_OFFSET UNITYSDK_OFFSET(0xB60A130)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS_GET_B2_LINEAR_SLOP_OFFSET UNITYSDK_OFFSET(0xB6141A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB614200)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Constants_TypeDefinitionIndex = 35066;

	class B2Constants : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_B2_MAX_ROTATION()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(B2Constants_TypeDefinitionIndex)->GetStaticField(0xF480);
		}
		static ::System::Single* StaticGet_B2_SPECULATIVE_DISTANCE()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(B2Constants_TypeDefinitionIndex)->GetStaticField(0xF484);
		}
		// static const ::System::Int32 B2_MAX_WORKERS = 0x40; // 0x0
		// static const ::System::Int32 B2_GRAPH_COLOR_COUNT = 0x18; // 0x0
		// static const ::System::Int32 B2_MAX_WORLDS = 0x80; // 0x0
		// static const ::System::Single B2_TIME_TO_SLEEP; // 0x0
		// static const ::System::Int32 B2_MAX_CONTINUOUS_SENSOR_HITS = 0x8; // 0x0
		// static const ::System::Int32 B2_MAX_POLYGON_VERTICES = 0x8; // 0x0
		// static const ::System::UInt64 B2_DEFAULT_CATEGORY_BITS = 0x1; // 0x0
		// static const ::System::UInt64 B2_DEFAULT_MASK_BITS = 0xFFFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int32 B2_NULL_INDEX = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 B2_ALIGNMENT = 0x20; // 0x0
		// static const ::System::Int32 B2_SECRET_COOKIE = 0x119417; // 0x0
		// static const ::System::Int32 B2_HASH_INIT = 0x1505; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS__CCTOR_OFFSET))();
		}

		static ::System::Single get_B2_HUGE()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS_GET_B2_HUGE_OFFSET))();
		}

		static ::System::Single get_B2_LINEAR_SLOP()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS_GET_B2_LINEAR_SLOP_OFFSET))();
		}

		static ::System::Single get_B2_AABB_MARGIN()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTANTS_GET_B2_AABB_MARGIN_OFFSET))();
		}
	};
}
