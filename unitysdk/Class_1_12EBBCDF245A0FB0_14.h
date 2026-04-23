#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A9E600)
#define CLASS_1_12EBBCDF245A0FB0_14_CLONE_OFFSET UNITYSDK_OFFSET(0x19A9E380)
#define CLASS_1_12EBBCDF245A0FB0_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A9E4B0)
#define CLASS_1_12EBBCDF245A0FB0_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A9E410)
#define CLASS_1_12EBBCDF245A0FB0_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A9E510)
#define CLASS_1_12EBBCDF245A0FB0_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A9E660)
#define CLASS_1_12EBBCDF245A0FB0_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A9E630)
#define CLASS_1_12EBBCDF245A0FB0_14_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A9E2D0)
#define CLASS_1_12EBBCDF245A0FB0_14_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19A9E400)
#define CLASS_1_12EBBCDF245A0FB0_14_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19A9E3F0)
#define CLASS_1_12EBBCDF245A0FB0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A9E330)
#define CLASS_1_12EBBCDF245A0FB0_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A9E540)
#define CLASS_1_12EBBCDF245A0FB0_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A9E5A0)
#define CLASS_1_12EBBCDF245A0FB0_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A9E6D0)
#define CLASS_1_12EBBCDF245A0FB0_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A9E350)
#define CLASS_1_12EBBCDF245A0FB0_14__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9E340)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_14_TypeDefinitionIndex = 27705;

class Class_1_12EBBCDF245A0FB0_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_14_TypeDefinitionIndex)->GetStaticField(0x54710);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Boolean Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_14*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_14*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_14* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_14*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_14*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
