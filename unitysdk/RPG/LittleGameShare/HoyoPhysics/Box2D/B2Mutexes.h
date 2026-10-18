#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Mutex.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2CREATEMUTEX_OFFSET UNITYSDK_OFFSET(0x1C84BE60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2DESTROYMUTEX_OFFSET UNITYSDK_OFFSET(0x1C84BE70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2LOCKMUTEX_OFFSET UNITYSDK_OFFSET(0x1C84BE80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2UNLOCKMUTEX_OFFSET UNITYSDK_OFFSET(0x1C84BEC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C84BEF0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Mutexes_TypeDefinitionIndex = 36722;

	class B2Mutexes : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES__CTOR_OFFSET))(this);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex b2CreateMutex()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2CREATEMUTEX_OFFSET))();
		}

		static ::System::Void b2DestroyMutex(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2DESTROYMUTEX_OFFSET))(a1);
		}

		static ::System::Void b2LockMutex(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2LOCKMUTEX_OFFSET))(a1);
		}

		static ::System::Void b2UnlockMutex(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mutex&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MUTEXES_B2UNLOCKMUTEX_OFFSET))(a1);
		}
	};
}
