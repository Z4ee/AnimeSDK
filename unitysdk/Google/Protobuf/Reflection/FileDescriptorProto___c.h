#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptorProto; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E69390)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E693D0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x17E693E0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorProto___c_TypeDefinitionIndex = 5459;

	class FileDescriptorProto___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptorProto___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FileDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x3E1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptorProto* __cctor_b__98_0()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORPROTO___C___CCTOR_B__98_0_OFFSET))(this);
		}
	};
}
