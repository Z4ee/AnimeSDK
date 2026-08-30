#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_25.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3B487C78A9BE7713_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EC68050)
#define CLASS_1_3B487C78A9BE7713_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1EC67C30)
#define CLASS_1_3B487C78A9BE7713_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EC67DB0)
#define CLASS_1_3B487C78A9BE7713_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC67C70)
#define CLASS_1_3B487C78A9BE7713_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC67ED0)
#define CLASS_1_3B487C78A9BE7713_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EC68190)
#define CLASS_1_3B487C78A9BE7713_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EC680F0)
#define CLASS_1_3B487C78A9BE7713_1_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1EC67C60)
#define CLASS_1_3B487C78A9BE7713_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EC67B20)
#define CLASS_1_3B487C78A9BE7713_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EC67B50)
#define CLASS_1_3B487C78A9BE7713_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC67F40)
#define CLASS_1_3B487C78A9BE7713_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EC67FA0)
#define CLASS_1_3B487C78A9BE7713_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC68340)
#define CLASS_1_3B487C78A9BE7713_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC67BA0)
#define CLASS_1_3B487C78A9BE7713_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC67B60)

inline static constexpr unsigned int Class_1_3B487C78A9BE7713_1_TypeDefinitionIndex = 32588;

class Class_1_3B487C78A9BE7713_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B487C78A9BE7713_1_TypeDefinitionIndex)->GetStaticField(0x3C6C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_25>** StaticGet_HHAPKGFFABN()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_96F6662CA3713095_25>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B487C78A9BE7713_1_TypeDefinitionIndex)->GetStaticField(0x3C6C8);
	}
	// static const ::System::Int32 EGOIGAODHFH = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_25>* NGMAICDCHJF; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3B487C78A9BE7713_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B487C78A9BE7713_1*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3B487C78A9BE7713_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3B487C78A9BE7713_1* Clone()
	{
		return ((::Class_1_3B487C78A9BE7713_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_25>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_96F6662CA3713095_25>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3B487C78A9BE7713_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3B487C78A9BE7713_1*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3B487C78A9BE7713_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B487C78A9BE7713_1*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B487C78A9BE7713_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
