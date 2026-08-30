#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5630A0)
#define CLASS_1_5B567C8A01BAEDFE_27_CLONE_OFFSET UNITYSDK_OFFSET(0x1E562D90)
#define CLASS_1_5B567C8A01BAEDFE_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E562EA0)
#define CLASS_1_5B567C8A01BAEDFE_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E562DD0)
#define CLASS_1_5B567C8A01BAEDFE_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E563000)
#define CLASS_1_5B567C8A01BAEDFE_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5630F0)
#define CLASS_1_5B567C8A01BAEDFE_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5630C0)
#define CLASS_1_5B567C8A01BAEDFE_27_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E562D10)
#define CLASS_1_5B567C8A01BAEDFE_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E562D40)
#define CLASS_1_5B567C8A01BAEDFE_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E563030)
#define CLASS_1_5B567C8A01BAEDFE_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E563090)
#define CLASS_1_5B567C8A01BAEDFE_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E563140)
#define CLASS_1_5B567C8A01BAEDFE_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E562D60)
#define CLASS_1_5B567C8A01BAEDFE_27__CTOR_OFFSET UNITYSDK_OFFSET(0x1E562D50)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_27_TypeDefinitionIndex = 26108;

class Class_1_5B567C8A01BAEDFE_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_27*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_27_TypeDefinitionIndex)->GetStaticField(0x26440);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_27*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_27*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_27*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_27* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_27*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_27*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
