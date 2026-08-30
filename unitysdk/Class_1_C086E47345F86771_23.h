#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C086E47345F86771_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3BF9E0)
#define CLASS_1_C086E47345F86771_23_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3BF620)
#define CLASS_1_C086E47345F86771_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3BF790)
#define CLASS_1_C086E47345F86771_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3BF6B0)
#define CLASS_1_C086E47345F86771_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3BF860)
#define CLASS_1_C086E47345F86771_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3BFB90)
#define CLASS_1_C086E47345F86771_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3BFB50)
#define CLASS_1_C086E47345F86771_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E3BF670)
#define CLASS_1_C086E47345F86771_23_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1E3BF6A0)
#define CLASS_1_C086E47345F86771_23_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E3BF590)
#define CLASS_1_C086E47345F86771_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E3BF680)
#define CLASS_1_C086E47345F86771_23_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1E3BF690)
#define CLASS_1_C086E47345F86771_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3BF5C0)
#define CLASS_1_C086E47345F86771_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3BF8A0)
#define CLASS_1_C086E47345F86771_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3BF900)
#define CLASS_1_C086E47345F86771_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BFD10)
#define CLASS_1_C086E47345F86771_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3BF5E0)
#define CLASS_1_C086E47345F86771_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BF5D0)

inline static constexpr unsigned int Class_1_C086E47345F86771_23_TypeDefinitionIndex = 33367;

class Class_1_C086E47345F86771_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_23*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C086E47345F86771_23_TypeDefinitionIndex)->GetStaticField(0x48D60);
	}
	// static const ::System::Int32 MGPGDLIJKLM = 0x5; // 0x0
	// static const ::System::Int32 GEMDHFJFBHD = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 AAGAKAIKGCM; // 0x18
	::System::UInt64 JEHBHEOHGLN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C086E47345F86771_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_23*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_23*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C086E47345F86771_23* Clone()
	{
		return ((::Class_1_C086E47345F86771_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C086E47345F86771_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C086E47345F86771_23*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C086E47345F86771_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_23*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
