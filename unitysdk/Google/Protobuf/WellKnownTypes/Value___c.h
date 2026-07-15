#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Value; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDE7EC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE7F00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1BDE7F10)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value___c_TypeDefinitionIndex = 5439;

	class Value___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Value___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Value___c**)Il2CppClass::FromTypeDefinitionIndex(Value___c_TypeDefinitionIndex)->GetStaticField(0x3A6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Value* __cctor_b__56_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Value*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__56_0_OFFSET))(this);
		}
	};
}
