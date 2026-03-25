#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_6BE2B761968BD3A4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DC7840)
#define CLASS_1_6BE2B761968BD3A4_CLONE_OFFSET UNITYSDK_OFFSET(0x17DC7320)
#define CLASS_1_6BE2B761968BD3A4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DC74F0)
#define CLASS_1_6BE2B761968BD3A4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DC73A0)
#define CLASS_1_6BE2B761968BD3A4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DC75E0)
#define CLASS_1_6BE2B761968BD3A4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DC7A30)
#define CLASS_1_6BE2B761968BD3A4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DC7920)
#define CLASS_1_6BE2B761968BD3A4_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x17DC7370)
#define CLASS_1_6BE2B761968BD3A4_METHOD_1_AF79E24951DBBA50_OFFSET UNITYSDK_OFFSET(0x17DC7390)
#define CLASS_1_6BE2B761968BD3A4_METHOD_1_E8F5A96D93A6544B_OFFSET UNITYSDK_OFFSET(0x17DC7380)
#define CLASS_1_6BE2B761968BD3A4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DC7200)
#define CLASS_1_6BE2B761968BD3A4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DC7700)
#define CLASS_1_6BE2B761968BD3A4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DC7760)
#define CLASS_1_6BE2B761968BD3A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DC7B20)
#define CLASS_1_6BE2B761968BD3A4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DC7250)
#define CLASS_1_6BE2B761968BD3A4__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC7210)

inline static constexpr unsigned int Class_1_6BE2B761968BD3A4_TypeDefinitionIndex = 25094;

class Class_1_6BE2B761968BD3A4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BE2B761968BD3A4_TypeDefinitionIndex)->GetStaticField(0x1A410);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::PileItem* Field_1_5; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6BE2B761968BD3A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BE2B761968BD3A4*))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6BE2B761968BD3A4* Clone()
	{
		return ((::Class_1_6BE2B761968BD3A4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::Proto::PileItem* Method_1_E8F5A96D93A6544B()
	{
		return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_METHOD_1_E8F5A96D93A6544B_OFFSET))(this);
	}

	::System::Void Method_1_AF79E24951DBBA50(::Proto::PileItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_METHOD_1_AF79E24951DBBA50_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6BE2B761968BD3A4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6BE2B761968BD3A4*))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6BE2B761968BD3A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6BE2B761968BD3A4*))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6BE2B761968BD3A4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
