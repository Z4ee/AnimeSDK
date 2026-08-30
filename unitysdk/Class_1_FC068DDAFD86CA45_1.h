#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FC068DDAFD86CA45_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F1D40)
#define CLASS_1_FC068DDAFD86CA45_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F1730)
#define CLASS_1_FC068DDAFD86CA45_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F1930)
#define CLASS_1_FC068DDAFD86CA45_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F1790)
#define CLASS_1_FC068DDAFD86CA45_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F1AD0)
#define CLASS_1_FC068DDAFD86CA45_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F1EA0)
#define CLASS_1_FC068DDAFD86CA45_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F1DE0)
#define CLASS_1_FC068DDAFD86CA45_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E5F1770)
#define CLASS_1_FC068DDAFD86CA45_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E5F1760)
#define CLASS_1_FC068DDAFD86CA45_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E5F15D0)
#define CLASS_1_FC068DDAFD86CA45_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E5F1780)
#define CLASS_1_FC068DDAFD86CA45_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1600)
#define CLASS_1_FC068DDAFD86CA45_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F1C00)
#define CLASS_1_FC068DDAFD86CA45_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F1C60)
#define CLASS_1_FC068DDAFD86CA45_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2070)
#define CLASS_1_FC068DDAFD86CA45_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F1660)
#define CLASS_1_FC068DDAFD86CA45_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1610)

inline static constexpr unsigned int Class_1_FC068DDAFD86CA45_1_TypeDefinitionIndex = 34457;

class Class_1_FC068DDAFD86CA45_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPMBHPJILKK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC068DDAFD86CA45_1_TypeDefinitionIndex)->GetStaticField(0x2B0F0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_FC068DDAFD86CA45_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FC068DDAFD86CA45_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC068DDAFD86CA45_1_TypeDefinitionIndex)->GetStaticField(0x2B0F8);
	}
	// static const ::System::Int32 DDMCEKKKDHB = 0xD; // 0x0
	// static const ::System::Int32 IFLCPHEJEFL = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_EA5A5E4D07C4CF2B_1* GEHFEKFEIGM; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MOCFIAEMBFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FC068DDAFD86CA45_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FC068DDAFD86CA45_1*))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FC068DDAFD86CA45_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FC068DDAFD86CA45_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FC068DDAFD86CA45_1* Clone()
	{
		return ((::Class_1_FC068DDAFD86CA45_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EA5A5E4D07C4CF2B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_1*))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FC068DDAFD86CA45_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FC068DDAFD86CA45_1*))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FC068DDAFD86CA45_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FC068DDAFD86CA45_1*))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FC068DDAFD86CA45_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
