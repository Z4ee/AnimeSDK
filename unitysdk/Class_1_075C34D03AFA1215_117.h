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

#define CLASS_1_075C34D03AFA1215_117_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B99570)
#define CLASS_1_075C34D03AFA1215_117_CLONE_OFFSET UNITYSDK_OFFSET(0x19B991A0)
#define CLASS_1_075C34D03AFA1215_117_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B992C0)
#define CLASS_1_075C34D03AFA1215_117_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B99200)
#define CLASS_1_075C34D03AFA1215_117_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B99350)
#define CLASS_1_075C34D03AFA1215_117_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B99660)
#define CLASS_1_075C34D03AFA1215_117_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B99610)
#define CLASS_1_075C34D03AFA1215_117_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19B99050)
#define CLASS_1_075C34D03AFA1215_117_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19B991F0)
#define CLASS_1_075C34D03AFA1215_117_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B990B0)
#define CLASS_1_075C34D03AFA1215_117_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B99460)
#define CLASS_1_075C34D03AFA1215_117_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B994C0)
#define CLASS_1_075C34D03AFA1215_117__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B99730)
#define CLASS_1_075C34D03AFA1215_117__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B99110)
#define CLASS_1_075C34D03AFA1215_117__CTOR_OFFSET UNITYSDK_OFFSET(0x19B990C0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_117_TypeDefinitionIndex = 32632;

class Class_1_075C34D03AFA1215_117 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_117*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_117*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_117_TypeDefinitionIndex)->GetStaticField(0x4BCB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_117_TypeDefinitionIndex)->GetStaticField(0x4BCB8);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_117* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_117*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_117*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_117*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_117* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_117*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_117* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_117*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_117* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_117*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_117_MERGEFROM_1_OFFSET))(this, a1);
	}
};
