#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORMLIST_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C1B67E0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDTRANSFORMLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B68A0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedTransformList_TypeDefinitionIndex = 31744;

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
