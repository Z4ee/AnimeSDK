#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class SourceContext; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3AF0C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3AF100)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1B3AF110)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int SourceContext___c_TypeDefinitionIndex = 5421;

	class SourceContext___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::SourceContext___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::SourceContext___c**)Il2CppClass::FromTypeDefinitionIndex(SourceContext___c_TypeDefinitionIndex)->GetStaticField(0x16990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::SourceContext* __cctor_b__25_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::SourceContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXT___C___CCTOR_B__25_0_OFFSET))(this);
		}
	};
}
