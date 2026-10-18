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

#define CLASS_1_BB4B99DE4C2501EC_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF41560)
#define CLASS_1_BB4B99DE4C2501EC_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF40BB0)
#define CLASS_1_BB4B99DE4C2501EC_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF40DD0)
#define CLASS_1_BB4B99DE4C2501EC_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF40D70)
#define CLASS_1_BB4B99DE4C2501EC_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF40EB0)
#define CLASS_1_BB4B99DE4C2501EC_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF41C20)
#define CLASS_1_BB4B99DE4C2501EC_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF41B60)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DF40C40)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DF40C60)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1DF40CA0)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1DF40CC0)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1DF40D00)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x1DF40D20)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x1DF40D50)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DF40C00)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x1DF40CF0)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1DF40C30)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DF40A30)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DF40D40)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DF40C50)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DF40C70)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1DF40CB0)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1DF40CD0)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1DF40D10)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x1DF40D30)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x1DF40D60)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DF40C10)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DF40C90)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x1DF40CE0)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1DF40C20)
#define CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DF40C80)
#define CLASS_1_BB4B99DE4C2501EC_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF40A90)
#define CLASS_1_BB4B99DE4C2501EC_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF41030)
#define CLASS_1_BB4B99DE4C2501EC_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF41090)
#define CLASS_1_BB4B99DE4C2501EC_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF41E20)
#define CLASS_1_BB4B99DE4C2501EC_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF40AF0)
#define CLASS_1_BB4B99DE4C2501EC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF40AA0)

inline static constexpr unsigned int Class_1_BB4B99DE4C2501EC_3_TypeDefinitionIndex = 25068;

class Class_1_BB4B99DE4C2501EC_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_3*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_3_TypeDefinitionIndex)->GetStaticField(0x35850);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JKBHDLODNOE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB4B99DE4C2501EC_3_TypeDefinitionIndex)->GetStaticField(0x35858);
	}
	// static const ::System::Int32 PKDBEGDNIFK = 0x1; // 0x0
	// static const ::System::Int32 DFBAHJNNJLJ = 0x2; // 0x0
	// static const ::System::Int32 BOIGPPCIPFF = 0x3; // 0x0
	// static const ::System::Int32 KPGNEGMDKCI = 0x4; // 0x0
	// static const ::System::Int32 IIGJNJPDPBJ = 0x5; // 0x0
	// static const ::System::Int32 FECGMOLLECO = 0x6; // 0x0
	// static const ::System::Int32 CJIHHBEOLPP = 0x7; // 0x0
	// static const ::System::Int32 FNKPNGFLFPE = 0x8; // 0x0
	// static const ::System::Int32 HMCAMNHNBLE = 0x9; // 0x0
	// static const ::System::Int32 ACFKGLPACOJ = 0xA; // 0x0
	// static const ::System::Int32 CPBPPPJBFGH = 0xB; // 0x0
	// static const ::System::Int32 EJHEFGDECCN = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLFDMJMJDND; // 0x18
	::System::UInt32 PCOGOBLACGK; // 0x20
	::System::UInt32 NFGNEEGBNIF; // 0x24
	::System::UInt32 AMPLOODDLGB; // 0x28
	::System::UInt32 LJJOECFGJCI; // 0x2C
	::System::UInt32 HBLBLCEMPFJ; // 0x30
	::System::Boolean JEOPCFCNBIL; // 0x34
	::System::UInt64 BEOGIOPFAAF; // 0x38
	::System::UInt32 CLBJDBPOOEK; // 0x40
	::System::UInt32 OPPNMFMNMGC; // 0x44
	::System::UInt32 BBNEMJPFEKE; // 0x48
	::System::UInt64 IDNAAODIEKG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BB4B99DE4C2501EC_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BB4B99DE4C2501EC_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_3* Clone()
	{
		return ((::Class_1_BB4B99DE4C2501EC_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BB4B99DE4C2501EC_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BB4B99DE4C2501EC_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BB4B99DE4C2501EC_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
