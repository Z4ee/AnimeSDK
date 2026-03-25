#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Option; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B33D40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B33D80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C___CCTOR_B__30_0_OFFSET UNITYSDK_OFFSET(0x15B33D90)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Option___c_TypeDefinitionIndex = 6242;

	class Option___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Option___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Option___c**)Il2CppClass::FromTypeDefinitionIndex(Option___c_TypeDefinitionIndex)->GetStaticField(0xEC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Option* __cctor_b__30_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Option*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION___C___CCTOR_B__30_0_OFFSET))(this);
		}
	};
}
