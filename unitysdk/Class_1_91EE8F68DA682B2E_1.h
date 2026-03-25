#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_869;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_91EE8F68DA682B2E_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181167E0)
#define CLASS_1_91EE8F68DA682B2E_1_CLONE_OFFSET UNITYSDK_OFFSET(0x181163E0)
#define CLASS_1_91EE8F68DA682B2E_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181165D0)
#define CLASS_1_91EE8F68DA682B2E_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x181164F0)
#define CLASS_1_91EE8F68DA682B2E_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18116680)
#define CLASS_1_91EE8F68DA682B2E_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181169E0)
#define CLASS_1_91EE8F68DA682B2E_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18116900)
#define CLASS_1_91EE8F68DA682B2E_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x181164D0)
#define CLASS_1_91EE8F68DA682B2E_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x181164C0)
#define CLASS_1_91EE8F68DA682B2E_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x181164E0)
#define CLASS_1_91EE8F68DA682B2E_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x181164B0)
#define CLASS_1_91EE8F68DA682B2E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18116330)
#define CLASS_1_91EE8F68DA682B2E_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18116700)
#define CLASS_1_91EE8F68DA682B2E_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x18116760)
#define CLASS_1_91EE8F68DA682B2E_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18116350)
#define CLASS_1_91EE8F68DA682B2E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18116340)

inline static constexpr unsigned int Class_1_91EE8F68DA682B2E_1_TypeDefinitionIndex = 27118;

class Class_1_91EE8F68DA682B2E_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_FA4F4A67B1C04320_869* Field_1_4; // 0x18
	::System::UInt64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_91EE8F68DA682B2E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91EE8F68DA682B2E_1*))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_91EE8F68DA682B2E_1* Clone()
	{
		return ((::Class_1_91EE8F68DA682B2E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Class_1_FA4F4A67B1C04320_869* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FA4F4A67B1C04320_869*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FA4F4A67B1C04320_869* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_869*))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_91EE8F68DA682B2E_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_91EE8F68DA682B2E_1*))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_91EE8F68DA682B2E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91EE8F68DA682B2E_1*))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91EE8F68DA682B2E_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
