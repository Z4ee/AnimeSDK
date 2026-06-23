#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Task.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNKNOWNTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E384680)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int UnknownTask_TypeDefinitionIndex = 33381;

	class UnknownTask : public ::BehaviorDesigner::Runtime::Tasks::Task
	{
	public:
		::System::Collections::Generic::List_1<::System::Byte>* byteData; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* startIndex; // 0x58
		::System::String* JSONSerialization; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* fieldNameHash; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* dataPosition; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNKNOWNTASK__CTOR_OFFSET))(this);
		}
	};
}
