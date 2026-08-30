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

#define CLASS_1_075C34D03AFA1215_89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57A3F0)
#define CLASS_1_075C34D03AFA1215_89_CLONE_OFFSET UNITYSDK_OFFSET(0x1E579FF0)
#define CLASS_1_075C34D03AFA1215_89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57A120)
#define CLASS_1_075C34D03AFA1215_89_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57A030)
#define CLASS_1_075C34D03AFA1215_89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57A210)
#define CLASS_1_075C34D03AFA1215_89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57A4B0)
#define CLASS_1_075C34D03AFA1215_89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57A460)
#define CLASS_1_075C34D03AFA1215_89_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E57A020)
#define CLASS_1_075C34D03AFA1215_89_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E579ED0)
#define CLASS_1_075C34D03AFA1215_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E579F00)
#define CLASS_1_075C34D03AFA1215_89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57A310)
#define CLASS_1_075C34D03AFA1215_89_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57A370)
#define CLASS_1_075C34D03AFA1215_89__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57A650)
#define CLASS_1_075C34D03AFA1215_89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E579F60)
#define CLASS_1_075C34D03AFA1215_89__CTOR_OFFSET UNITYSDK_OFFSET(0x1E579F10)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_89_TypeDefinitionIndex = 32557;

class Class_1_075C34D03AFA1215_89 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_89*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_89_TypeDefinitionIndex)->GetStaticField(0x54680);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GHPOJIAMADJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_89_TypeDefinitionIndex)->GetStaticField(0x54688);
	}
	// static const ::System::Int32 HKJOHHLBMMB = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PAGOGAPMDAA; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_89*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_89*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_89*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_89* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_89*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_89*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
