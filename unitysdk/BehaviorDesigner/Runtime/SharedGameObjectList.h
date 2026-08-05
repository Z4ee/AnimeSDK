#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECTLIST_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F6063D0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F606490)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedGameObjectList_TypeDefinitionIndex = 33917;

	class SharedGameObjectList : public ::BehaviorDesigner::Runtime::SharedVariable_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECTLIST__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedGameObjectList* op_Implicit(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedGameObjectList*(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECTLIST_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
