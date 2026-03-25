#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6949CBEE02AA8B1E_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F5D250)
#define CLASS_1_E7C4009BCC22497A_15_CLONE_OFFSET UNITYSDK_OFFSET(0x17F5CE30)
#define CLASS_1_E7C4009BCC22497A_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F5CFA0)
#define CLASS_1_E7C4009BCC22497A_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F5CE90)
#define CLASS_1_E7C4009BCC22497A_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F5D050)
#define CLASS_1_E7C4009BCC22497A_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F5D390)
#define CLASS_1_E7C4009BCC22497A_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F5D2F0)
#define CLASS_1_E7C4009BCC22497A_15_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17F5CE80)
#define CLASS_1_E7C4009BCC22497A_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F5CD20)
#define CLASS_1_E7C4009BCC22497A_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F5D140)
#define CLASS_1_E7C4009BCC22497A_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F5D1A0)
#define CLASS_1_E7C4009BCC22497A_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F5D470)
#define CLASS_1_E7C4009BCC22497A_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F5CD80)
#define CLASS_1_E7C4009BCC22497A_15__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5CD30)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_15_TypeDefinitionIndex = 24297;

class Class_1_E7C4009BCC22497A_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6949CBEE02AA8B1E_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6949CBEE02AA8B1E_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_15_TypeDefinitionIndex)->GetStaticField(0x32380);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6949CBEE02AA8B1E_1*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_15*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_15* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6949CBEE02AA8B1E_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6949CBEE02AA8B1E_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_15*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_15*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
