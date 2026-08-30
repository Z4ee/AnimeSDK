#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_207_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C8560)
#define CLASS_1_5B567C8A01BAEDFE_207_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C8250)
#define CLASS_1_5B567C8A01BAEDFE_207_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C8360)
#define CLASS_1_5B567C8A01BAEDFE_207_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C8290)
#define CLASS_1_5B567C8A01BAEDFE_207_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C84C0)
#define CLASS_1_5B567C8A01BAEDFE_207_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C85B0)
#define CLASS_1_5B567C8A01BAEDFE_207_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C8580)
#define CLASS_1_5B567C8A01BAEDFE_207_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E2C81D0)
#define CLASS_1_5B567C8A01BAEDFE_207_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8200)
#define CLASS_1_5B567C8A01BAEDFE_207_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C84F0)
#define CLASS_1_5B567C8A01BAEDFE_207_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C8550)
#define CLASS_1_5B567C8A01BAEDFE_207__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8600)
#define CLASS_1_5B567C8A01BAEDFE_207__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C8220)
#define CLASS_1_5B567C8A01BAEDFE_207__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8210)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_207_TypeDefinitionIndex = 30281;

class Class_1_5B567C8A01BAEDFE_207 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_207*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_207*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_207_TypeDefinitionIndex)->GetStaticField(0x42180);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_207* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_207*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_207*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_207*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_207* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_207*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_207* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_207*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_207* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_207*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_207_MERGEFROM_1_OFFSET))(this, a1);
	}
};
