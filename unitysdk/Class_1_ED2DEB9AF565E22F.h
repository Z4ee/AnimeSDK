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

#define CLASS_1_ED2DEB9AF565E22F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A565C00)
#define CLASS_1_ED2DEB9AF565E22F_CLONE_OFFSET UNITYSDK_OFFSET(0x1A565840)
#define CLASS_1_ED2DEB9AF565E22F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A565960)
#define CLASS_1_ED2DEB9AF565E22F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A565880)
#define CLASS_1_ED2DEB9AF565E22F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A565A10)
#define CLASS_1_ED2DEB9AF565E22F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A565D40)
#define CLASS_1_ED2DEB9AF565E22F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A565CA0)
#define CLASS_1_ED2DEB9AF565E22F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A565700)
#define CLASS_1_ED2DEB9AF565E22F_METHOD_1_9EEA1356C1B86BA8_OFFSET UNITYSDK_OFFSET(0x1A565870)
#define CLASS_1_ED2DEB9AF565E22F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A565730)
#define CLASS_1_ED2DEB9AF565E22F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A565AF0)
#define CLASS_1_ED2DEB9AF565E22F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A565B50)
#define CLASS_1_ED2DEB9AF565E22F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A565F00)
#define CLASS_1_ED2DEB9AF565E22F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A565790)
#define CLASS_1_ED2DEB9AF565E22F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A565740)

inline static constexpr unsigned int Class_1_ED2DEB9AF565E22F_TypeDefinitionIndex = 29248;

class Class_1_ED2DEB9AF565E22F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_ED2DEB9AF565E22F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_ED2DEB9AF565E22F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED2DEB9AF565E22F_TypeDefinitionIndex)->GetStaticField(0x13950);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::MonopolyActionResult*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED2DEB9AF565E22F_TypeDefinitionIndex)->GetStaticField(0x13958);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::MonopolyActionResult*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

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
