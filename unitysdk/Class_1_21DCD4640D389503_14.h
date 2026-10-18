#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E278EA0)
#define CLASS_1_21DCD4640D389503_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2786F0)
#define CLASS_1_21DCD4640D389503_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E278920)
#define CLASS_1_21DCD4640D389503_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E278870)
#define CLASS_1_21DCD4640D389503_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2789E0)
#define CLASS_1_21DCD4640D389503_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2790A0)
#define CLASS_1_21DCD4640D389503_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E279020)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E278850)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E278770)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E2787C0)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E2787B0)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E278650)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E278860)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E278780)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E2787A0)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1E278820)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1E278840)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E278760)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E278790)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1E278810)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1E278830)
#define CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E278750)
#define CLASS_1_21DCD4640D389503_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E278680)
#define CLASS_1_21DCD4640D389503_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E278AB0)
#define CLASS_1_21DCD4640D389503_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E278B10)
#define CLASS_1_21DCD4640D389503_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2791D0)
#define CLASS_1_21DCD4640D389503_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2786A0)
#define CLASS_1_21DCD4640D389503_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1E278690)

inline static constexpr unsigned int Class_1_21DCD4640D389503_14_TypeDefinitionIndex = 25429;

class Class_1_21DCD4640D389503_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_14*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_14_TypeDefinitionIndex)->GetStaticField(0x4A4D0);
	}
	// static const ::System::Int32 GCNHGINMBIH = 0x1; // 0x0
	// static const ::System::Int32 KMAIJHEKMHL = 0x2; // 0x0
	// static const ::System::Int32 FDCIDJHAHON = 0x3; // 0x0
	// static const ::System::Int32 JAGEHIBABLA = 0x4; // 0x0
	// static const ::System::Int32 ELLEHLOAFEC = 0x5; // 0x0
	// static const ::System::Int32 DJDHAPJECDH = 0x6; // 0x0
	// static const ::System::Int32 BKMMGDIACNJ = 0x7; // 0x0
	::System::String* ILLBANFFEJA; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::Boolean NCHINADBFFK; // 0x20
	::System::Boolean BEBEFHIBKAE; // 0x21
	::System::Boolean PAKNKJDDEOM; // 0x22
	::System::Boolean KMMLHEIAELE; // 0x23
	::System::UInt32 KIBGJBJBGDA; // 0x24
	::System::UInt32 NAPKDDOKPMI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_14*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_14*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_14* Clone()
	{
		return ((::Class_1_21DCD4640D389503_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_14*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_14*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
