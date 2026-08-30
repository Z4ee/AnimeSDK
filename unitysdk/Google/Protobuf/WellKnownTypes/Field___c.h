#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Field; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBC33F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC3430)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C___CCTOR_B__71_0_OFFSET UNITYSDK_OFFSET(0x1DBC3440)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Field___c_TypeDefinitionIndex = 5442;

	class Field___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Field___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Field___c**)Il2CppClass::FromTypeDefinitionIndex(Field___c_TypeDefinitionIndex)->GetStaticField(0x19020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Field* __cctor_b__71_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Field*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C___CCTOR_B__71_0_OFFSET))(this);
		}
	};
}
