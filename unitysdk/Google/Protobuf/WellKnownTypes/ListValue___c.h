#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class ListValue; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17130B60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17130BA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x17130BB0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int ListValue___c_TypeDefinitionIndex = 6234;

	class ListValue___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::ListValue___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::ListValue___c**)Il2CppClass::FromTypeDefinitionIndex(ListValue___c_TypeDefinitionIndex)->GetStaticField(0x5140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::ListValue* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE___C___CCTOR_B__25_0_OFFSET))(this);
		}
	};
}
