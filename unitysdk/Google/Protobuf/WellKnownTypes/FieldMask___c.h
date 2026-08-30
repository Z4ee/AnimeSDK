#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::WellKnownTypes { class FieldMask; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBC4730)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC4770)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__TOJSON_B__27_0_OFFSET UNITYSDK_OFFSET(0x1DBC4780)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C___CCTOR_B__45_0_OFFSET UNITYSDK_OFFSET(0x1DBC4880)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMask___c_TypeDefinitionIndex = 5418;

	class FieldMask___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask___c_TypeDefinitionIndex)->GetStaticField(0x19040);
		}
		static ::Google::Protobuf::WellKnownTypes::FieldMask___c** StaticGet___9()
		{
			return (::Google::Protobuf::WellKnownTypes::FieldMask___c**)Il2CppClass::FromTypeDefinitionIndex(FieldMask___c_TypeDefinitionIndex)->GetStaticField(0x19048);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ToJson_b__27_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__TOJSON_B__27_0_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::FieldMask* __cctor_b__45_0()
		{
			return ((::Google::Protobuf::WellKnownTypes::FieldMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C___CCTOR_B__45_0_OFFSET))(this);
		}
	};
}
