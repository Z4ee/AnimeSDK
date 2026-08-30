#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Struct; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3B0350)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B0390)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B3B03A0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Struct___c_TypeDefinitionIndex = 5425;

	class Struct___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Struct___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Struct___c**)Il2CppClass::FromTypeDefinitionIndex(Struct___c_TypeDefinitionIndex)->GetStaticField(0x169C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Struct* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_STRUCT___C___CCTOR_B__25_0_OFFSET))(this);
		}
	};
}
