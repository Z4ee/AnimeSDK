#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FE65FB558D9B9E65_Enum_3_2E741879C8CDBAFC_9.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_17;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FE65FB558D9B9E65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B268F0)
#define CLASS_1_FE65FB558D9B9E65_CLONE_OFFSET UNITYSDK_OFFSET(0x19B26560)
#define CLASS_1_FE65FB558D9B9E65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B265E0)
#define CLASS_1_FE65FB558D9B9E65_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B265B0)
#define CLASS_1_FE65FB558D9B9E65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B26750)
#define CLASS_1_FE65FB558D9B9E65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B26B50)
#define CLASS_1_FE65FB558D9B9E65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B269A0)
#define CLASS_1_FE65FB558D9B9E65_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19B26590)
#define CLASS_1_FE65FB558D9B9E65_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x19B264E0)
#define CLASS_1_FE65FB558D9B9E65_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B263C0)
#define CLASS_1_FE65FB558D9B9E65_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19B265A0)
#define CLASS_1_FE65FB558D9B9E65_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19B26540)
#define CLASS_1_FE65FB558D9B9E65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B263F0)
#define CLASS_1_FE65FB558D9B9E65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B267E0)
#define CLASS_1_FE65FB558D9B9E65_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B26840)
#define CLASS_1_FE65FB558D9B9E65__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B26CA0)
#define CLASS_1_FE65FB558D9B9E65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B26410)
#define CLASS_1_FE65FB558D9B9E65__CTOR_OFFSET UNITYSDK_OFFSET(0x19B26400)

inline static constexpr unsigned int Class_1_FE65FB558D9B9E65_TypeDefinitionIndex = 26197;

class Class_1_FE65FB558D9B9E65 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE65FB558D9B9E65_TypeDefinitionIndex)->GetStaticField(0x612C0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1FD; // 0x0
	::System::Object* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_FE65FB558D9B9E65_Enum_3_2E741879C8CDBAFC_9 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FE65FB558D9B9E65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE65FB558D9B9E65*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FE65FB558D9B9E65*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FE65FB558D9B9E65* Clone()
	{
		return ((::Class_1_FE65FB558D9B9E65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_CLONE_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_17* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_7FF19F6206AF6DD7_17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7FF19F6206AF6DD7_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_17*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_FE65FB558D9B9E65_Enum_3_2E741879C8CDBAFC_9 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_FE65FB558D9B9E65_Enum_3_2E741879C8CDBAFC_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FE65FB558D9B9E65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FE65FB558D9B9E65*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FE65FB558D9B9E65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE65FB558D9B9E65*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FE65FB558D9B9E65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
