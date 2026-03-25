#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_28.h"
#include "unitysdk/System/Object.h"

class Class_1_7F77CD37698B087D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1DC472C279A0919D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18261CE0)
#define CLASS_1_1DC472C279A0919D_CLONE_OFFSET UNITYSDK_OFFSET(0x18261810)
#define CLASS_1_1DC472C279A0919D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18261900)
#define CLASS_1_1DC472C279A0919D_EQUALS_OFFSET UNITYSDK_OFFSET(0x182618D0)
#define CLASS_1_1DC472C279A0919D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182619E0)
#define CLASS_1_1DC472C279A0919D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182620D0)
#define CLASS_1_1DC472C279A0919D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18262000)
#define CLASS_1_1DC472C279A0919D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x182618B0)
#define CLASS_1_1DC472C279A0919D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18261890)
#define CLASS_1_1DC472C279A0919D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18261860)
#define CLASS_1_1DC472C279A0919D_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x18261880)
#define CLASS_1_1DC472C279A0919D_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18261840)
#define CLASS_1_1DC472C279A0919D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x182618C0)
#define CLASS_1_1DC472C279A0919D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182618A0)
#define CLASS_1_1DC472C279A0919D_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x18261870)
#define CLASS_1_1DC472C279A0919D_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18261850)
#define CLASS_1_1DC472C279A0919D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18261720)
#define CLASS_1_1DC472C279A0919D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18261B00)
#define CLASS_1_1DC472C279A0919D_WRITETO_OFFSET UNITYSDK_OFFSET(0x18261B60)
#define CLASS_1_1DC472C279A0919D__CCTOR_OFFSET UNITYSDK_OFFSET(0x182621D0)
#define CLASS_1_1DC472C279A0919D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18261770)
#define CLASS_1_1DC472C279A0919D__CTOR_OFFSET UNITYSDK_OFFSET(0x18261730)

inline static constexpr unsigned int Class_1_1DC472C279A0919D_TypeDefinitionIndex = 25406;

class Class_1_1DC472C279A0919D : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7F77CD37698B087D*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7F77CD37698B087D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DC472C279A0919D_TypeDefinitionIndex)->GetStaticField(0x17EF0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7F77CD37698B087D*>* Field_1_3; // 0x18
	::System::Int64 Field_1_7; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::Enum_3_DB663931210BBC27_28 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1DC472C279A0919D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DC472C279A0919D*))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1DC472C279A0919D* Clone()
	{
		return ((::Class_1_1DC472C279A0919D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7F77CD37698B087D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7F77CD37698B087D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_28 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_28))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1DC472C279A0919D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1DC472C279A0919D*))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1DC472C279A0919D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DC472C279A0919D*))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1DC472C279A0919D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
