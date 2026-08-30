#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_246_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E939710)
#define CLASS_1_5B567C8A01BAEDFE_246_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45DBE0)
#define CLASS_1_5B567C8A01BAEDFE_246_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E939510)
#define CLASS_1_5B567C8A01BAEDFE_246_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45DC50)
#define CLASS_1_5B567C8A01BAEDFE_246_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E939670)
#define CLASS_1_5B567C8A01BAEDFE_246_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E939760)
#define CLASS_1_5B567C8A01BAEDFE_246_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E939730)
#define CLASS_1_5B567C8A01BAEDFE_246_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E45DB30)
#define CLASS_1_5B567C8A01BAEDFE_246_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45DB90)
#define CLASS_1_5B567C8A01BAEDFE_246_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9396A0)
#define CLASS_1_5B567C8A01BAEDFE_246_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E939700)
#define CLASS_1_5B567C8A01BAEDFE_246__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9397B0)
#define CLASS_1_5B567C8A01BAEDFE_246__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45DBB0)
#define CLASS_1_5B567C8A01BAEDFE_246__CTOR_OFFSET UNITYSDK_OFFSET(0x1E45DBA0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_246_TypeDefinitionIndex = 31046;

class Class_1_5B567C8A01BAEDFE_246 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_246*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_246*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_246_TypeDefinitionIndex)->GetStaticField(0x42B80);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_246* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_246*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_246*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_246*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_246* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_246*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_246* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_246*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_246* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_246*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_246_MERGEFROM_1_OFFSET))(this, a1);
	}
};
