#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTimeline.h"

#define NAP_NAPECS_UNSCALEDECSWORLDTIMELINE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B30AA70)
#define NAP_NAPECS_UNSCALEDECSWORLDTIMELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B30AC30)
#define NAP_NAPECS_UNSCALEDECSWORLDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30C390)

namespace Nap::NapECS
{
	inline static constexpr unsigned int UnscaledEcsWorldTimeline_TypeDefinitionIndex = 37288;

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
