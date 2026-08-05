#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOVOPATHPARTICLE_CONTROLPOINTUPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x114AB910)

inline static constexpr unsigned int MonoVOPathParticle_ControlPointUpdateEvent_TypeDefinitionIndex = 47578;

class MonoVOPathParticle_ControlPointUpdateEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_CONTROLPOINTUPDATEEVENT__CTOR_OFFSET))(this);
	}
};
