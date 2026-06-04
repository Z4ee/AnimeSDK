#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A244B10)
#define CLASS_1_EBB10EC01CCC4716_19_CLONE_OFFSET UNITYSDK_OFFSET(0x1A244670)
#define CLASS_1_EBB10EC01CCC4716_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A244870)
#define CLASS_1_EBB10EC01CCC4716_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2447B0)
#define CLASS_1_EBB10EC01CCC4716_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A244920)
#define CLASS_1_EBB10EC01CCC4716_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A244E10)
#define CLASS_1_EBB10EC01CCC4716_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A244DA0)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A244710)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A244730)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A244750)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A244770)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A2446D0)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A2445D0)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A244720)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A244740)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A244760)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A244780)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A2446E0)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1A2447A0)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A244700)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A244790)
#define CLASS_1_EBB10EC01CCC4716_19_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A2446F0)
#define CLASS_1_EBB10EC01CCC4716_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A244600)
#define CLASS_1_EBB10EC01CCC4716_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A244960)
#define CLASS_1_EBB10EC01CCC4716_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2449C0)
#define CLASS_1_EBB10EC01CCC4716_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A244F10)
#define CLASS_1_EBB10EC01CCC4716_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A244620)
#define CLASS_1_EBB10EC01CCC4716_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1A244610)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_19_TypeDefinitionIndex = 33203;

class Class_1_EBB10EC01CCC4716_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_19*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_19_TypeDefinitionIndex)->GetStaticField(0x42E40);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::System::UInt32 Field_1_9; // 0x18
	::System::UInt32 Field_1_10; // 0x1C
	::System::UInt32 Field_1_11; // 0x20
	::System::Boolean Field_1_12; // 0x24
	::System::Boolean Field_1_13; // 0x25
	::System::UInt32 Field_1_14; // 0x28
	::System::UInt32 Field_1_15; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_19*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_19*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_19*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_19* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_19*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_19*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
