#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Struct; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC7300)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC7340)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x15DC7350)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Struct___c_TypeDefinitionIndex = 28035;

	class Struct___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct___c**)Il2CppClass::FromTypeDefinitionIndex(Struct___c_TypeDefinitionIndex)->GetStaticField(0xA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct* __cctor_b__24_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCT___C___CCTOR_B__24_0_OFFSET))(this);
		}
	};
}
