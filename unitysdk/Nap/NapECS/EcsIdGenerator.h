#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NAP_NAPECS_ECSIDGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x1B2ED6F0)
#define NAP_NAPECS_ECSIDGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EE910)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsIdGenerator_TypeDefinitionIndex = 37385;

	class EcsIdGenerator : public ::System::Object
	{
	public:
		::System::UInt32 _current; // 0x10

		::System::Void _ctor(::System::UInt32 startId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSIDGENERATOR__CTOR_OFFSET))(this, startId);
		}

		::System::UInt32 Generate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSIDGENERATOR_GENERATE_OFFSET))(this);
		}
	};
}
