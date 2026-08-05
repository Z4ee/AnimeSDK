#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystem.h"

#define NAP_NAPECS_ECSSYSTEMMETA_DUMMYECSCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C851820)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemMeta_DummyEcsClass_TypeDefinitionIndex = 37932;

	class EcsSystemMeta_DummyEcsClass : public ::Nap::NapECS::EcsSystem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA_DUMMYECSCLASS__CTOR_OFFSET))(this);
		}
	};
}
