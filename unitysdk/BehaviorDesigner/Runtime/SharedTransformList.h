#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORMLIST_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F8F5FD0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORMLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F6090)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedTransformList_TypeDefinitionIndex = 33931;

	class SharedTransformList : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORMLIST__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedTransformList* op_Implicit(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedTransformList*(*)(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORMLIST_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
