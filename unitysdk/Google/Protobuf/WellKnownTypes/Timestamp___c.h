#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Timestamp; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3B1E80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B1EC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1B3B1ED0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Timestamp___c_TypeDefinitionIndex = 5433;

	class Timestamp___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Timestamp___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Timestamp___c**)Il2CppClass::FromTypeDefinitionIndex(Timestamp___c_TypeDefinitionIndex)->GetStaticField(0x169F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Timestamp* __cctor_b__53_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Timestamp*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
