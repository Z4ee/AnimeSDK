#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FC8BF52F067E8047;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_66F48F07052E8E37_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B1930)
#define CLASS_1_66F48F07052E8E37_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B1460)
#define CLASS_1_66F48F07052E8E37_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B1610)
#define CLASS_1_66F48F07052E8E37_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B14C0)
#define CLASS_1_66F48F07052E8E37_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B1740)
#define CLASS_1_66F48F07052E8E37_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B1B60)
#define CLASS_1_66F48F07052E8E37_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B1AB0)
#define CLASS_1_66F48F07052E8E37_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1E4B14B0)
#define CLASS_1_66F48F07052E8E37_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E4B1340)
#define CLASS_1_66F48F07052E8E37_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E4B1490)
#define CLASS_1_66F48F07052E8E37_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1E4B14A0)
#define CLASS_1_66F48F07052E8E37_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B1370)
#define CLASS_1_66F48F07052E8E37_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B17C0)
#define CLASS_1_66F48F07052E8E37_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B1820)
#define CLASS_1_66F48F07052E8E37__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B1D20)
#define CLASS_1_66F48F07052E8E37__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B13C0)
#define CLASS_1_66F48F07052E8E37__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B1380)

inline static constexpr unsigned int Class_1_66F48F07052E8E37_TypeDefinitionIndex = 29579;

class Class_1_66F48F07052E8E37 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FC8BF52F067E8047*>** StaticGet_ECNJECDFPOL()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FC8BF52F067E8047*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66F48F07052E8E37_TypeDefinitionIndex)->GetStaticField(0x18210);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_66F48F07052E8E37*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_66F48F07052E8E37*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66F48F07052E8E37_TypeDefinitionIndex)->GetStaticField(0x18218);
	}
	// static const ::System::Int32 JHCELFPEMFJ = 0xD; // 0x0
	// static const ::System::Int32 BDDGFOPHBML = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* MAOHCPCFLFK; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt64 HHCEMNIBHIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_66F48F07052E8E37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66F48F07052E8E37*))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_66F48F07052E8E37*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_66F48F07052E8E37*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_66F48F07052E8E37* Clone()
	{
		return ((::Class_1_66F48F07052E8E37*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_66F48F07052E8E37* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_66F48F07052E8E37*))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_66F48F07052E8E37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66F48F07052E8E37*))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66F48F07052E8E37_MERGEFROM_1_OFFSET))(this, a1);
	}
};
