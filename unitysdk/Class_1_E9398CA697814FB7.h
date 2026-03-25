#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E9398CA697814FB7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AA48B0)
#define CLASS_1_E9398CA697814FB7_CLONE_OFFSET UNITYSDK_OFFSET(0x17AA4420)
#define CLASS_1_E9398CA697814FB7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AA4510)
#define CLASS_1_E9398CA697814FB7_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AA44B0)
#define CLASS_1_E9398CA697814FB7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AA4600)
#define CLASS_1_E9398CA697814FB7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AA4A70)
#define CLASS_1_E9398CA697814FB7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AA49E0)
#define CLASS_1_E9398CA697814FB7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17AA4470)
#define CLASS_1_E9398CA697814FB7_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x17AA44A0)
#define CLASS_1_E9398CA697814FB7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17AA4490)
#define CLASS_1_E9398CA697814FB7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17AA4480)
#define CLASS_1_E9398CA697814FB7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AA4250)
#define CLASS_1_E9398CA697814FB7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AA4750)
#define CLASS_1_E9398CA697814FB7_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AA47B0)
#define CLASS_1_E9398CA697814FB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AA4BC0)
#define CLASS_1_E9398CA697814FB7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AA42F0)
#define CLASS_1_E9398CA697814FB7__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA4260)

inline static constexpr unsigned int Class_1_E9398CA697814FB7_TypeDefinitionIndex = 23141;

class Class_1_E9398CA697814FB7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E9398CA697814FB7_TypeDefinitionIndex)->GetStaticField(0x20800);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E9398CA697814FB7_TypeDefinitionIndex)->GetStaticField(0x20808);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E9398CA697814FB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9398CA697814FB7*))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E9398CA697814FB7* Clone()
	{
		return ((::Class_1_E9398CA697814FB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_E7C4009BCC22497A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E9398CA697814FB7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E9398CA697814FB7*))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E9398CA697814FB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9398CA697814FB7*))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E9398CA697814FB7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
