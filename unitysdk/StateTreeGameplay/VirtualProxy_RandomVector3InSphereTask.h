#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/VirtualProxy_StateTreeCommonTaskBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALPROXY_RANDOMVECTOR3INSPHERETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1CB96990)
#define STATETREEGAMEPLAY_VIRTUALPROXY_RANDOMVECTOR3INSPHERETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1CB96930)
#define STATETREEGAMEPLAY_VIRTUALPROXY_RANDOMVECTOR3INSPHERETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB96A00)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_RandomVector3InSphereTask_TypeDefinitionIndex = 47150;

	class VirtualProxy_RandomVector3InSphereTask : public ::StateTreeGameplay::VirtualProxy_StateTreeCommonTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_RANDOMVECTOR3INSPHERETASK__CTOR_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_RANDOMVECTOR3INSPHERETASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_RANDOMVECTOR3INSPHERETASK_ENTERSTATE_OFFSET))(this, self, context, transition);
		}
	};
}
