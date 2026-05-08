#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_FIELDSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B046A10)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int FieldSerializationData_TypeDefinitionIndex = 31712;

	class FieldSerializationData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* typeName; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* fieldNameHash; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* startIndex; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* dataPosition; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityObjects; // 0x30
		::System::Collections::Generic::List_1<::System::Byte>* byteData; // 0x38
		::Il2CppArray<::System::Byte>* byteDataArray; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_FIELDSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
