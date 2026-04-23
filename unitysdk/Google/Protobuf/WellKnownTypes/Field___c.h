#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Field; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1712E7A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1712E7E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD___C___CCTOR_B__71_0_OFFSET UNITYSDK_OFFSET(0x1712E7F0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Field___c_TypeDefinitionIndex = 6246;

	class Field___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Field___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Field___c**)Il2CppClass::FromTypeDefinitionIndex(Field___c_TypeDefinitionIndex)->GetStaticField(0x4FB0);
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
