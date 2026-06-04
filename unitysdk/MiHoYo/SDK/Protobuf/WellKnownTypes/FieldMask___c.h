#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class FieldMask; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181CDA00)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181CDA40)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__TOJSON_B__24_0_OFFSET UNITYSDK_OFFSET(0x181CDA50)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x181CDB50)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMask___c_TypeDefinitionIndex = 33937;

	class FieldMask___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask___c**)Il2CppClass::FromTypeDefinitionIndex(FieldMask___c_TypeDefinitionIndex)->GetStaticField(0xE00);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FieldMask___c_TypeDefinitionIndex)->GetStaticField(0xE08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ToJson_b__24_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C__TOJSON_B__24_0_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask* __cctor_b__27_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::FieldMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASK___C___CCTOR_B__27_0_OFFSET))(this);
		}
	};
}
