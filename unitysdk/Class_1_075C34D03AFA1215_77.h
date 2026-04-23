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

#define CLASS_1_075C34D03AFA1215_77_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194F93A0)
#define CLASS_1_075C34D03AFA1215_77_CLONE_OFFSET UNITYSDK_OFFSET(0x194F9040)
#define CLASS_1_075C34D03AFA1215_77_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x194F9120)
#define CLASS_1_075C34D03AFA1215_77_EQUALS_OFFSET UNITYSDK_OFFSET(0x194F9080)
#define CLASS_1_075C34D03AFA1215_77_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194F91B0)
#define CLASS_1_075C34D03AFA1215_77_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x194F9460)
#define CLASS_1_075C34D03AFA1215_77_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194F9410)
#define CLASS_1_075C34D03AFA1215_77_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x194F9070)
#define CLASS_1_075C34D03AFA1215_77_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x194F8F20)
#define CLASS_1_075C34D03AFA1215_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194F8F50)
#define CLASS_1_075C34D03AFA1215_77_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194F92C0)
#define CLASS_1_075C34D03AFA1215_77_WRITETO_OFFSET UNITYSDK_OFFSET(0x194F9320)
#define CLASS_1_075C34D03AFA1215_77__CCTOR_OFFSET UNITYSDK_OFFSET(0x194F9510)
#define CLASS_1_075C34D03AFA1215_77__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194F8FB0)
#define CLASS_1_075C34D03AFA1215_77__CTOR_OFFSET UNITYSDK_OFFSET(0x194F8F60)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_77_TypeDefinitionIndex = 29598;

class Class_1_075C34D03AFA1215_77 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_77_TypeDefinitionIndex)->GetStaticField(0x41AD0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_77_TypeDefinitionIndex)->GetStaticField(0x41AD8);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_77*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_77* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_77*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_77*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_MERGEFROM_1_OFFSET))(this, a1);
	}
};
