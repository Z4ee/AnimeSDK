#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class UninterpretedOption; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C99E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181C9A20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C___CCTOR_B__55_0_OFFSET UNITYSDK_OFFSET(0x181C9A30)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption___c_TypeDefinitionIndex = 34002;

	class UninterpretedOption___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption___c**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption___c_TypeDefinitionIndex)->GetStaticField(0x4E9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption* __cctor_b__55_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION___C___CCTOR_B__55_0_OFFSET))(this);
		}
	};
}
