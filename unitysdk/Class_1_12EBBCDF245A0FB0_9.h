#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA376A0)
#define CLASS_1_12EBBCDF245A0FB0_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA37280)
#define CLASS_1_12EBBCDF245A0FB0_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA373D0)
#define CLASS_1_12EBBCDF245A0FB0_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA372F0)
#define CLASS_1_12EBBCDF245A0FB0_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA37550)
#define CLASS_1_12EBBCDF245A0FB0_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA37700)
#define CLASS_1_12EBBCDF245A0FB0_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA376D0)
#define CLASS_1_12EBBCDF245A0FB0_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA37200)
#define CLASS_1_12EBBCDF245A0FB0_9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EA372E0)
#define CLASS_1_12EBBCDF245A0FB0_9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EA372D0)
#define CLASS_1_12EBBCDF245A0FB0_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA37230)
#define CLASS_1_12EBBCDF245A0FB0_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA37580)
#define CLASS_1_12EBBCDF245A0FB0_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA375E0)
#define CLASS_1_12EBBCDF245A0FB0_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA37860)
#define CLASS_1_12EBBCDF245A0FB0_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA37250)
#define CLASS_1_12EBBCDF245A0FB0_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA37240)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_9_TypeDefinitionIndex = 27901;

class Class_1_12EBBCDF245A0FB0_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_9*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_9_TypeDefinitionIndex)->GetStaticField(0x39510);
	}
	// static const ::System::Int32 HBDALMDHLKJ = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean AIGHAPALCNE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_9*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_9* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_9*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_9*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
