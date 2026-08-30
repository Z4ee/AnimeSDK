#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_249_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38FAC0)
#define CLASS_1_5B567C8A01BAEDFE_249_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38F7B0)
#define CLASS_1_5B567C8A01BAEDFE_249_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38F8C0)
#define CLASS_1_5B567C8A01BAEDFE_249_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38F7F0)
#define CLASS_1_5B567C8A01BAEDFE_249_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38FA20)
#define CLASS_1_5B567C8A01BAEDFE_249_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38FB10)
#define CLASS_1_5B567C8A01BAEDFE_249_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38FAE0)
#define CLASS_1_5B567C8A01BAEDFE_249_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E38F730)
#define CLASS_1_5B567C8A01BAEDFE_249_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38F760)
#define CLASS_1_5B567C8A01BAEDFE_249_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38FA50)
#define CLASS_1_5B567C8A01BAEDFE_249_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38FAB0)
#define CLASS_1_5B567C8A01BAEDFE_249__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38FB60)
#define CLASS_1_5B567C8A01BAEDFE_249__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38F780)
#define CLASS_1_5B567C8A01BAEDFE_249__CTOR_OFFSET UNITYSDK_OFFSET(0x1E38F770)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_249_TypeDefinitionIndex = 31198;

class Class_1_5B567C8A01BAEDFE_249 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_249*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_249*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_249_TypeDefinitionIndex)->GetStaticField(0x5C460);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_249* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_249*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_249*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_249*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_249* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_249*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_249* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_249*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_249* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_249*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_249_MERGEFROM_1_OFFSET))(this, a1);
	}
};
