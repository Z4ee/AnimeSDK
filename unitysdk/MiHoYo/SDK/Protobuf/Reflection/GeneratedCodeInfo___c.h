#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0F7EA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F7EE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B0F7EF0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo___c_TypeDefinitionIndex = 35150;

	class GeneratedCodeInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo___c_TypeDefinitionIndex)->GetStaticField(0x51D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* __cctor_b__25_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C___CCTOR_B__25_0_OFFSET))(this);
		}
	};
}
