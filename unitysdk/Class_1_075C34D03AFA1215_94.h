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

#define CLASS_1_075C34D03AFA1215_94_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C0170)
#define CLASS_1_075C34D03AFA1215_94_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2BFCF0)
#define CLASS_1_075C34D03AFA1215_94_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2BFE70)
#define CLASS_1_075C34D03AFA1215_94_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2BFD50)
#define CLASS_1_075C34D03AFA1215_94_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2BFF60)
#define CLASS_1_075C34D03AFA1215_94_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C0260)
#define CLASS_1_075C34D03AFA1215_94_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C0210)
#define CLASS_1_075C34D03AFA1215_94_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E2BFBA0)
#define CLASS_1_075C34D03AFA1215_94_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E2BFD40)
#define CLASS_1_075C34D03AFA1215_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2BFC00)
#define CLASS_1_075C34D03AFA1215_94_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C0060)
#define CLASS_1_075C34D03AFA1215_94_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C00C0)
#define CLASS_1_075C34D03AFA1215_94__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C0430)
#define CLASS_1_075C34D03AFA1215_94__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2BFC60)
#define CLASS_1_075C34D03AFA1215_94__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BFC10)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_94_TypeDefinitionIndex = 32696;

class Class_1_075C34D03AFA1215_94 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKJDLOEGOKP()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_94_TypeDefinitionIndex)->GetStaticField(0x401C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_94_TypeDefinitionIndex)->GetStaticField(0x401C8);
	}
	// static const ::System::Int32 EBMBOKMOPFF = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEDGFNCACIG; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_94*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_94*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_94* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_94* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_94*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_94*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_94_MERGEFROM_1_OFFSET))(this, a1);
	}
};
