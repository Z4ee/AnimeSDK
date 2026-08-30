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

#define CLASS_1_075C34D03AFA1215_42_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E334010)
#define CLASS_1_075C34D03AFA1215_42_CLONE_OFFSET UNITYSDK_OFFSET(0x1E333B90)
#define CLASS_1_075C34D03AFA1215_42_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E333D10)
#define CLASS_1_075C34D03AFA1215_42_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E333BF0)
#define CLASS_1_075C34D03AFA1215_42_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E333E00)
#define CLASS_1_075C34D03AFA1215_42_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E334100)
#define CLASS_1_075C34D03AFA1215_42_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3340B0)
#define CLASS_1_075C34D03AFA1215_42_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E333A40)
#define CLASS_1_075C34D03AFA1215_42_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E333BE0)
#define CLASS_1_075C34D03AFA1215_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E333AA0)
#define CLASS_1_075C34D03AFA1215_42_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E333F00)
#define CLASS_1_075C34D03AFA1215_42_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E333F60)
#define CLASS_1_075C34D03AFA1215_42__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3342D0)
#define CLASS_1_075C34D03AFA1215_42__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E333B00)
#define CLASS_1_075C34D03AFA1215_42__CTOR_OFFSET UNITYSDK_OFFSET(0x1E333AB0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_42_TypeDefinitionIndex = 28959;

class Class_1_075C34D03AFA1215_42 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_42*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_42*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_42_TypeDefinitionIndex)->GetStaticField(0x519F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GOKCHGKCBMD()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_42_TypeDefinitionIndex)->GetStaticField(0x519F8);
	}
	// static const ::System::Int32 CFNLKMMLIIO = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJIOBHPOEIC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_42*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_42*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_42*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_42* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_42* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_42*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_42*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_42_MERGEFROM_1_OFFSET))(this, a1);
	}
};
