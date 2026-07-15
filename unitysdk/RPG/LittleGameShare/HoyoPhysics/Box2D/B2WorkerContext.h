#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORKERCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AB22510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORKERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB26910)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WorkerContext_TypeDefinitionIndex = 35265;

	class B2WorkerContext : public ::System::Object
	{
	public:
		::System::Object* userTask; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* context; // 0x18
		::System::Int32 workerIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORKERCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORKERCONTEXT_CLEAR_OFFSET))(this);
		}
	};
}
