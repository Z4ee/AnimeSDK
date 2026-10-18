#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_49_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDA5B60)
#define CLASS_1_21DCD4640D389503_49_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDA5470)
#define CLASS_1_21DCD4640D389503_49_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDA56A0)
#define CLASS_1_21DCD4640D389503_49_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDA5600)
#define CLASS_1_21DCD4640D389503_49_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDA5730)
#define CLASS_1_21DCD4640D389503_49_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDA5F80)
#define CLASS_1_21DCD4640D389503_49_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDA5F00)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DDA5560)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DDA5580)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1DDA55A0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DDA5540)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1DDA54F0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1DDA54E0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DDA53D0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DDA5570)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DDA5590)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1DDA55B0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DDA5550)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1DDA55F0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1DDA55D0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1DDA55E0)
#define CLASS_1_21DCD4640D389503_49_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1DDA55C0)
#define CLASS_1_21DCD4640D389503_49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDA5400)
#define CLASS_1_21DCD4640D389503_49_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDA5810)
#define CLASS_1_21DCD4640D389503_49_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDA5870)
#define CLASS_1_21DCD4640D389503_49__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA60B0)
#define CLASS_1_21DCD4640D389503_49__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDA5420)
#define CLASS_1_21DCD4640D389503_49__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA5410)

inline static constexpr unsigned int Class_1_21DCD4640D389503_49_TypeDefinitionIndex = 34143;

class Class_1_21DCD4640D389503_49 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_49*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_49*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_49_TypeDefinitionIndex)->GetStaticField(0x317E0);
	}
	// static const ::System::Int32 IGLAFOLEPGB = 0x3; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x5; // 0x0
	// static const ::System::Int32 JFFKLDOPFOJ = 0xA; // 0x0
	// static const ::System::Int32 IEAPGPOMBIN = 0x8; // 0x0
	// static const ::System::Int32 NBCBOBPECPD = 0x1; // 0x0
	// static const ::System::Int32 INEMAEKANCN = 0xF; // 0x0
	// static const ::System::Int32 EJOOKABLJHP = 0xE; // 0x0
	::System::String* FFMAAIAOIDK; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20
	::System::Int32 COHCGONAHKG; // 0x24
	::System::UInt32 DNCBIIBLFOO; // 0x28
	::System::UInt32 FLBKCMIIFFP; // 0x2C
	::System::Int32 JOOFCJHEAAK; // 0x30
	::System::UInt32 DKLCPIAINIK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_49*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_49*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_49*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_49* Clone()
	{
		return ((::Class_1_21DCD4640D389503_49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_49* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_49*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_49*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_49_MERGEFROM_1_OFFSET))(this, a1);
	}
};
