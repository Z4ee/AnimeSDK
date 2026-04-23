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

#define CLASS_1_07701BC2FDC5E4E0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19255DC0)
#define CLASS_1_07701BC2FDC5E4E0_CLONE_OFFSET UNITYSDK_OFFSET(0x19255940)
#define CLASS_1_07701BC2FDC5E4E0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19255AA0)
#define CLASS_1_07701BC2FDC5E4E0_EQUALS_OFFSET UNITYSDK_OFFSET(0x192559E0)
#define CLASS_1_07701BC2FDC5E4E0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19255B50)
#define CLASS_1_07701BC2FDC5E4E0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19255F90)
#define CLASS_1_07701BC2FDC5E4E0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19255F30)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x192559C0)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x192559A0)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19255990)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19255810)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x192559D0)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x192559B0)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19255980)
#define CLASS_1_07701BC2FDC5E4E0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19255970)
#define CLASS_1_07701BC2FDC5E4E0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19255840)
#define CLASS_1_07701BC2FDC5E4E0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19255C60)
#define CLASS_1_07701BC2FDC5E4E0_WRITETO_OFFSET UNITYSDK_OFFSET(0x19255CC0)
#define CLASS_1_07701BC2FDC5E4E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x19256090)
#define CLASS_1_07701BC2FDC5E4E0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192558A0)
#define CLASS_1_07701BC2FDC5E4E0__CTOR_OFFSET UNITYSDK_OFFSET(0x19255850)

inline static constexpr unsigned int Class_1_07701BC2FDC5E4E0_TypeDefinitionIndex = 24122;

class Class_1_07701BC2FDC5E4E0 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_07701BC2FDC5E4E0*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_07701BC2FDC5E4E0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07701BC2FDC5E4E0_TypeDefinitionIndex)->GetStaticField(0x14210);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07701BC2FDC5E4E0_TypeDefinitionIndex)->GetStaticField(0x14218);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_07701BC2FDC5E4E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0*))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_07701BC2FDC5E4E0*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_07701BC2FDC5E4E0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_07701BC2FDC5E4E0* Clone()
	{
		return ((::Class_1_07701BC2FDC5E4E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_07701BC2FDC5E4E0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0*))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_07701BC2FDC5E4E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07701BC2FDC5E4E0*))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_07701BC2FDC5E4E0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
