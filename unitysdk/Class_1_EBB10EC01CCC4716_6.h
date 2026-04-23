#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B134D0)
#define CLASS_1_EBB10EC01CCC4716_6_CLONE_OFFSET UNITYSDK_OFFSET(0x19B12EA0)
#define CLASS_1_EBB10EC01CCC4716_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B13160)
#define CLASS_1_EBB10EC01CCC4716_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B13070)
#define CLASS_1_EBB10EC01CCC4716_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B13240)
#define CLASS_1_EBB10EC01CCC4716_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B137C0)
#define CLASS_1_EBB10EC01CCC4716_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B13700)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19B13050)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B12F20)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19B12F60)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B12E00)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19B13060)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B12F30)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19B12F70)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x19B12F50)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x19B13020)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x19B13040)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19B12F10)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x19B12F40)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x19B13010)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x19B13030)
#define CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19B12F00)
#define CLASS_1_EBB10EC01CCC4716_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B12E30)
#define CLASS_1_EBB10EC01CCC4716_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B13310)
#define CLASS_1_EBB10EC01CCC4716_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B13370)
#define CLASS_1_EBB10EC01CCC4716_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B13940)
#define CLASS_1_EBB10EC01CCC4716_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B12E50)
#define CLASS_1_EBB10EC01CCC4716_6__CTOR_OFFSET UNITYSDK_OFFSET(0x19B12E40)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_6_TypeDefinitionIndex = 24161;

class Class_1_EBB10EC01CCC4716_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_6_TypeDefinitionIndex)->GetStaticField(0x5FA40);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_9; // 0x18
	::System::UInt32 Field_1_15; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::System::Boolean Field_1_13; // 0x28
	::System::Boolean Field_1_3; // 0x29
	::System::Boolean Field_1_7; // 0x2A
	::System::Boolean Field_1_11; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_6*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_6* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_6*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_6*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
