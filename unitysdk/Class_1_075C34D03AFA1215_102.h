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

#define CLASS_1_075C34D03AFA1215_102_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A462590)
#define CLASS_1_075C34D03AFA1215_102_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4621D0)
#define CLASS_1_075C34D03AFA1215_102_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4622F0)
#define CLASS_1_075C34D03AFA1215_102_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A462230)
#define CLASS_1_075C34D03AFA1215_102_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A462380)
#define CLASS_1_075C34D03AFA1215_102_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A462680)
#define CLASS_1_075C34D03AFA1215_102_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A462630)
#define CLASS_1_075C34D03AFA1215_102_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A462080)
#define CLASS_1_075C34D03AFA1215_102_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A462220)
#define CLASS_1_075C34D03AFA1215_102_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A4620E0)
#define CLASS_1_075C34D03AFA1215_102_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A462480)
#define CLASS_1_075C34D03AFA1215_102_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A4624E0)
#define CLASS_1_075C34D03AFA1215_102__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A462850)
#define CLASS_1_075C34D03AFA1215_102__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A462140)
#define CLASS_1_075C34D03AFA1215_102__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4620F0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_102_TypeDefinitionIndex = 31676;

class Class_1_075C34D03AFA1215_102 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_102*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_102*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_102_TypeDefinitionIndex)->GetStaticField(0x66BB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_102_TypeDefinitionIndex)->GetStaticField(0x66BB8);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_102*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_102*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_102*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_102* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_102*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_102* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_102*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_102* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_102*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_102_MERGEFROM_1_OFFSET))(this, a1);
	}
};
