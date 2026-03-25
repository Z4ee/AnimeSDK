#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE734113B1E313B_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9D413BFC96E70119_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B855D0)
#define CLASS_1_9D413BFC96E70119_CLONE_OFFSET UNITYSDK_OFFSET(0x17B84F30)
#define CLASS_1_9D413BFC96E70119_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B850D0)
#define CLASS_1_9D413BFC96E70119_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B85070)
#define CLASS_1_9D413BFC96E70119_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B851E0)
#define CLASS_1_9D413BFC96E70119_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B859A0)
#define CLASS_1_9D413BFC96E70119_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B858D0)
#define CLASS_1_9D413BFC96E70119_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B84FA0)
#define CLASS_1_9D413BFC96E70119_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17B84FC0)
#define CLASS_1_9D413BFC96E70119_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17B84FD0)
#define CLASS_1_9D413BFC96E70119_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B84F80)
#define CLASS_1_9D413BFC96E70119_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17B85060)
#define CLASS_1_9D413BFC96E70119_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17B85040)
#define CLASS_1_9D413BFC96E70119_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B84FB0)
#define CLASS_1_9D413BFC96E70119_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B84F90)
#define CLASS_1_9D413BFC96E70119_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17B85050)
#define CLASS_1_9D413BFC96E70119_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B84E00)
#define CLASS_1_9D413BFC96E70119_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B85400)
#define CLASS_1_9D413BFC96E70119_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B85460)
#define CLASS_1_9D413BFC96E70119__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B85B60)
#define CLASS_1_9D413BFC96E70119__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B84E70)
#define CLASS_1_9D413BFC96E70119__CTOR_OFFSET UNITYSDK_OFFSET(0x17B84E10)

inline static constexpr unsigned int Class_1_9D413BFC96E70119_TypeDefinitionIndex = 27125;

class Class_1_9D413BFC96E70119 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D413BFC96E70119_TypeDefinitionIndex)->GetStaticField(0x303E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Class_1_3DE734113B1E313B_2* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::UInt64 Field_1_11; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9D413BFC96E70119* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D413BFC96E70119*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9D413BFC96E70119* Clone()
	{
		return ((::Class_1_9D413BFC96E70119*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_CLONE_OFFSET))(this);
	}

	::Class_1_3DE734113B1E313B_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3DE734113B1E313B_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3DE734113B1E313B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DE734113B1E313B_2*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9D413BFC96E70119* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9D413BFC96E70119*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9D413BFC96E70119* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D413BFC96E70119*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9D413BFC96E70119_MERGEFROM_1_OFFSET))(this, a1);
	}
};
