#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptorSet; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0BC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0C00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x1C3B0C10)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet___c_TypeDefinitionIndex = 26002;

	class FileDescriptorSet___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet___c**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet___c_TypeDefinitionIndex)->GetStaticField(0x1F270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet* __cctor_b__24_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__24_0_OFFSET))(this);
		}
	};
}
