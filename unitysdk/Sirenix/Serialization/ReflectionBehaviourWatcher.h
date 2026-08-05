#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_SERIALIZATION_REFLECTIONBEHAVIOURWATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6CF90)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ReflectionBehaviourWatcher_TypeDefinitionIndex = 93713;

	class ReflectionBehaviourWatcher : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_REFLECTIONBEHAVIOURWATCHER__CTOR_OFFSET))(this);
		}
	};
}
