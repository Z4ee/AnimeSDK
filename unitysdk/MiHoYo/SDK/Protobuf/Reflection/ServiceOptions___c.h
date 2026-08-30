#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceOptions; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B101070)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1010B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1B1010C0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceOptions___c_TypeDefinitionIndex = 35133;

	class ServiceOptions___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions___c**)Il2CppClass::FromTypeDefinitionIndex(ServiceOptions___c_TypeDefinitionIndex)->GetStaticField(0x528A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__29_0_OFFSET))(this);
		}
	};
}
