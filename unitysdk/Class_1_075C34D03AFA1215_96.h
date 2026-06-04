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

#define CLASS_1_075C34D03AFA1215_96_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A174370)
#define CLASS_1_075C34D03AFA1215_96_CLONE_OFFSET UNITYSDK_OFFSET(0x1A16A990)
#define CLASS_1_075C34D03AFA1215_96_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A174200)
#define CLASS_1_075C34D03AFA1215_96_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A174160)
#define CLASS_1_075C34D03AFA1215_96_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A16B0C0)
#define CLASS_1_075C34D03AFA1215_96_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1743E0)
#define CLASS_1_075C34D03AFA1215_96_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A16B930)
#define CLASS_1_075C34D03AFA1215_96_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A174150)
#define CLASS_1_075C34D03AFA1215_96_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A174080)
#define CLASS_1_075C34D03AFA1215_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1740B0)
#define CLASS_1_075C34D03AFA1215_96_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A174290)
#define CLASS_1_075C34D03AFA1215_96_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1742F0)
#define CLASS_1_075C34D03AFA1215_96__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A174580)
#define CLASS_1_075C34D03AFA1215_96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1740C0)
#define CLASS_1_075C34D03AFA1215_96__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16B8E0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_96_TypeDefinitionIndex = 31429;

class Class_1_075C34D03AFA1215_96 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_96*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_96*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_96_TypeDefinitionIndex)->GetStaticField(0x2CE40);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_96_TypeDefinitionIndex)->GetStaticField(0x2CE48);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_96*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_96*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_96*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_96* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_96*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_96* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_96*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_96*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_96_MERGEFROM_1_OFFSET))(this, a1);
	}
};
