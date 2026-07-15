#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2HexColor.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TracyCZone.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_B2TRACYCZONEC_OFFSET UNITYSDK_OFFSET(0xB656230)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_B2TRACYCZONEEND_OFFSET UNITYSDK_OFFSET(0xB656250)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_B2TRACYCZONENC_OFFSET UNITYSDK_OFFSET(0xB656240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_TRACYCFRAMEMARK_OFFSET UNITYSDK_OFFSET(0xB656260)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Profiling_TypeDefinitionIndex = 35184;

	class B2Profiling : public ::System::Object
	{
	public:
		static ::System::Void b2TracyCZoneC(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TracyCZone a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HexColor a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TracyCZone, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HexColor, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_B2TRACYCZONEC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2TracyCZoneNC(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TracyCZone a1, ::System::String* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HexColor a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TracyCZone, ::System::String*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HexColor, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_B2TRACYCZONENC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2TracyCZoneEnd(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TracyCZone a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TracyCZone))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_B2TRACYCZONEEND_OFFSET))(a1);
		}

		static ::System::Void TracyCFrameMark()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PROFILING_TRACYCFRAMEMARK_OFFSET))();
		}
	};
}
