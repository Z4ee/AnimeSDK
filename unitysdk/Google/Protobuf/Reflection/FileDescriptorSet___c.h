#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptorSet; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1906B880)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1906B8C0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1906B8D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet___c_TypeDefinitionIndex = 5462;

	class FileDescriptorSet___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptorSet___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FileDescriptorSet___c**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet___c_TypeDefinitionIndex)->GetStaticField(0x3DFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FileDescriptorSet* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptorSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__25_0_OFFSET))(this);
		}
	};
}
