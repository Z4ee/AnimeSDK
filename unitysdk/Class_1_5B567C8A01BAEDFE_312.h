#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_312_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A78A00)
#define CLASS_1_5B567C8A01BAEDFE_312_CLONE_OFFSET UNITYSDK_OFFSET(0x19A78870)
#define CLASS_1_5B567C8A01BAEDFE_312_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A78910)
#define CLASS_1_5B567C8A01BAEDFE_312_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A788B0)
#define CLASS_1_5B567C8A01BAEDFE_312_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A78960)
#define CLASS_1_5B567C8A01BAEDFE_312_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A78A50)
#define CLASS_1_5B567C8A01BAEDFE_312_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A78A20)
#define CLASS_1_5B567C8A01BAEDFE_312_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A787F0)
#define CLASS_1_5B567C8A01BAEDFE_312_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A78820)
#define CLASS_1_5B567C8A01BAEDFE_312_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A78990)
#define CLASS_1_5B567C8A01BAEDFE_312_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A789F0)
#define CLASS_1_5B567C8A01BAEDFE_312__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A78AA0)
#define CLASS_1_5B567C8A01BAEDFE_312__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A78840)
#define CLASS_1_5B567C8A01BAEDFE_312__CTOR_OFFSET UNITYSDK_OFFSET(0x19A78830)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_312_TypeDefinitionIndex = 31532;

class Class_1_5B567C8A01BAEDFE_312 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_312*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_312*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_312_TypeDefinitionIndex)->GetStaticField(0x51690);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_312* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_312*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_312*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_312*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_312* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_312*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_312* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_312*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_312* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_312*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_312_MERGEFROM_1_OFFSET))(this, a1);
	}
};
