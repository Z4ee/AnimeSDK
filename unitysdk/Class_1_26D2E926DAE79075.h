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

#define CLASS_1_26D2E926DAE79075_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C1A140)
#define CLASS_1_26D2E926DAE79075_CLONE_OFFSET UNITYSDK_OFFSET(0x19C19D70)
#define CLASS_1_26D2E926DAE79075_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C19E90)
#define CLASS_1_26D2E926DAE79075_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C19DB0)
#define CLASS_1_26D2E926DAE79075_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C19F40)
#define CLASS_1_26D2E926DAE79075_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C1A280)
#define CLASS_1_26D2E926DAE79075_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C1A1E0)
#define CLASS_1_26D2E926DAE79075_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x19C19DA0)
#define CLASS_1_26D2E926DAE79075_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C19C30)
#define CLASS_1_26D2E926DAE79075_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C19C60)
#define CLASS_1_26D2E926DAE79075_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C1A030)
#define CLASS_1_26D2E926DAE79075_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C1A090)
#define CLASS_1_26D2E926DAE79075__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C1A360)
#define CLASS_1_26D2E926DAE79075__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C19CC0)
#define CLASS_1_26D2E926DAE79075__CTOR_OFFSET UNITYSDK_OFFSET(0x19C19C70)

inline static constexpr unsigned int Class_1_26D2E926DAE79075_TypeDefinitionIndex = 24838;

class Class_1_26D2E926DAE79075 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_26D2E926DAE79075*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_26D2E926DAE79075*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26D2E926DAE79075_TypeDefinitionIndex)->GetStaticField(0x2A450);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26D2E926DAE79075_TypeDefinitionIndex)->GetStaticField(0x2A458);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_26D2E926DAE79075* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_26D2E926DAE79075*))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_26D2E926DAE79075*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_26D2E926DAE79075*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_26D2E926DAE79075* Clone()
	{
		return ((::Class_1_26D2E926DAE79075*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_26D2E926DAE79075* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_26D2E926DAE79075*))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_26D2E926DAE79075* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_26D2E926DAE79075*))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_26D2E926DAE79075_MERGEFROM_1_OFFSET))(this, a1);
	}
};
