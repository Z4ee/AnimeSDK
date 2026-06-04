#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A24E410)
#define CLASS_1_12EBBCDF245A0FB0_27_CLONE_OFFSET UNITYSDK_OFFSET(0x1A24E1E0)
#define CLASS_1_12EBBCDF245A0FB0_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A24E2C0)
#define CLASS_1_12EBBCDF245A0FB0_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A24E250)
#define CLASS_1_12EBBCDF245A0FB0_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A24E320)
#define CLASS_1_12EBBCDF245A0FB0_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A24E470)
#define CLASS_1_12EBBCDF245A0FB0_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A24E440)
#define CLASS_1_12EBBCDF245A0FB0_27_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A24E160)
#define CLASS_1_12EBBCDF245A0FB0_27_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A24E240)
#define CLASS_1_12EBBCDF245A0FB0_27_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A24E230)
#define CLASS_1_12EBBCDF245A0FB0_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A24E190)
#define CLASS_1_12EBBCDF245A0FB0_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A24E350)
#define CLASS_1_12EBBCDF245A0FB0_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A24E3B0)
#define CLASS_1_12EBBCDF245A0FB0_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A24E5D0)
#define CLASS_1_12EBBCDF245A0FB0_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A24E1B0)
#define CLASS_1_12EBBCDF245A0FB0_27__CTOR_OFFSET UNITYSDK_OFFSET(0x1A24E1A0)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_27_TypeDefinitionIndex = 31754;

class Class_1_12EBBCDF245A0FB0_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_27*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_27_TypeDefinitionIndex)->GetStaticField(0x439A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Boolean Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_27*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_27*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_27*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_27* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_27*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_27*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
