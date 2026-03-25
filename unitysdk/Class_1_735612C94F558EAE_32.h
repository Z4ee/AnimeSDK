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

#define CLASS_1_735612C94F558EAE_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18096750)
#define CLASS_1_735612C94F558EAE_32_CLONE_OFFSET UNITYSDK_OFFSET(0x18096330)
#define CLASS_1_735612C94F558EAE_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18096480)
#define CLASS_1_735612C94F558EAE_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x180963B0)
#define CLASS_1_735612C94F558EAE_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18096510)
#define CLASS_1_735612C94F558EAE_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180968B0)
#define CLASS_1_735612C94F558EAE_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18096860)
#define CLASS_1_735612C94F558EAE_32_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18096380)
#define CLASS_1_735612C94F558EAE_32_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180963A0)
#define CLASS_1_735612C94F558EAE_32_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18096390)
#define CLASS_1_735612C94F558EAE_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18096240)
#define CLASS_1_735612C94F558EAE_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18096620)
#define CLASS_1_735612C94F558EAE_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x18096680)
#define CLASS_1_735612C94F558EAE_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x18096980)
#define CLASS_1_735612C94F558EAE_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180962A0)
#define CLASS_1_735612C94F558EAE_32__CTOR_OFFSET UNITYSDK_OFFSET(0x18096250)

inline static constexpr unsigned int Class_1_735612C94F558EAE_32_TypeDefinitionIndex = 24759;

class Class_1_735612C94F558EAE_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_735612C94F558EAE_32_TypeDefinitionIndex)->GetStaticField(0x2B450);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_735612C94F558EAE_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_32*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_32* Clone()
	{
		return ((::Class_1_735612C94F558EAE_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_735612C94F558EAE_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_735612C94F558EAE_32*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_735612C94F558EAE_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_32*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_735612C94F558EAE_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
