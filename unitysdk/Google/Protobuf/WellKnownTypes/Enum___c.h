#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Enum; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDD8620)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD8660)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1BDD8670)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Enum___c_TypeDefinitionIndex = 5455;

	class Enum___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Enum___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Enum___c**)Il2CppClass::FromTypeDefinitionIndex(Enum___c_TypeDefinitionIndex)->GetStaticField(0x39E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Enum* __cctor_b__45_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM___C___CCTOR_B__45_0_OFFSET))(this);
		}
	};
}
