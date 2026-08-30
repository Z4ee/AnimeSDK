#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldAccessorBase.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class PropertyInfo; }

#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1DBB3190)
#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1DBB31C0)
#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBB28E0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SingleFieldAccessor_TypeDefinitionIndex = 5567;

	class SingleFieldAccessor : public ::Google::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Action_2<::Google::Protobuf::IMessage*, ::System::Object*>* setValueDelegate; // 0x20
		::System::Action_1<::Google::Protobuf::IMessage*>* clearDelegate; // 0x28
		::System::Func_2<::Google::Protobuf::IMessage*, ::System::Boolean>* hasDelegate; // 0x30

		::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::Google::Protobuf::Reflection::FieldDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasValue(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_HASVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue(::Google::Protobuf::IMessage* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
