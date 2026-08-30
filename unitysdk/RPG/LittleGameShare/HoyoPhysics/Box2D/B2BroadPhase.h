#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2HashSet.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2DynamicTree; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2MovePair; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2MoveResult; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2CAA00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2CA490)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BroadPhase_TypeDefinitionIndex = 35914;

	class B2BroadPhase : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::System::Int32> moveArray; // 0x10
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DynamicTree*>* trees; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MovePair*> movePairs; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet moveSet; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MoveResult*> moveResults; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet pairSet; // 0x58
		::System::Int32 movePairCapacity; // 0x68
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt movePairIndex; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BROADPHASE_CLEAR_OFFSET))(this);
		}
	};
}
