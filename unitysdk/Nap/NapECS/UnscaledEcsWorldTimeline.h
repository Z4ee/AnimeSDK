#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTimeline.h"

#define NAP_NAPECS_UNSCALEDECSWORLDTIMELINE_CREATE_OFFSET UNITYSDK_OFFSET(0x192EBB60)
#define NAP_NAPECS_UNSCALEDECSWORLDTIMELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192EBD20)
#define NAP_NAPECS_UNSCALEDECSWORLDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x192ED4C0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int UnscaledEcsWorldTimeline_TypeDefinitionIndex = 35773;

	class UnscaledEcsWorldTimeline : public ::Nap::NapECS::EcsWorldTimeline
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDTIMELINE__CTOR_OFFSET))(this);
		}

		static ::Nap::NapECS::UnscaledEcsWorldTimeline* Create()
		{
			return ((::Nap::NapECS::UnscaledEcsWorldTimeline*(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDTIMELINE_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDTIMELINE_DISPOSE_OFFSET))(this);
		}
	};
}
