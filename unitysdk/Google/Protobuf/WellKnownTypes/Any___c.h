#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Any; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B2A7B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2A7F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x15B2A800)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any___c_TypeDefinitionIndex = 6206;

	class Any___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Any___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Any___c**)Il2CppClass::FromTypeDefinitionIndex(Any___c_TypeDefinitionIndex)->GetStaticField(0xE8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Any* __cctor_b__38_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
