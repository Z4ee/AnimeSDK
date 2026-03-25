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

#define CLASS_1_735612C94F558EAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C25FC0)
#define CLASS_1_735612C94F558EAE_CLONE_OFFSET UNITYSDK_OFFSET(0x17C1AE10)
#define CLASS_1_735612C94F558EAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C25DD0)
#define CLASS_1_735612C94F558EAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C25CF0)
#define CLASS_1_735612C94F558EAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C1B8C0)
#define CLASS_1_735612C94F558EAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C26090)
#define CLASS_1_735612C94F558EAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C1C3E0)
#define CLASS_1_735612C94F558EAE_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17C25CE0)
#define CLASS_1_735612C94F558EAE_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17C25CD0)
#define CLASS_1_735612C94F558EAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C25BE0)
#define CLASS_1_735612C94F558EAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C25E80)
#define CLASS_1_735612C94F558EAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C25EE0)
#define CLASS_1_735612C94F558EAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C261D0)
#define CLASS_1_735612C94F558EAE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C25BF0)
#define CLASS_1_735612C94F558EAE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1C350)

inline static constexpr unsigned int Class_1_735612C94F558EAE_TypeDefinitionIndex = 22892;

class Class_1_735612C94F558EAE : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_TypeDefinitionIndex)->GetStaticField(0x37030);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_TypeDefinitionIndex)->GetStaticField(0x37038);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_735612C94F558EAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE* Clone()
	{
		return ((::Class_1_735612C94F558EAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_735612C94F558EAE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_735612C94F558EAE*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_735612C94F558EAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
