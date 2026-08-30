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

#define CLASS_1_075C34D03AFA1215_109_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E311460)
#define CLASS_1_075C34D03AFA1215_109_CLONE_OFFSET UNITYSDK_OFFSET(0x1E311060)
#define CLASS_1_075C34D03AFA1215_109_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E311190)
#define CLASS_1_075C34D03AFA1215_109_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3110A0)
#define CLASS_1_075C34D03AFA1215_109_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E311280)
#define CLASS_1_075C34D03AFA1215_109_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E311520)
#define CLASS_1_075C34D03AFA1215_109_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3114D0)
#define CLASS_1_075C34D03AFA1215_109_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E311090)
#define CLASS_1_075C34D03AFA1215_109_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E310F40)
#define CLASS_1_075C34D03AFA1215_109_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E310F70)
#define CLASS_1_075C34D03AFA1215_109_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E311380)
#define CLASS_1_075C34D03AFA1215_109_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3113E0)
#define CLASS_1_075C34D03AFA1215_109__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3116C0)
#define CLASS_1_075C34D03AFA1215_109__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E310FD0)
#define CLASS_1_075C34D03AFA1215_109__CTOR_OFFSET UNITYSDK_OFFSET(0x1E310F80)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_109_TypeDefinitionIndex = 33843;

class Class_1_075C34D03AFA1215_109 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_109*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_109*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_109_TypeDefinitionIndex)->GetStaticField(0x44AC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DKPBLBKFDIF()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_109_TypeDefinitionIndex)->GetStaticField(0x44AC8);
	}
	// static const ::System::Int32 HJCIAKPLNPB = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMJNIEBEGBK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_109* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_109*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_109*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_109*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_109* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_109*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_109* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_109*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_109* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_109*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_109_MERGEFROM_1_OFFSET))(this, a1);
	}
};
