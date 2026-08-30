#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_122_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DBE00)
#define CLASS_1_5B567C8A01BAEDFE_122_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DBAA0)
#define CLASS_1_5B567C8A01BAEDFE_122_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DBC00)
#define CLASS_1_5B567C8A01BAEDFE_122_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DBB10)
#define CLASS_1_5B567C8A01BAEDFE_122_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DBD60)
#define CLASS_1_5B567C8A01BAEDFE_122_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DBE50)
#define CLASS_1_5B567C8A01BAEDFE_122_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DBE20)
#define CLASS_1_5B567C8A01BAEDFE_122_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E3DB9F0)
#define CLASS_1_5B567C8A01BAEDFE_122_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DBA50)
#define CLASS_1_5B567C8A01BAEDFE_122_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DBD90)
#define CLASS_1_5B567C8A01BAEDFE_122_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DBDF0)
#define CLASS_1_5B567C8A01BAEDFE_122__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DBEA0)
#define CLASS_1_5B567C8A01BAEDFE_122__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DBA70)
#define CLASS_1_5B567C8A01BAEDFE_122__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DBA60)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_122_TypeDefinitionIndex = 28126;

class Class_1_5B567C8A01BAEDFE_122 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_122*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_122*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_122_TypeDefinitionIndex)->GetStaticField(0x600C0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_122* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_122*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_122*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_122*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_122* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_122*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_122* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_122*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_122* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_122*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_122_MERGEFROM_1_OFFSET))(this, a1);
	}
};
