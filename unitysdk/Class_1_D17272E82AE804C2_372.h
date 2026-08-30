#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_372_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA65C60)
#define CLASS_1_D17272E82AE804C2_372_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA658B0)
#define CLASS_1_D17272E82AE804C2_372_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA659E0)
#define CLASS_1_D17272E82AE804C2_372_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA65910)
#define CLASS_1_D17272E82AE804C2_372_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA65B50)
#define CLASS_1_D17272E82AE804C2_372_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA65D20)
#define CLASS_1_D17272E82AE804C2_372_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA65CF0)
#define CLASS_1_D17272E82AE804C2_372_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EA658F0)
#define CLASS_1_D17272E82AE804C2_372_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA65830)
#define CLASS_1_D17272E82AE804C2_372_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EA65900)
#define CLASS_1_D17272E82AE804C2_372_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA65860)
#define CLASS_1_D17272E82AE804C2_372_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA65B80)
#define CLASS_1_D17272E82AE804C2_372_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA65BE0)
#define CLASS_1_D17272E82AE804C2_372__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA65E80)
#define CLASS_1_D17272E82AE804C2_372__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA65880)
#define CLASS_1_D17272E82AE804C2_372__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA65870)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_372_TypeDefinitionIndex = 28163;

class Class_1_D17272E82AE804C2_372 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_372*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_372*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_372_TypeDefinitionIndex)->GetStaticField(0x5A990);
	}
	// static const ::System::Int32 GCDEHDAKDHL = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 NOMDEJJPCMH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_372* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_372*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_372*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_372*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_372* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_372*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_372* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_372*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_372* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_372*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_372_MERGEFROM_1_OFFSET))(this, a1);
	}
};
