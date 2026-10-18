#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C086E47345F86771_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C0EE0)
#define CLASS_1_C086E47345F86771_19_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C0B20)
#define CLASS_1_C086E47345F86771_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C0C90)
#define CLASS_1_C086E47345F86771_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C0BB0)
#define CLASS_1_C086E47345F86771_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C0D60)
#define CLASS_1_C086E47345F86771_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C1080)
#define CLASS_1_C086E47345F86771_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C1040)
#define CLASS_1_C086E47345F86771_19_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E1C0B90)
#define CLASS_1_C086E47345F86771_19_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1E1C0B80)
#define CLASS_1_C086E47345F86771_19_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E1C0A90)
#define CLASS_1_C086E47345F86771_19_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E1C0BA0)
#define CLASS_1_C086E47345F86771_19_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1E1C0B70)
#define CLASS_1_C086E47345F86771_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C0AC0)
#define CLASS_1_C086E47345F86771_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C0DA0)
#define CLASS_1_C086E47345F86771_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C0E00)
#define CLASS_1_C086E47345F86771_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1200)
#define CLASS_1_C086E47345F86771_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C0AE0)
#define CLASS_1_C086E47345F86771_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C0AD0)

inline static constexpr unsigned int Class_1_C086E47345F86771_19_TypeDefinitionIndex = 28207;

class Class_1_C086E47345F86771_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_19*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C086E47345F86771_19_TypeDefinitionIndex)->GetStaticField(0xDDB0);
	}
	// static const ::System::Int32 IBJNBJNDPIK = 0xE; // 0x0
	// static const ::System::Int32 KOEOEHIMOEI = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt64 BCLKCLDFMOA; // 0x18
	::System::UInt32 LJDBCGPFFDH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C086E47345F86771_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_19*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_19*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_19*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C086E47345F86771_19* Clone()
	{
		return ((::Class_1_C086E47345F86771_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C086E47345F86771_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C086E47345F86771_19*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C086E47345F86771_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_19*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
