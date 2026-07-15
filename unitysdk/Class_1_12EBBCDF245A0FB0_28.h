#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_28_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA56BD0)
#define CLASS_1_12EBBCDF245A0FB0_28_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA56790)
#define CLASS_1_12EBBCDF245A0FB0_28_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA56910)
#define CLASS_1_12EBBCDF245A0FB0_28_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA56820)
#define CLASS_1_12EBBCDF245A0FB0_28_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA56A00)
#define CLASS_1_12EBBCDF245A0FB0_28_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA56C40)
#define CLASS_1_12EBBCDF245A0FB0_28_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA56C00)
#define CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CA56700)
#define CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1CA56810)
#define CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CA567F0)
#define CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1CA56800)
#define CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CA567E0)
#define CLASS_1_12EBBCDF245A0FB0_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA56730)
#define CLASS_1_12EBBCDF245A0FB0_28_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA56A30)
#define CLASS_1_12EBBCDF245A0FB0_28_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA56A90)
#define CLASS_1_12EBBCDF245A0FB0_28__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA56DC0)
#define CLASS_1_12EBBCDF245A0FB0_28__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA56750)
#define CLASS_1_12EBBCDF245A0FB0_28__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA56740)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_28_TypeDefinitionIndex = 32511;

class Class_1_12EBBCDF245A0FB0_28 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_28*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_28*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_28_TypeDefinitionIndex)->GetStaticField(0x2CDB0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_28*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_28*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_28*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_28* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_28* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_28*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_28*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_28_MERGEFROM_1_OFFSET))(this, a1);
	}
};
