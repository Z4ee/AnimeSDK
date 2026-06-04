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

#define CLASS_1_075C34D03AFA1215_35_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1D7F10)
#define CLASS_1_075C34D03AFA1215_35_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1D7B50)
#define CLASS_1_075C34D03AFA1215_35_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1D7C70)
#define CLASS_1_075C34D03AFA1215_35_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1D7BB0)
#define CLASS_1_075C34D03AFA1215_35_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1D7D00)
#define CLASS_1_075C34D03AFA1215_35_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1D8000)
#define CLASS_1_075C34D03AFA1215_35_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1D7FB0)
#define CLASS_1_075C34D03AFA1215_35_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A1D7A00)
#define CLASS_1_075C34D03AFA1215_35_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A1D7BA0)
#define CLASS_1_075C34D03AFA1215_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1D7A60)
#define CLASS_1_075C34D03AFA1215_35_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1D7E00)
#define CLASS_1_075C34D03AFA1215_35_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1D7E60)
#define CLASS_1_075C34D03AFA1215_35__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1D81D0)
#define CLASS_1_075C34D03AFA1215_35__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1D7AC0)
#define CLASS_1_075C34D03AFA1215_35__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D7A70)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_35_TypeDefinitionIndex = 27575;

class Class_1_075C34D03AFA1215_35 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_35_TypeDefinitionIndex)->GetStaticField(0x36AE0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_35*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_35*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_35_TypeDefinitionIndex)->GetStaticField(0x36AE8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_35*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_35*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_35* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_35* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_35_MERGEFROM_1_OFFSET))(this, a1);
	}
};
