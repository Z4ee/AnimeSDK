#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class EnumValue; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B2E990)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2E9D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE___C___CCTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0x15B2E9E0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int EnumValue___c_TypeDefinitionIndex = 6240;

	class EnumValue___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::EnumValue___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::EnumValue___c**)Il2CppClass::FromTypeDefinitionIndex(EnumValue___c_TypeDefinitionIndex)->GetStaticField(0xEA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::EnumValue* __cctor_b__35_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::EnumValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE___C___CCTOR_B__35_0_OFFSET))(this);
		}
	};
}
