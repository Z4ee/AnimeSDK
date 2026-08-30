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
namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_ED2DEB9AF565E22F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE45B50)
#define CLASS_1_ED2DEB9AF565E22F_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE45730)
#define CLASS_1_ED2DEB9AF565E22F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE458B0)
#define CLASS_1_ED2DEB9AF565E22F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE45770)
#define CLASS_1_ED2DEB9AF565E22F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE459D0)
#define CLASS_1_ED2DEB9AF565E22F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE45C90)
#define CLASS_1_ED2DEB9AF565E22F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE45BF0)
#define CLASS_1_ED2DEB9AF565E22F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DE455F0)
#define CLASS_1_ED2DEB9AF565E22F_METHOD_1_9EEA1356C1B86BA8_OFFSET UNITYSDK_OFFSET(0x1DE45760)
#define CLASS_1_ED2DEB9AF565E22F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE45620)
#define CLASS_1_ED2DEB9AF565E22F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE45A40)
#define CLASS_1_ED2DEB9AF565E22F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE45AA0)
#define CLASS_1_ED2DEB9AF565E22F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE45E50)
#define CLASS_1_ED2DEB9AF565E22F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE45680)
#define CLASS_1_ED2DEB9AF565E22F__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE45630)

inline static constexpr unsigned int Class_1_ED2DEB9AF565E22F_TypeDefinitionIndex = 30519;

class Class_1_ED2DEB9AF565E22F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_ED2DEB9AF565E22F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ED2DEB9AF565E22F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED2DEB9AF565E22F_TypeDefinitionIndex)->GetStaticField(0x2D380);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>** StaticGet_KPOCELGJEDD()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED2DEB9AF565E22F_TypeDefinitionIndex)->GetStaticField(0x2D388);
	}
	// static const ::System::Int32 KKLFCGBGMDL = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>* JPEABLNMMOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ED2DEB9AF565E22F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED2DEB9AF565E22F*))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_ED2DEB9AF565E22F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_ED2DEB9AF565E22F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ED2DEB9AF565E22F* Clone()
	{
		return ((::Class_1_ED2DEB9AF565E22F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>* Method_1_9EEA1356C1B86BA8()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_METHOD_1_9EEA1356C1B86BA8_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ED2DEB9AF565E22F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ED2DEB9AF565E22F*))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ED2DEB9AF565E22F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED2DEB9AF565E22F*))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ED2DEB9AF565E22F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
