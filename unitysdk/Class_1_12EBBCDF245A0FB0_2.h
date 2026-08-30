#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65D1F0)
#define CLASS_1_12EBBCDF245A0FB0_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65CDD0)
#define CLASS_1_12EBBCDF245A0FB0_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65CF20)
#define CLASS_1_12EBBCDF245A0FB0_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65CE40)
#define CLASS_1_12EBBCDF245A0FB0_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65D0A0)
#define CLASS_1_12EBBCDF245A0FB0_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65D250)
#define CLASS_1_12EBBCDF245A0FB0_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65D220)
#define CLASS_1_12EBBCDF245A0FB0_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E65CD50)
#define CLASS_1_12EBBCDF245A0FB0_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E65CE30)
#define CLASS_1_12EBBCDF245A0FB0_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E65CE20)
#define CLASS_1_12EBBCDF245A0FB0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65CD80)
#define CLASS_1_12EBBCDF245A0FB0_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65D0D0)
#define CLASS_1_12EBBCDF245A0FB0_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65D130)
#define CLASS_1_12EBBCDF245A0FB0_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65D3B0)
#define CLASS_1_12EBBCDF245A0FB0_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65CDA0)
#define CLASS_1_12EBBCDF245A0FB0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E65CD90)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_2_TypeDefinitionIndex = 25778;

class Class_1_12EBBCDF245A0FB0_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_2_TypeDefinitionIndex)->GetStaticField(0x3DAB0);
	}
	// static const ::System::Int32 BNILBFFFMBO = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean KACLGPIGFCL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_2*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_2* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_2*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_2*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
