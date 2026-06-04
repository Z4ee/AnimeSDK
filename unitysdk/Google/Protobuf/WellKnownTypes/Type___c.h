#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class Type; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E96530)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E96570)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE___C___CCTOR_B__50_0_OFFSET UNITYSDK_OFFSET(0x17E96580)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Type___c_TypeDefinitionIndex = 5443;

	class Type___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::WellKnownTypes::Type___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::Type___c**)Il2CppClass::FromTypeDefinitionIndex(Type___c_TypeDefinitionIndex)->GetStaticField(0x432B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Type* __cctor_b__50_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE___C___CCTOR_B__50_0_OFFSET))(this);
		}
	};
}
