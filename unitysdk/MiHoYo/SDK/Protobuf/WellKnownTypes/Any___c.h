#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Any; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22A530)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22A570)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0x1E22A580)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any___c_TypeDefinitionIndex = 28475;

	class Any___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WellKnownTypes::Any___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::WellKnownTypes::Any___c**)Il2CppClass::FromTypeDefinitionIndex(Any___c_TypeDefinitionIndex)->GetStaticField(0x23150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Any* __cctor_b__35_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__35_0_OFFSET))(this);
		}
	};
}
