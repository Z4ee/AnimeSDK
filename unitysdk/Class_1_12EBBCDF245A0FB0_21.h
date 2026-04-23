#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19883E50)
#define CLASS_1_12EBBCDF245A0FB0_21_CLONE_OFFSET UNITYSDK_OFFSET(0x19883BD0)
#define CLASS_1_12EBBCDF245A0FB0_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19883D00)
#define CLASS_1_12EBBCDF245A0FB0_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x19883C60)
#define CLASS_1_12EBBCDF245A0FB0_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19883D60)
#define CLASS_1_12EBBCDF245A0FB0_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19883EB0)
#define CLASS_1_12EBBCDF245A0FB0_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19883E80)
#define CLASS_1_12EBBCDF245A0FB0_21_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19883B20)
#define CLASS_1_12EBBCDF245A0FB0_21_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19883C50)
#define CLASS_1_12EBBCDF245A0FB0_21_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19883C40)
#define CLASS_1_12EBBCDF245A0FB0_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19883B80)
#define CLASS_1_12EBBCDF245A0FB0_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19883D90)
#define CLASS_1_12EBBCDF245A0FB0_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x19883DF0)
#define CLASS_1_12EBBCDF245A0FB0_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x19883F20)
#define CLASS_1_12EBBCDF245A0FB0_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19883BA0)
#define CLASS_1_12EBBCDF245A0FB0_21__CTOR_OFFSET UNITYSDK_OFFSET(0x19883B90)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_21_TypeDefinitionIndex = 30511;

class Class_1_12EBBCDF245A0FB0_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_21_TypeDefinitionIndex)->GetStaticField(0x4C880);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Boolean Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_21*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_21*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_21* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_21*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_21*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
