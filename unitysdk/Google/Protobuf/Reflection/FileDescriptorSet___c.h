#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptorSet; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3850A0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3850E0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B3850F0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet___c_TypeDefinitionIndex = 5451;

	class FileDescriptorSet___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptorSet___c** StaticGet___9()
		{
			return (::Google::Protobuf::Reflection::FileDescriptorSet___c**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet___c_TypeDefinitionIndex)->GetStaticField(0x1F4E0);
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
