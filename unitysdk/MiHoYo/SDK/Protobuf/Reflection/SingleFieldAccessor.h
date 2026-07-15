#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldAccessorBase.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class PropertyInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x196C7400)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x196B2720)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SingleFieldAccessor_TypeDefinitionIndex = 34419;

	class SingleFieldAccessor : public ::MiHoYo::SDK::Protobuf::Reflection::FieldAccessorBase
	{
	public:
		::System::Action_1<::MiHoYo::SDK::Protobuf::IMessage*>* clearDelegate; // 0x20
		::System::Action_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* setValueDelegate; // 0x28

		::System::Void _ctor(::System::Reflection::PropertyInfo* a1, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue(::MiHoYo::SDK::Protobuf::IMessage* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
