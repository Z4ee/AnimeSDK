#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DB3ED0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB3F10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C___CCTOR_B__79_0_OFFSET UNITYSDK_OFFSET(0x15DB3F20)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorProto___c_TypeDefinitionIndex = 28048;

	class FileDescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x21E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto* __cctor_b__79_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C___CCTOR_B__79_0_OFFSET))(this);
		}
	};
}
