#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_86871415CDAD31AF_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D06420)
#define CLASS_1_86871415CDAD31AF_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17D05FE0)
#define CLASS_1_86871415CDAD31AF_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D06140)
#define CLASS_1_86871415CDAD31AF_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D06060)
#define CLASS_1_86871415CDAD31AF_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D061E0)
#define CLASS_1_86871415CDAD31AF_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D06510)
#define CLASS_1_86871415CDAD31AF_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D064C0)
#define CLASS_1_86871415CDAD31AF_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17D06030)
#define CLASS_1_86871415CDAD31AF_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D06050)
#define CLASS_1_86871415CDAD31AF_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D06040)
#define CLASS_1_86871415CDAD31AF_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D05EF0)
#define CLASS_1_86871415CDAD31AF_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D062E0)
#define CLASS_1_86871415CDAD31AF_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D06340)
#define CLASS_1_86871415CDAD31AF_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D06670)
#define CLASS_1_86871415CDAD31AF_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D05F50)
#define CLASS_1_86871415CDAD31AF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D05F00)

inline static constexpr unsigned int Class_1_86871415CDAD31AF_1_TypeDefinitionIndex = 24651;

class Class_1_86871415CDAD31AF_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86871415CDAD31AF_1_TypeDefinitionIndex)->GetStaticField(0x10440);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_86871415CDAD31AF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86871415CDAD31AF_1*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_86871415CDAD31AF_1* Clone()
	{
		return ((::Class_1_86871415CDAD31AF_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_86871415CDAD31AF_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_86871415CDAD31AF_1*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_86871415CDAD31AF_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86871415CDAD31AF_1*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_86871415CDAD31AF_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
