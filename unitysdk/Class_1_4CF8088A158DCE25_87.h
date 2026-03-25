#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_87_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D63A50)
#define CLASS_1_4CF8088A158DCE25_87_CLONE_OFFSET UNITYSDK_OFFSET(0x17D635F0)
#define CLASS_1_4CF8088A158DCE25_87_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D63800)
#define CLASS_1_4CF8088A158DCE25_87_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D63710)
#define CLASS_1_4CF8088A158DCE25_87_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D638B0)
#define CLASS_1_4CF8088A158DCE25_87_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D63B90)
#define CLASS_1_4CF8088A158DCE25_87_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D63B30)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D63670)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D63680)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17D636C0)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x17D636E0)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x17D63700)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D636A0)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17D636B0)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x17D636D0)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x17D636F0)
#define CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D63690)
#define CLASS_1_4CF8088A158DCE25_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D63590)
#define CLASS_1_4CF8088A158DCE25_87_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D638F0)
#define CLASS_1_4CF8088A158DCE25_87_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D63950)
#define CLASS_1_4CF8088A158DCE25_87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D635B0)
#define CLASS_1_4CF8088A158DCE25_87__CTOR_OFFSET UNITYSDK_OFFSET(0x17D635A0)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_87_TypeDefinitionIndex = 26893;

class Class_1_4CF8088A158DCE25_87 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Boolean Field_1_6; // 0x1C
	::System::Boolean Field_1_10; // 0x1D
	::System::Boolean Field_1_4; // 0x1E
	::System::Boolean Field_1_8; // 0x1F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_87*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_87* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_87*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_87*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_87_MERGEFROM_1_OFFSET))(this, a1);
	}
};
