#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E4FAED0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FAF90)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedObject_TypeDefinitionIndex = 33289;

	class SharedObject : public ::BehaviorDesigner::Runtime::SharedVariable_1<::UnityEngine::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedObject* op_Explicit(::UnityEngine::Object* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedObject*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECT_OP_EXPLICIT_OFFSET))(value);
		}
	};
}
