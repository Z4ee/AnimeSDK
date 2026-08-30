#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4CF7D0)
#define CLASS_1_12EBBCDF245A0FB0_29_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4CF3B0)
#define CLASS_1_12EBBCDF245A0FB0_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4CF500)
#define CLASS_1_12EBBCDF245A0FB0_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4CF420)
#define CLASS_1_12EBBCDF245A0FB0_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4CF680)
#define CLASS_1_12EBBCDF245A0FB0_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4CF830)
#define CLASS_1_12EBBCDF245A0FB0_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4CF800)
#define CLASS_1_12EBBCDF245A0FB0_29_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E4CF330)
#define CLASS_1_12EBBCDF245A0FB0_29_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E4CF410)
#define CLASS_1_12EBBCDF245A0FB0_29_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E4CF400)
#define CLASS_1_12EBBCDF245A0FB0_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4CF360)
#define CLASS_1_12EBBCDF245A0FB0_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4CF6B0)
#define CLASS_1_12EBBCDF245A0FB0_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4CF710)
#define CLASS_1_12EBBCDF245A0FB0_29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CF990)
#define CLASS_1_12EBBCDF245A0FB0_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4CF380)
#define CLASS_1_12EBBCDF245A0FB0_29__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CF370)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_29_TypeDefinitionIndex = 33385;

class Class_1_12EBBCDF245A0FB0_29 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_29*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_29*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_29_TypeDefinitionIndex)->GetStaticField(0xC010);
	}
	// static const ::System::Int32 BJMCMIDFMFE = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean LDALONPMANN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_29*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_29*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_29*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_29* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_29*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_29*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
