#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTimeline.h"

#define NAP_NAPECS_SCALEDECSWORLDTIMELINE_CREATE_OFFSET UNITYSDK_OFFSET(0x192EBC40)
#define NAP_NAPECS_SCALEDECSWORLDTIMELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192EBE60)
#define NAP_NAPECS_SCALEDECSWORLDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x192ECF60)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ScaledEcsWorldTimeline_TypeDefinitionIndex = 35711;

	class ScaledEcsWorldTimeline : public ::Nap::NapECS::EcsWorldTimeline
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SCALEDECSWORLDTIMELINE__CTOR_OFFSET))(this);
		}

		static ::Nap::NapECS::ScaledEcsWorldTimeline* Create()
		{
			return ((::Nap::NapECS::ScaledEcsWorldTimeline*(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_SCALEDECSWORLDTIMELINE_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SCALEDECSWORLDTIMELINE_DISPOSE_OFFSET))(this);
		}
	};
}
