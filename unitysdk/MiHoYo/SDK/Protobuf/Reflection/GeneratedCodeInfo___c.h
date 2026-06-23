#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C6E30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C6E70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1E2C6E80)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo___c_TypeDefinitionIndex = 28556;

	class GeneratedCodeInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo___c_TypeDefinitionIndex)->GetStaticField(0x22F20);
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
