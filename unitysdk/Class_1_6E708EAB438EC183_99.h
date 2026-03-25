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

#define CLASS_1_6E708EAB438EC183_99_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EE2290)
#define CLASS_1_6E708EAB438EC183_99_CLONE_OFFSET UNITYSDK_OFFSET(0x17EE1F30)
#define CLASS_1_6E708EAB438EC183_99_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EE2010)
#define CLASS_1_6E708EAB438EC183_99_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EE1F70)
#define CLASS_1_6E708EAB438EC183_99_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EE20A0)
#define CLASS_1_6E708EAB438EC183_99_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EE2350)
#define CLASS_1_6E708EAB438EC183_99_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EE2300)
#define CLASS_1_6E708EAB438EC183_99_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17EE1F60)
#define CLASS_1_6E708EAB438EC183_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EE1E40)
#define CLASS_1_6E708EAB438EC183_99_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EE21B0)
#define CLASS_1_6E708EAB438EC183_99_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EE2210)
#define CLASS_1_6E708EAB438EC183_99__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EE2400)
#define CLASS_1_6E708EAB438EC183_99__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EE1EA0)
#define CLASS_1_6E708EAB438EC183_99__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE1E50)

inline static constexpr unsigned int Class_1_6E708EAB438EC183_99_TypeDefinitionIndex = 26975;

class Class_1_6E708EAB438EC183_99 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E708EAB438EC183_99_TypeDefinitionIndex)->GetStaticField(0x2D470);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6E708EAB438EC183_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_99*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6E708EAB438EC183_99* Clone()
	{
		return ((::Class_1_6E708EAB438EC183_99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6E708EAB438EC183_99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E708EAB438EC183_99*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6E708EAB438EC183_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_99*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6E708EAB438EC183_99_MERGEFROM_1_OFFSET))(this, a1);
	}
};
