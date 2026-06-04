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

#define CLASS_1_0EDFEC5EF2E062D0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A3AC420)
#define CLASS_1_0EDFEC5EF2E062D0_CLONE_OFFSET UNITYSDK_OFFSET(0x1A3AC090)
#define CLASS_1_0EDFEC5EF2E062D0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A3AC1B0)
#define CLASS_1_0EDFEC5EF2E062D0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A3AC0D0)
#define CLASS_1_0EDFEC5EF2E062D0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A3AC260)
#define CLASS_1_0EDFEC5EF2E062D0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A3AC560)
#define CLASS_1_0EDFEC5EF2E062D0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3AC4C0)
#define CLASS_1_0EDFEC5EF2E062D0_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1A3AC0C0)
#define CLASS_1_0EDFEC5EF2E062D0_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A3ABF80)
#define CLASS_1_0EDFEC5EF2E062D0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3ABFB0)
#define CLASS_1_0EDFEC5EF2E062D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3AC340)
#define CLASS_1_0EDFEC5EF2E062D0_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3AC3A0)
#define CLASS_1_0EDFEC5EF2E062D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3AC700)
#define CLASS_1_0EDFEC5EF2E062D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3AC000)
#define CLASS_1_0EDFEC5EF2E062D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3ABFC0)

inline static constexpr unsigned int Class_1_0EDFEC5EF2E062D0_TypeDefinitionIndex = 24699;

class Class_1_0EDFEC5EF2E062D0 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0EDFEC5EF2E062D0*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0EDFEC5EF2E062D0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EDFEC5EF2E062D0_TypeDefinitionIndex)->GetStaticField(0x5CC40);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EDFEC5EF2E062D0_TypeDefinitionIndex)->GetStaticField(0x5CC48);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0EDFEC5EF2E062D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0EDFEC5EF2E062D0*))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0EDFEC5EF2E062D0*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0EDFEC5EF2E062D0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0EDFEC5EF2E062D0* Clone()
	{
		return ((::Class_1_0EDFEC5EF2E062D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0EDFEC5EF2E062D0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0EDFEC5EF2E062D0*))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0EDFEC5EF2E062D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0EDFEC5EF2E062D0*))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0EDFEC5EF2E062D0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
