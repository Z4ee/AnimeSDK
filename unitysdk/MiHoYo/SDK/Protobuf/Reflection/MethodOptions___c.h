#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class MethodOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88F3A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88F3E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E88F3F0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodOptions___c_TypeDefinitionIndex = 28541;

	class MethodOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::MethodOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::MethodOptions___c**)Il2CppClass::FromTypeDefinitionIndex(MethodOptions___c_TypeDefinitionIndex)->GetStaticField(0x22FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C___CCTOR_B__29_0_OFFSET))(this);
		}
	};
}
