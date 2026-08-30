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

#define CLASS_1_075C34D03AFA1215_74_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05F3D0)
#define CLASS_1_075C34D03AFA1215_74_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05EFD0)
#define CLASS_1_075C34D03AFA1215_74_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05F100)
#define CLASS_1_075C34D03AFA1215_74_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05F010)
#define CLASS_1_075C34D03AFA1215_74_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05F1F0)
#define CLASS_1_075C34D03AFA1215_74_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05F490)
#define CLASS_1_075C34D03AFA1215_74_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05F440)
#define CLASS_1_075C34D03AFA1215_74_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E05F000)
#define CLASS_1_075C34D03AFA1215_74_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E05EEB0)
#define CLASS_1_075C34D03AFA1215_74_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05EEE0)
#define CLASS_1_075C34D03AFA1215_74_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05F2F0)
#define CLASS_1_075C34D03AFA1215_74_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05F350)
#define CLASS_1_075C34D03AFA1215_74__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05F630)
#define CLASS_1_075C34D03AFA1215_74__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05EF40)
#define CLASS_1_075C34D03AFA1215_74__CTOR_OFFSET UNITYSDK_OFFSET(0x1E05EEF0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_74_TypeDefinitionIndex = 30633;

class Class_1_075C34D03AFA1215_74 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CKELHPCLDIK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_74_TypeDefinitionIndex)->GetStaticField(0x3240);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_74*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_74*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_74_TypeDefinitionIndex)->GetStaticField(0x3248);
	}
	// static const ::System::Int32 ODGCPIHMKGE = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* APHIOEFFLFK; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_74*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_74*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_74*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_74* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_74* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_74*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_74*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_74_MERGEFROM_1_OFFSET))(this, a1);
	}
};
