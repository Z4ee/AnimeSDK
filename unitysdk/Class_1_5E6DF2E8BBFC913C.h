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
namespace Proto { class ItemCost; }
namespace System { class String; }

#define CLASS_1_5E6DF2E8BBFC913C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1CEE60)
#define CLASS_1_5E6DF2E8BBFC913C_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1CE9E0)
#define CLASS_1_5E6DF2E8BBFC913C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1CEB80)
#define CLASS_1_5E6DF2E8BBFC913C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1CEA60)
#define CLASS_1_5E6DF2E8BBFC913C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1CEC30)
#define CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1CF030)
#define CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1CEF90)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A1CEA40)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A1CE8A0)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A1CEA50)
#define CLASS_1_5E6DF2E8BBFC913C_METHOD_1_F9594A5160DEEC20_OFFSET UNITYSDK_OFFSET(0x1A1CEA30)
#define CLASS_1_5E6DF2E8BBFC913C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1CE900)
#define CLASS_1_5E6DF2E8BBFC913C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1CED20)
#define CLASS_1_5E6DF2E8BBFC913C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1CED80)
#define CLASS_1_5E6DF2E8BBFC913C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1CF200)
#define CLASS_1_5E6DF2E8BBFC913C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1CE950)
#define CLASS_1_5E6DF2E8BBFC913C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CE910)

inline static constexpr unsigned int Class_1_5E6DF2E8BBFC913C_TypeDefinitionIndex = 24845;

class Class_1_5E6DF2E8BBFC913C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E6DF2E8BBFC913C_TypeDefinitionIndex)->GetStaticField(0x35D60);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E6DF2E8BBFC913C_TypeDefinitionIndex)->GetStaticField(0x35D68);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5E6DF2E8BBFC913C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E6DF2E8BBFC913C*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5E6DF2E8BBFC913C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5E6DF2E8BBFC913C* Clone()
	{
		return ((::Class_1_5E6DF2E8BBFC913C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Method_1_F9594A5160DEEC20()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_F9594A5160DEEC20_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5E6DF2E8BBFC913C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5E6DF2E8BBFC913C*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5E6DF2E8BBFC913C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E6DF2E8BBFC913C*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5E6DF2E8BBFC913C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
