#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E30585F0EAEFDF1E_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19311CF0)
#define CLASS_1_E30585F0EAEFDF1E_6_CLONE_OFFSET UNITYSDK_OFFSET(0x19311840)
#define CLASS_1_E30585F0EAEFDF1E_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193119C0)
#define CLASS_1_E30585F0EAEFDF1E_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x193118E0)
#define CLASS_1_E30585F0EAEFDF1E_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19311A70)
#define CLASS_1_E30585F0EAEFDF1E_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19311DF0)
#define CLASS_1_E30585F0EAEFDF1E_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19311D90)
#define CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x193116E0)
#define CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x193118D0)
#define CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x193118C0)
#define CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x193118A0)
#define CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x193118B0)
#define CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19311890)
#define CLASS_1_E30585F0EAEFDF1E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19311740)
#define CLASS_1_E30585F0EAEFDF1E_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19311B80)
#define CLASS_1_E30585F0EAEFDF1E_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x19311BE0)
#define CLASS_1_E30585F0EAEFDF1E_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19311EE0)
#define CLASS_1_E30585F0EAEFDF1E_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193117A0)
#define CLASS_1_E30585F0EAEFDF1E_6__CTOR_OFFSET UNITYSDK_OFFSET(0x19311750)

inline static constexpr unsigned int Class_1_E30585F0EAEFDF1E_6_TypeDefinitionIndex = 28471;

class Class_1_E30585F0EAEFDF1E_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E30585F0EAEFDF1E_6_TypeDefinitionIndex)->GetStaticField(0x60530);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E30585F0EAEFDF1E_6_TypeDefinitionIndex)->GetStaticField(0x60538);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_5; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E30585F0EAEFDF1E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_6*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E30585F0EAEFDF1E_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E30585F0EAEFDF1E_6* Clone()
	{
		return ((::Class_1_E30585F0EAEFDF1E_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E30585F0EAEFDF1E_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_6*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E30585F0EAEFDF1E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_6*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E30585F0EAEFDF1E_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
