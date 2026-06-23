#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class PropertyInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1E6F41E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F41D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDACCESSORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F40D0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldAccessorBase_TypeDefinitionIndex = 28566;

	class FieldAccessorBase : public ::System::Object
	{
	public:
		::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* getValueDelegate; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* descriptor; // 0x18

		::System::Void _ctor(::System::Reflection::PropertyInfo* property, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDACCESSORBASE__CTOR_OFFSET))(this, property, descriptor);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Object* GetValue(::MiHoYo::SDK::Protobuf::IMessage* message)
		{
			return ((::System::Object*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDACCESSORBASE_GETVALUE_OFFSET))(this, message);
		}
	};
}
