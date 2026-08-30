#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptor; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFACCESSOR_GETCASEFIELDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B6E8C00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70EDC0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofAccessor_TypeDefinitionIndex = 35174;

	class OneofAccessor : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor* descriptor; // 0x10
		::System::Action_1<::MiHoYo::SDK::Protobuf::IMessage*>* clearDelegate; // 0x18
		::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Int32>* caseDelegate; // 0x20

		::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::System::Reflection::MethodInfo* a2, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::System::Reflection::MethodInfo*, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFACCESSOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* GetCaseFieldDescriptor(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFACCESSOR_GETCASEFIELDDESCRIPTOR_OFFSET))(this, a1);
		}
	};
}
