#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTimeline.h"

#define NAP_NAPECS_SCALEDECSWORLDFIXEDTIMELINE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C859A50)
#define NAP_NAPECS_SCALEDECSWORLDFIXEDTIMELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C859CA0)
#define NAP_NAPECS_SCALEDECSWORLDFIXEDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85ACD0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ScaledEcsWorldFixedTimeline_TypeDefinitionIndex = 37949;

	class ScaledEcsWorldFixedTimeline : public ::Nap::NapECS::EcsWorldTimeline
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SCALEDECSWORLDFIXEDTIMELINE__CTOR_OFFSET))(this);
		}

		static ::Nap::NapECS::ScaledEcsWorldFixedTimeline* Create()
		{
			return ((::Nap::NapECS::ScaledEcsWorldFixedTimeline*(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_SCALEDECSWORLDFIXEDTIMELINE_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_SCALEDECSWORLDFIXEDTIMELINE_DISPOSE_OFFSET))(this);
		}
	};
}
