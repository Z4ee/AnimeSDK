#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_166_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E858020)
#define CLASS_1_5B567C8A01BAEDFE_166_CLONE_OFFSET UNITYSDK_OFFSET(0x1E857D10)
#define CLASS_1_5B567C8A01BAEDFE_166_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E857E20)
#define CLASS_1_5B567C8A01BAEDFE_166_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E857D50)
#define CLASS_1_5B567C8A01BAEDFE_166_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E857F80)
#define CLASS_1_5B567C8A01BAEDFE_166_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E858070)
#define CLASS_1_5B567C8A01BAEDFE_166_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E858040)
#define CLASS_1_5B567C8A01BAEDFE_166_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E857C90)
#define CLASS_1_5B567C8A01BAEDFE_166_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E857CC0)
#define CLASS_1_5B567C8A01BAEDFE_166_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E857FB0)
#define CLASS_1_5B567C8A01BAEDFE_166_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E858010)
#define CLASS_1_5B567C8A01BAEDFE_166__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8580C0)
#define CLASS_1_5B567C8A01BAEDFE_166__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E857CE0)
#define CLASS_1_5B567C8A01BAEDFE_166__CTOR_OFFSET UNITYSDK_OFFSET(0x1E857CD0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_166_TypeDefinitionIndex = 29274;

class Class_1_5B567C8A01BAEDFE_166 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_166*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_166*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_166_TypeDefinitionIndex)->GetStaticField(0x5B560);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_166* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_166*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_166*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_166*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_166* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_166*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_166* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_166*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_166* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_166*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_166_MERGEFROM_1_OFFSET))(this, a1);
	}
};
