#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class ListValue; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEFF080)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFF0C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x1BEFF0D0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int ListValue___c_TypeDefinitionIndex = 25996;

	class ListValue___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue___c**)Il2CppClass::FromTypeDefinitionIndex(ListValue___c_TypeDefinitionIndex)->GetStaticField(0x1F530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* __cctor_b__24_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__24_0_OFFSET))(this);
		}
	};
}
