#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_075C34D03AFA1215_105_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2F71D0)
#define CLASS_1_075C34D03AFA1215_105_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2F6DD0)
#define CLASS_1_075C34D03AFA1215_105_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2F6F00)
#define CLASS_1_075C34D03AFA1215_105_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2F6E10)
#define CLASS_1_075C34D03AFA1215_105_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2F6FF0)
#define CLASS_1_075C34D03AFA1215_105_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2F7290)
#define CLASS_1_075C34D03AFA1215_105_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2F7240)
#define CLASS_1_075C34D03AFA1215_105_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E2F6E00)
#define CLASS_1_075C34D03AFA1215_105_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E2F6CB0)
#define CLASS_1_075C34D03AFA1215_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6CE0)
#define CLASS_1_075C34D03AFA1215_105_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2F70F0)
#define CLASS_1_075C34D03AFA1215_105_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2F7150)
#define CLASS_1_075C34D03AFA1215_105__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F7430)
#define CLASS_1_075C34D03AFA1215_105__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2F6D40)
#define CLASS_1_075C34D03AFA1215_105__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6CF0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_105_TypeDefinitionIndex = 33106;

class Class_1_075C34D03AFA1215_105 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_105*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_105*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_105_TypeDefinitionIndex)->GetStaticField(0x1ECA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FLJBJMDPFHH()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_105_TypeDefinitionIndex)->GetStaticField(0x1ECA8);
	}
	// static const ::System::Int32 IICKCIKPOKO = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_105*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_105*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_105*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_105* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_105* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_105*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_105*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_105_MERGEFROM_1_OFFSET))(this, a1);
	}
};
