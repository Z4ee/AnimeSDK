#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C086E47345F86771_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1995B590)
#define CLASS_1_C086E47345F86771_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1995B2B0)
#define CLASS_1_C086E47345F86771_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1995B410)
#define CLASS_1_C086E47345F86771_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1995B370)
#define CLASS_1_C086E47345F86771_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1995B470)
#define CLASS_1_C086E47345F86771_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1995B730)
#define CLASS_1_C086E47345F86771_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1995B6F0)
#define CLASS_1_C086E47345F86771_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1995B350)
#define CLASS_1_C086E47345F86771_10_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1995B340)
#define CLASS_1_C086E47345F86771_10_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1995B1F0)
#define CLASS_1_C086E47345F86771_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1995B360)
#define CLASS_1_C086E47345F86771_10_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1995B330)
#define CLASS_1_C086E47345F86771_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1995B250)
#define CLASS_1_C086E47345F86771_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1995B4B0)
#define CLASS_1_C086E47345F86771_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1995B510)
#define CLASS_1_C086E47345F86771_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x1995B7B0)
#define CLASS_1_C086E47345F86771_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1995B270)
#define CLASS_1_C086E47345F86771_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1995B260)

inline static constexpr unsigned int Class_1_C086E47345F86771_10_TypeDefinitionIndex = 32259;

class Class_1_C086E47345F86771_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C086E47345F86771_10_TypeDefinitionIndex)->GetStaticField(0x60700);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt64 Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C086E47345F86771_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_10*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_10*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C086E47345F86771_10* Clone()
	{
		return ((::Class_1_C086E47345F86771_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C086E47345F86771_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C086E47345F86771_10*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C086E47345F86771_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_10*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
