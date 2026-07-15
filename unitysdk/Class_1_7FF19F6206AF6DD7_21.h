#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_13;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D041B50)
#define CLASS_1_7FF19F6206AF6DD7_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1D0416A0)
#define CLASS_1_7FF19F6206AF6DD7_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D041850)
#define CLASS_1_7FF19F6206AF6DD7_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D041700)
#define CLASS_1_7FF19F6206AF6DD7_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D041980)
#define CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D041D00)
#define CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D041C60)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D0416D0)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D041550)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1D0416F0)
#define CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D0416E0)
#define CLASS_1_7FF19F6206AF6DD7_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D041580)
#define CLASS_1_7FF19F6206AF6DD7_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D0419F0)
#define CLASS_1_7FF19F6206AF6DD7_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D041A50)
#define CLASS_1_7FF19F6206AF6DD7_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D041ED0)
#define CLASS_1_7FF19F6206AF6DD7_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0415E0)
#define CLASS_1_7FF19F6206AF6DD7_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1D041590)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_21_TypeDefinitionIndex = 26729;

class Class_1_7FF19F6206AF6DD7_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_21_TypeDefinitionIndex)->GetStaticField(0x33D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_13*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_21_TypeDefinitionIndex)->GetStaticField(0x33D8);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_13*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_21*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_21* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_13*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_21*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_21*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
