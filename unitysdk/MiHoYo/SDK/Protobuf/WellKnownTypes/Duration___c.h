#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Duration; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C2080)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173C20C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x173C20D0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Duration___c_TypeDefinitionIndex = 33652;

	class Duration___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration___c**)Il2CppClass::FromTypeDefinitionIndex(Duration___c_TypeDefinitionIndex)->GetStaticField(0xDD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration* __cctor_b__45_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__45_0_OFFSET))(this);
		}
	};
}
