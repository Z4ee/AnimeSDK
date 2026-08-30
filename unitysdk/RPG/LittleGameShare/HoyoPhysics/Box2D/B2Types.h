#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryFilter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SurfaceMaterial.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldDef.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTBODYDEF_OFFSET UNITYSDK_OFFSET(0x1C315960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTCHAINDEF_OFFSET UNITYSDK_OFFSET(0x1C315B10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTFILTER_OFFSET UNITYSDK_OFFSET(0x1C315A60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTQUERYFILTER_OFFSET UNITYSDK_OFFSET(0x1C315A80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTSHAPEDEF_OFFSET UNITYSDK_OFFSET(0x1C315A90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTSURFACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C315AF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTWORLDDEF_OFFSET UNITYSDK_OFFSET(0x1C315890)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Types_TypeDefinitionIndex = 36115;

	class B2Types : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef b2DefaultWorldDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTWORLDDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyDef b2DefaultBodyDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTBODYDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter b2DefaultFilter()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTFILTER_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter b2DefaultQueryFilter()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryFilter(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTQUERYFILTER_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef b2DefaultShapeDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTSHAPEDEF_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial b2DefaultSurfaceMaterial()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTSURFACEMATERIAL_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainDef b2DefaultChainDef()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainDef(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TYPES_B2DEFAULTCHAINDEF_OFFSET))();
		}
	};
}
