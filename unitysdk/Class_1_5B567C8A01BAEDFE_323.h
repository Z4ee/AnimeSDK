#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_323_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DC15E90)
#define CLASS_1_5B567C8A01BAEDFE_323_CLONE_OFFSET UNITYSDK_OFFSET(0x1DC15B80)
#define CLASS_1_5B567C8A01BAEDFE_323_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DC15C90)
#define CLASS_1_5B567C8A01BAEDFE_323_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC15BC0)
#define CLASS_1_5B567C8A01BAEDFE_323_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC15DF0)
#define CLASS_1_5B567C8A01BAEDFE_323_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DC15EE0)
#define CLASS_1_5B567C8A01BAEDFE_323_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DC15EB0)
#define CLASS_1_5B567C8A01BAEDFE_323_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DC15B00)
#define CLASS_1_5B567C8A01BAEDFE_323_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DC15B30)
#define CLASS_1_5B567C8A01BAEDFE_323_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC15E20)
#define CLASS_1_5B567C8A01BAEDFE_323_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DC15E80)
#define CLASS_1_5B567C8A01BAEDFE_323__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC15F30)
#define CLASS_1_5B567C8A01BAEDFE_323__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC15B50)
#define CLASS_1_5B567C8A01BAEDFE_323__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC15B40)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_323_TypeDefinitionIndex = 33142;

class Class_1_5B567C8A01BAEDFE_323 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_323*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_323*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_323_TypeDefinitionIndex)->GetStaticField(0x41260);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_323* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_323*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_323*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_323*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_323* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_323*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_323* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_323*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_323* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_323*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_323_MERGEFROM_1_OFFSET))(this, a1);
	}
};
