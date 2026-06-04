#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB98DB0)
#define CLASS_1_12EBBCDF245A0FB0_24_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB98B30)
#define CLASS_1_12EBBCDF245A0FB0_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB98C60)
#define CLASS_1_12EBBCDF245A0FB0_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB98BC0)
#define CLASS_1_12EBBCDF245A0FB0_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB98CC0)
#define CLASS_1_12EBBCDF245A0FB0_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB98E10)
#define CLASS_1_12EBBCDF245A0FB0_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB98DE0)
#define CLASS_1_12EBBCDF245A0FB0_24_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AB98A80)
#define CLASS_1_12EBBCDF245A0FB0_24_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AB98BB0)
#define CLASS_1_12EBBCDF245A0FB0_24_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AB98BA0)
#define CLASS_1_12EBBCDF245A0FB0_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB98AE0)
#define CLASS_1_12EBBCDF245A0FB0_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB98CF0)
#define CLASS_1_12EBBCDF245A0FB0_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB98D50)
#define CLASS_1_12EBBCDF245A0FB0_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB98F70)
#define CLASS_1_12EBBCDF245A0FB0_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB98B00)
#define CLASS_1_12EBBCDF245A0FB0_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB98AF0)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_24_TypeDefinitionIndex = 30618;

class Class_1_12EBBCDF245A0FB0_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_24*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_24_TypeDefinitionIndex)->GetStaticField(0x25960);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Boolean Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_24*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_24*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_24*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_24* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_24*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_24*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
