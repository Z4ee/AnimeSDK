#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldAccessorBase.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System::Reflection { class PropertyInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x173B5370)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MAPFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x173A9F70)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MapFieldAccessor_TypeDefinitionIndex = 33748;

	class MapFieldAccessor : public ::MiHoYo::SDK::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Void _ctor(::System::Reflection::PropertyInfo* property, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MAPFIELDACCESSOR__CTOR_OFFSET))(this, property, descriptor);
		}

		::System::Void SetValue(::MiHoYo::SDK::Protobuf::IMessage* message, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MAPFIELDACCESSOR_SETVALUE_OFFSET))(this, message, value);
		}
	};
}
