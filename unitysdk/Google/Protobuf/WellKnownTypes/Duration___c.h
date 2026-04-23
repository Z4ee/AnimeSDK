#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Duration; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17129600)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17129640)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x17129650)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Duration___c_TypeDefinitionIndex = 6219;

	class Duration___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Duration___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Duration___c**)Il2CppClass::FromTypeDefinitionIndex(Duration___c_TypeDefinitionIndex)->GetStaticField(0x4C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Duration* __cctor_b__46_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Duration*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION___C___CCTOR_B__46_0_OFFSET))(this);
		}
	};
}
