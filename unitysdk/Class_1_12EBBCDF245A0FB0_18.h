#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D7E4CF0)
#define CLASS_1_12EBBCDF245A0FB0_18_CLONE_OFFSET UNITYSDK_OFFSET(0x1D7E4880)
#define CLASS_1_12EBBCDF245A0FB0_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D7E4A20)
#define CLASS_1_12EBBCDF245A0FB0_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D7E4910)
#define CLASS_1_12EBBCDF245A0FB0_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7E4BA0)
#define CLASS_1_12EBBCDF245A0FB0_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D7E4D50)
#define CLASS_1_12EBBCDF245A0FB0_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D7E4D20)
#define CLASS_1_12EBBCDF245A0FB0_18_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D7E47D0)
#define CLASS_1_12EBBCDF245A0FB0_18_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D7E4900)
#define CLASS_1_12EBBCDF245A0FB0_18_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D7E48F0)
#define CLASS_1_12EBBCDF245A0FB0_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D7E4830)
#define CLASS_1_12EBBCDF245A0FB0_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D7E4BD0)
#define CLASS_1_12EBBCDF245A0FB0_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D7E4C30)
#define CLASS_1_12EBBCDF245A0FB0_18__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7E4EB0)
#define CLASS_1_12EBBCDF245A0FB0_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7E4850)
#define CLASS_1_12EBBCDF245A0FB0_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E4840)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_18_TypeDefinitionIndex = 31058;

class Class_1_12EBBCDF245A0FB0_18 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_18*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_18_TypeDefinitionIndex)->GetStaticField(0x3CA40);
	}
	// static const ::System::Int32 GCBAMAPEDPJ = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean FEKPPGIHMAN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_18*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_18*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_18*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_18* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_18*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_18*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
