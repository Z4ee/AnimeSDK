#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/VariableSynchronizer_AnimatorParameterType.h"
#include "unitysdk/BehaviorDesigner/Runtime/VariableSynchronizer_SynchronizationType.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace System { class String; }
namespace System { struct Enum; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }

#define BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SYNCHRONIZEDVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E208030)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int VariableSynchronizer_SynchronizedVariable_TypeDefinitionIndex = 33272;

	class VariableSynchronizer_SynchronizedVariable : public ::System::Object
	{
	public:
		::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizationType synchronizationType; // 0x10
		::System::Boolean setVariable; // 0x14
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x18
		::System::String* variableName; // 0x20
		::System::Boolean global; // 0x28
		::UnityEngine::Component* targetComponent; // 0x30
		::System::String* targetName; // 0x38
		::System::Boolean targetGlobal; // 0x40
		::BehaviorDesigner::Runtime::SharedVariable* targetSharedVariable; // 0x48
		::System::Action_1<::System::Object*>* setDelegate; // 0x50
		::System::Func_1<::System::Object*>* getDelegate; // 0x58
		::UnityEngine::Animator* animator; // 0x60
		::BehaviorDesigner::Runtime::VariableSynchronizer_AnimatorParameterType animatorParameterType; // 0x68
		::System::Int32 targetID; // 0x6C
		::System::Action_1<::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizedVariable*>* thirdPartyTick; // 0x70
		::System::Enum* variableType; // 0x78
		::System::Object* thirdPartyVariable; // 0x80
		::BehaviorDesigner::Runtime::SharedVariable* sharedVariable; // 0x88

		::System::Void _ctor(::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizationType synchronizationType, ::System::Boolean setVariable, ::BehaviorDesigner::Runtime::Behavior* behavior, ::System::String* variableName, ::System::Boolean global, ::UnityEngine::Component* targetComponent, ::System::String* targetName, ::System::Boolean targetGlobal)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::VariableSynchronizer_SynchronizationType, ::System::Boolean, ::BehaviorDesigner::Runtime::Behavior*, ::System::String*, ::System::Boolean, ::UnityEngine::Component*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESYNCHRONIZER_SYNCHRONIZEDVARIABLE__CTOR_OFFSET))(this, synchronizationType, setVariable, behavior, variableName, global, targetComponent, targetName, targetGlobal);
		}
	};
}
