#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE48B70)
#define CLASS_1_EBB10EC01CCC4716_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE48550)
#define CLASS_1_EBB10EC01CCC4716_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE48770)
#define CLASS_1_EBB10EC01CCC4716_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE486C0)
#define CLASS_1_EBB10EC01CCC4716_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE487E0)
#define CLASS_1_EBB10EC01CCC4716_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE48F40)
#define CLASS_1_EBB10EC01CCC4716_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE48ED0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DE48620)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DE48660)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1DE48680)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1DE486A0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DE485E0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1DE48610)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE48480)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DE48630)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DE48670)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1DE48690)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1DE486B0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DE485F0)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DE48650)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1DE48600)
#define CLASS_1_EBB10EC01CCC4716_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DE48640)
#define CLASS_1_EBB10EC01CCC4716_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE484E0)
#define CLASS_1_EBB10EC01CCC4716_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE48830)
#define CLASS_1_EBB10EC01CCC4716_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE48890)
#define CLASS_1_EBB10EC01CCC4716__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE49040)
#define CLASS_1_EBB10EC01CCC4716__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE48500)
#define CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE484F0)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_TypeDefinitionIndex = 24831;

class Class_1_EBB10EC01CCC4716 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_TypeDefinitionIndex)->GetStaticField(0x2D980);
	}
	// static const ::System::Int32 IEIFMNNMINA = 0x1; // 0x0
	// static const ::System::Int32 EIDJNEEOOCF = 0x2; // 0x0
	// static const ::System::Int32 PDFOJNFGMJF = 0x3; // 0x0
	// static const ::System::Int32 IDOCCLCMLMB = 0x4; // 0x0
	// static const ::System::Int32 FIAAMMFEPBM = 0x5; // 0x0
	// static const ::System::Int32 MCBJBINKJLN = 0x6; // 0x0
	// static const ::System::Int32 JLCOELFOKOP = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HJEGLCJEOKC; // 0x18
	::System::UInt32 KCLJDCMCFBN; // 0x1C
	::System::UInt32 EGJDFIPLGMO; // 0x20
	::System::UInt32 GOHOKFAPDCI; // 0x24
	::System::UInt64 DEJFOEHNFJA; // 0x28
	::System::UInt32 NHLNJLAMBBG; // 0x30
	::System::Boolean FMDLGNMFLID; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_MERGEFROM_1_OFFSET))(this, a1);
	}
};
