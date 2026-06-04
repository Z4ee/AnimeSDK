#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class MethodDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C1F00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181C1F40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x181C1F50)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto___c_TypeDefinitionIndex = 33976;

	class MethodDescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x4DE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* __cctor_b__49_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__49_0_OFFSET))(this);
		}
	};
}
