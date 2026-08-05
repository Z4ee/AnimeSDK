#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECTLIST_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F8F5D90)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F5E50)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedObjectList_TypeDefinitionIndex = 33926;

	class SharedObjectList : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::Collections::Generic::List_1<::UnityEngine::Object*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECTLIST__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedObjectList* op_Implicit(::System::Collections::Generic::List_1<::UnityEngine::Object*>* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedObjectList*(*)(::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDOBJECTLIST_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
