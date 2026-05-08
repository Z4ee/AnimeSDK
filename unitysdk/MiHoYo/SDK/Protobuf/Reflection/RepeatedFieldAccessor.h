#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldAccessorBase.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C3DEA30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DEA20)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int RepeatedFieldAccessor_TypeDefinitionIndex = 26095;

	class RepeatedFieldAccessor : public ::MiHoYo::SDK::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Void _ctor(::System::Reflection::PropertyInfo* property, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR__CTOR_OFFSET))(this, property, descriptor);
		}

		::System::Void SetValue(::MiHoYo::SDK::Protobuf::IMessage* message, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REPEATEDFIELDACCESSOR_SETVALUE_OFFSET))(this, message, value);
		}
	};
}
