#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C086E47345F86771_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D7DF380)
#define CLASS_1_C086E47345F86771_24_CLONE_OFFSET UNITYSDK_OFFSET(0x1D7DEFC0)
#define CLASS_1_C086E47345F86771_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D7DF130)
#define CLASS_1_C086E47345F86771_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D7DF050)
#define CLASS_1_C086E47345F86771_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7DF200)
#define CLASS_1_C086E47345F86771_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D7DF530)
#define CLASS_1_C086E47345F86771_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D7DF4F0)
#define CLASS_1_C086E47345F86771_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D7DF010)
#define CLASS_1_C086E47345F86771_24_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1D7DF040)
#define CLASS_1_C086E47345F86771_24_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D7DEF30)
#define CLASS_1_C086E47345F86771_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D7DF020)
#define CLASS_1_C086E47345F86771_24_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1D7DF030)
#define CLASS_1_C086E47345F86771_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D7DEF60)
#define CLASS_1_C086E47345F86771_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D7DF240)
#define CLASS_1_C086E47345F86771_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D7DF2A0)
#define CLASS_1_C086E47345F86771_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7DF6B0)
#define CLASS_1_C086E47345F86771_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7DEF80)
#define CLASS_1_C086E47345F86771_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DEF70)

inline static constexpr unsigned int Class_1_C086E47345F86771_24_TypeDefinitionIndex = 33497;

class Class_1_C086E47345F86771_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_24*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C086E47345F86771_24_TypeDefinitionIndex)->GetStaticField(0x3BAC0);
	}
	// static const ::System::Int32 LFMAGKAHAOK = 0xC; // 0x0
	// static const ::System::Int32 GEMDHFJFBHD = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt64 JEHBHEOHGLN; // 0x18
	::System::UInt32 GFCPCAFJHNB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C086E47345F86771_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_24*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_24*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_24*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C086E47345F86771_24* Clone()
	{
		return ((::Class_1_C086E47345F86771_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C086E47345F86771_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C086E47345F86771_24*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C086E47345F86771_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_24*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
