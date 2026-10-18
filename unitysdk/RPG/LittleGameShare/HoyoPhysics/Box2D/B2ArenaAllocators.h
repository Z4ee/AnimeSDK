#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ArenaAllocator; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class B2ArenaAllocatorTyped_1; }
namespace System { class String; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2CREATEARENAALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1C7CB880)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2DESTROYARENAALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1C7CB8F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GETARENAALLOCATION_OFFSET UNITYSDK_OFFSET(0x1C7CC130)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GETARENACAPACITY_OFFSET UNITYSDK_OFFSET(0x1C7CBE70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GETMAXARENAALLOCATION_OFFSET UNITYSDK_OFFSET(0x1C7CC3F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GROWARENA_OFFSET UNITYSDK_OFFSET(0x1C7CBBB0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArenaAllocators_TypeDefinitionIndex = 36576;

	class B2ArenaAllocators : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* b2CreateArenaAllocator(::System::Int32 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2CREATEARENAALLOCATOR_OFFSET))(a1);
		}

		static ::System::Void b2DestroyArenaAllocator(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2DESTROYARENAALLOCATOR_OFFSET))(a1);
		}

		static ::System::Void b2GrowArena(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GROWARENA_OFFSET))(a1);
		}

		static ::System::Int32 b2GetArenaCapacity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GETARENACAPACITY_OFFSET))(a1);
		}

		static ::System::Int32 b2GetArenaAllocation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GETARENAALLOCATION_OFFSET))(a1);
		}

		static ::System::Int32 b2GetMaxArenaAllocation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATORS_B2GETMAXARENAALLOCATION_OFFSET))(a1);
		}
	};
}
