#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/RandomVector3InSphereTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INSPHERETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E509120)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INSPHERETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E5090A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_RandomVector3InSphereTask_TypeDefinitionIndex = 76173;

	class VirtualFunctionExtensions_RandomVector3InSphereTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::RandomVector3InSphereTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::RandomVector3InSphereTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INSPHERETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::RandomVector3InSphereTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::RandomVector3InSphereTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INSPHERETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
	};
}
