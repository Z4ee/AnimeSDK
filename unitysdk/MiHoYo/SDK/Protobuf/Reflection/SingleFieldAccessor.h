#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldAccessorBase.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class PropertyInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C5250C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C524E00)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SingleFieldAccessor_TypeDefinitionIndex = 26098;

	class SingleFieldAccessor : public ::MiHoYo::SDK::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Action_1<::MiHoYo::SDK::Protobuf::IMessage*>* clearDelegate; // 0x20
		::System::Action_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* setValueDelegate; // 0x28

		::System::Void _ctor(::System::Reflection::PropertyInfo* property, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* descriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR__CTOR_OFFSET))(this, property, descriptor);
		}

		::System::Void SetValue(::MiHoYo::SDK::Protobuf::IMessage* message, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_SETVALUE_OFFSET))(this, message, value);
		}
	};
}
