#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6E708EAB438EC183_91_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18035150)
#define CLASS_1_6E708EAB438EC183_91_CLONE_OFFSET UNITYSDK_OFFSET(0x18034DF0)
#define CLASS_1_6E708EAB438EC183_91_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18034ED0)
#define CLASS_1_6E708EAB438EC183_91_EQUALS_OFFSET UNITYSDK_OFFSET(0x18034E30)
#define CLASS_1_6E708EAB438EC183_91_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18034F60)
#define CLASS_1_6E708EAB438EC183_91_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18035210)
#define CLASS_1_6E708EAB438EC183_91_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180351C0)
#define CLASS_1_6E708EAB438EC183_91_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18034E20)
#define CLASS_1_6E708EAB438EC183_91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18034D00)
#define CLASS_1_6E708EAB438EC183_91_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18035070)
#define CLASS_1_6E708EAB438EC183_91_WRITETO_OFFSET UNITYSDK_OFFSET(0x180350D0)
#define CLASS_1_6E708EAB438EC183_91__CCTOR_OFFSET UNITYSDK_OFFSET(0x180352C0)
#define CLASS_1_6E708EAB438EC183_91__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18034D60)
#define CLASS_1_6E708EAB438EC183_91__CTOR_OFFSET UNITYSDK_OFFSET(0x18034D10)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_91_TypeDefinitionIndex = 26805;

class Class_1_6E708EAB438EC183_91 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_91_TypeDefinitionIndex)->GetStaticField(0x2FCE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_91*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_91* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_91* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_91*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_91*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_91_MERGEFROM_1_OFFSET))(this, a1);
	}
};
