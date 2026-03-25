#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class OneofDescriptor; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFACCESSOR_GETCASEFIELDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B19F00)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15B19BA0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofAccessor_TypeDefinitionIndex = 6342;

	class OneofAccessor : public ::System::Object
	{
	public:
		::System::Action_1<::Google::Protobuf::IMessage*>* clearDelegate; // 0x10
		::Google::Protobuf::Reflection::OneofDescriptor* descriptor; // 0x18
		::System::Func_2<::Google::Protobuf::IMessage*, ::System::Int32>* caseDelegate; // 0x20

		::System::Void _ctor(::System::Reflection::PropertyInfo* caseProperty, ::System::Reflection::MethodInfo* clearMethod, ::Google::Protobuf::Reflection::OneofDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::System::Reflection::MethodInfo*, ::Google::Protobuf::Reflection::OneofDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFACCESSOR__CTOR_OFFSET))(this, caseProperty, clearMethod, descriptor);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* GetCaseFieldDescriptor(::Google::Protobuf::IMessage* message)
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFACCESSOR_GETCASEFIELDDESCRIPTOR_OFFSET))(this, message);
		}
	};
}
