#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_35.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4993B5808F7225B5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F5BB60)
#define CLASS_1_4993B5808F7225B5_CLONE_OFFSET UNITYSDK_OFFSET(0x17F5B650)
#define CLASS_1_4993B5808F7225B5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F5B7F0)
#define CLASS_1_4993B5808F7225B5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F5B710)
#define CLASS_1_4993B5808F7225B5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F5B8A0)
#define CLASS_1_4993B5808F7225B5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F5BE10)
#define CLASS_1_4993B5808F7225B5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F5BDB0)
#define CLASS_1_4993B5808F7225B5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F5B6D0)
#define CLASS_1_4993B5808F7225B5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F5B6B0)
#define CLASS_1_4993B5808F7225B5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F5B700)
#define CLASS_1_4993B5808F7225B5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17F5B6A0)
#define CLASS_1_4993B5808F7225B5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F5B6E0)
#define CLASS_1_4993B5808F7225B5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F5B6C0)
#define CLASS_1_4993B5808F7225B5_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F5B6F0)
#define CLASS_1_4993B5808F7225B5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F5B560)
#define CLASS_1_4993B5808F7225B5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F5B9B0)
#define CLASS_1_4993B5808F7225B5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F5BA10)
#define CLASS_1_4993B5808F7225B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F5BF20)
#define CLASS_1_4993B5808F7225B5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F5B5C0)
#define CLASS_1_4993B5808F7225B5__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5B570)

inline static constexpr unsigned int Class_1_4993B5808F7225B5_TypeDefinitionIndex = 24836;

class Class_1_4993B5808F7225B5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4993B5808F7225B5_TypeDefinitionIndex)->GetStaticField(0x322A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x24
	::Enum_3_DB663931210BBC27_35 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4993B5808F7225B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4993B5808F7225B5*))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4993B5808F7225B5* Clone()
	{
		return ((::Class_1_4993B5808F7225B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_35 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_35(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_35 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_35))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4993B5808F7225B5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4993B5808F7225B5*))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4993B5808F7225B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4993B5808F7225B5*))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4993B5808F7225B5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
