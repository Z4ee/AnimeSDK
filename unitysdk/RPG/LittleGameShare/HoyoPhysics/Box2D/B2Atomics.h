#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicU32.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICCOMPAREEXCHANGEINT_OFFSET UNITYSDK_OFFSET(0xC2C9180)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICFETCHADDINT_OFFSET UNITYSDK_OFFSET(0xC2C9170)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICLOADINT_OFFSET UNITYSDK_OFFSET(0xC2C9160)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICLOADU32_OFFSET UNITYSDK_OFFSET(0xC2C91A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICSTOREINT_OFFSET UNITYSDK_OFFSET(0xC2C9150)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICSTOREU32_OFFSET UNITYSDK_OFFSET(0xC2C9190)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Atomics_TypeDefinitionIndex = 35898;

	class B2Atomics : public ::System::Object
	{
	public:
		static ::System::Void b2AtomicStoreInt(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICSTOREINT_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2AtomicLoadInt(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt& a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICLOADINT_OFFSET))(a1);
		}

		static ::System::Int32 b2AtomicFetchAddInt(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt& a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICFETCHADDINT_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2AtomicCompareExchangeInt(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt& a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICCOMPAREEXCHANGEINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2AtomicStoreU32(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicU32& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicU32&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICSTOREU32_OFFSET))(a1, a2);
		}

		static ::System::UInt32 b2AtomicLoadU32(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicU32& a1)
		{
			return ((::System::UInt32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicU32&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ATOMICS_B2ATOMICLOADU32_OFFSET))(a1);
		}
	};
}
