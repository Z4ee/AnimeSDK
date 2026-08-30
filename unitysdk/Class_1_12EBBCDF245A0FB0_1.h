#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDF0C0)
#define CLASS_1_12EBBCDF245A0FB0_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDEC20)
#define CLASS_1_12EBBCDF245A0FB0_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDEE00)
#define CLASS_1_12EBBCDF245A0FB0_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDECE0)
#define CLASS_1_12EBBCDF245A0FB0_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDEEF0)
#define CLASS_1_12EBBCDF245A0FB0_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDF130)
#define CLASS_1_12EBBCDF245A0FB0_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDF0F0)
#define CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E9B2B70)
#define CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1DEDECD0)
#define CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DEDECB0)
#define CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1DEDECC0)
#define CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DEDECA0)
#define CLASS_1_12EBBCDF245A0FB0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B2BD0)
#define CLASS_1_12EBBCDF245A0FB0_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDEF20)
#define CLASS_1_12EBBCDF245A0FB0_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDEF80)
#define CLASS_1_12EBBCDF245A0FB0_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDF2B0)
#define CLASS_1_12EBBCDF245A0FB0_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDEBE0)
#define CLASS_1_12EBBCDF245A0FB0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B2BE0)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_1_TypeDefinitionIndex = 25351;

class Class_1_12EBBCDF245A0FB0_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_1_TypeDefinitionIndex)->GetStaticField(0x39F80);
	}
	// static const ::System::Int32 MHLMJCDMAEL = 0x1; // 0x0
	// static const ::System::Int32 APNDMOJDMFF = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean KCIAHKNIDIB; // 0x18
	::System::Boolean EEPAGJPCBPP; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_1*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_1* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_1*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_1*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
