#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_847DDCF77C99B561_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CFBDE0)
#define CLASS_1_847DDCF77C99B561_4_CLONE_OFFSET UNITYSDK_OFFSET(0x17CFBA30)
#define CLASS_1_847DDCF77C99B561_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CFBBF0)
#define CLASS_1_847DDCF77C99B561_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CFBB30)
#define CLASS_1_847DDCF77C99B561_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CFBC60)
#define CLASS_1_847DDCF77C99B561_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CFC090)
#define CLASS_1_847DDCF77C99B561_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CFC040)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17CFBAD0)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17CFBB10)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CFBAB0)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17CFBB00)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17CFBAE0)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17CFBB20)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CFBAC0)
#define CLASS_1_847DDCF77C99B561_4_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17CFBAF0)
#define CLASS_1_847DDCF77C99B561_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CFB9D0)
#define CLASS_1_847DDCF77C99B561_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CFBCB0)
#define CLASS_1_847DDCF77C99B561_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CFBD10)
#define CLASS_1_847DDCF77C99B561_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CFB9F0)
#define CLASS_1_847DDCF77C99B561_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17CFB9E0)

inline static constexpr unsigned int Class_1_847DDCF77C99B561_4_TypeDefinitionIndex = 23769;

class Class_1_847DDCF77C99B561_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt64 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_847DDCF77C99B561_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_847DDCF77C99B561_4*))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_847DDCF77C99B561_4* Clone()
	{
		return ((::Class_1_847DDCF77C99B561_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_847DDCF77C99B561_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_847DDCF77C99B561_4*))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_847DDCF77C99B561_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_847DDCF77C99B561_4*))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_847DDCF77C99B561_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
