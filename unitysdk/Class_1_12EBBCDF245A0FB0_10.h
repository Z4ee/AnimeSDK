#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A01FD30)
#define CLASS_1_12EBBCDF245A0FB0_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1A01FAB0)
#define CLASS_1_12EBBCDF245A0FB0_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A01FBE0)
#define CLASS_1_12EBBCDF245A0FB0_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A01FB40)
#define CLASS_1_12EBBCDF245A0FB0_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A01FC40)
#define CLASS_1_12EBBCDF245A0FB0_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A01FD90)
#define CLASS_1_12EBBCDF245A0FB0_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A01FD60)
#define CLASS_1_12EBBCDF245A0FB0_10_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A01FA00)
#define CLASS_1_12EBBCDF245A0FB0_10_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A01FB30)
#define CLASS_1_12EBBCDF245A0FB0_10_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A01FB20)
#define CLASS_1_12EBBCDF245A0FB0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A01FA60)
#define CLASS_1_12EBBCDF245A0FB0_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A01FC70)
#define CLASS_1_12EBBCDF245A0FB0_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A01FCD0)
#define CLASS_1_12EBBCDF245A0FB0_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A01FEF0)
#define CLASS_1_12EBBCDF245A0FB0_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A01FA80)
#define CLASS_1_12EBBCDF245A0FB0_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01FA70)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_10_TypeDefinitionIndex = 26731;

class Class_1_12EBBCDF245A0FB0_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_10_TypeDefinitionIndex)->GetStaticField(0x2B2C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Boolean Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_10*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_10*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_10* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_10*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_10*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
