#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Timestamp; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3DECB0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DECF0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1C3DED00)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Timestamp___c_TypeDefinitionIndex = 25999;

	class Timestamp___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp___c**)Il2CppClass::FromTypeDefinitionIndex(Timestamp___c_TypeDefinitionIndex)->GetStaticField(0x1F3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp* __cctor_b__45_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C___CCTOR_B__45_0_OFFSET))(this);
		}
	};
}
