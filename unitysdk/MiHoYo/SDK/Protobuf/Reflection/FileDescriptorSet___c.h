#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptorSet; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196BB9B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196BB9F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTORSET___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x196BBA00)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptorSet___c_TypeDefinitionIndex = 34323;

	class FileDescriptorSet___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptorSet___c**)Il2CppClass::FromTypeDefinitionIndex(FileDescriptorSet___c_TypeDefinitionIndex)->GetStaticField(0x499D0);
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
