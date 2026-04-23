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
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_87B6445D24FE4E47_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19519FA0)
#define CLASS_1_87B6445D24FE4E47_CLONE_OFFSET UNITYSDK_OFFSET(0x19519AE0)
#define CLASS_1_87B6445D24FE4E47_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19519C60)
#define CLASS_1_87B6445D24FE4E47_EQUALS_OFFSET UNITYSDK_OFFSET(0x19519B40)
#define CLASS_1_87B6445D24FE4E47_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19519D50)
#define CLASS_1_87B6445D24FE4E47_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1951A190)
#define CLASS_1_87B6445D24FE4E47_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1951A080)
#define CLASS_1_87B6445D24FE4E47_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x19519B10)
#define CLASS_1_87B6445D24FE4E47_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19519990)
#define CLASS_1_87B6445D24FE4E47_METHOD_1_AF79E24951DBBA50_OFFSET UNITYSDK_OFFSET(0x19519B30)
#define CLASS_1_87B6445D24FE4E47_METHOD_1_E8F5A96D93A6544B_OFFSET UNITYSDK_OFFSET(0x19519B20)
#define CLASS_1_87B6445D24FE4E47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195199C0)
#define CLASS_1_87B6445D24FE4E47_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19519E70)
#define CLASS_1_87B6445D24FE4E47_WRITETO_OFFSET UNITYSDK_OFFSET(0x19519ED0)
#define CLASS_1_87B6445D24FE4E47__CCTOR_OFFSET UNITYSDK_OFFSET(0x1951A270)
#define CLASS_1_87B6445D24FE4E47__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19519A10)
#define CLASS_1_87B6445D24FE4E47__CTOR_OFFSET UNITYSDK_OFFSET(0x195199D0)

inline static constexpr unsigned int Class_1_87B6445D24FE4E47_TypeDefinitionIndex = 28351;

class Class_1_87B6445D24FE4E47 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87B6445D24FE4E47_TypeDefinitionIndex)->GetStaticField(0x20EC0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_87B6445D24FE4E47*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_87B6445D24FE4E47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87B6445D24FE4E47_TypeDefinitionIndex)->GetStaticField(0x20EC8);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_4; // 0x10
	::Proto::PileItem* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_87B6445D24FE4E47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87B6445D24FE4E47*))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_87B6445D24FE4E47*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_87B6445D24FE4E47*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_87B6445D24FE4E47* Clone()
	{
		return ((::Class_1_87B6445D24FE4E47*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::Proto::PileItem* Method_1_E8F5A96D93A6544B()
	{
		return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_METHOD_1_E8F5A96D93A6544B_OFFSET))(this);
	}

	::System::Void Method_1_AF79E24951DBBA50(::Proto::PileItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_METHOD_1_AF79E24951DBBA50_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_87B6445D24FE4E47* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_87B6445D24FE4E47*))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_87B6445D24FE4E47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87B6445D24FE4E47*))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_87B6445D24FE4E47_MERGEFROM_1_OFFSET))(this, a1);
	}
};
