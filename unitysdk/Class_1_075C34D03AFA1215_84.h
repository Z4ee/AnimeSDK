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

#define CLASS_1_075C34D03AFA1215_84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19798C90)
#define CLASS_1_075C34D03AFA1215_84_CLONE_OFFSET UNITYSDK_OFFSET(0x197988C0)
#define CLASS_1_075C34D03AFA1215_84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197989E0)
#define CLASS_1_075C34D03AFA1215_84_EQUALS_OFFSET UNITYSDK_OFFSET(0x19798920)
#define CLASS_1_075C34D03AFA1215_84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19798A70)
#define CLASS_1_075C34D03AFA1215_84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19798D80)
#define CLASS_1_075C34D03AFA1215_84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19798D30)
#define CLASS_1_075C34D03AFA1215_84_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19798770)
#define CLASS_1_075C34D03AFA1215_84_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19798910)
#define CLASS_1_075C34D03AFA1215_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197987D0)
#define CLASS_1_075C34D03AFA1215_84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19798B80)
#define CLASS_1_075C34D03AFA1215_84_WRITETO_OFFSET UNITYSDK_OFFSET(0x19798BE0)
#define CLASS_1_075C34D03AFA1215_84__CCTOR_OFFSET UNITYSDK_OFFSET(0x19798E50)
#define CLASS_1_075C34D03AFA1215_84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19798830)
#define CLASS_1_075C34D03AFA1215_84__CTOR_OFFSET UNITYSDK_OFFSET(0x197987E0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_84_TypeDefinitionIndex = 30466;

class Class_1_075C34D03AFA1215_84 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_84*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_84*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_84_TypeDefinitionIndex)->GetStaticField(0x575A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_84_TypeDefinitionIndex)->GetStaticField(0x575A8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_84*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_84*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_84*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_84* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_84*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_84*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
