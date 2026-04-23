#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_30;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19504C80)
#define CLASS_1_355A2207C3B7A99D_24_CLONE_OFFSET UNITYSDK_OFFSET(0x195048E0)
#define CLASS_1_355A2207C3B7A99D_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19504AC0)
#define CLASS_1_355A2207C3B7A99D_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x195049F0)
#define CLASS_1_355A2207C3B7A99D_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19504B60)
#define CLASS_1_355A2207C3B7A99D_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19504DA0)
#define CLASS_1_355A2207C3B7A99D_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19504CE0)
#define CLASS_1_355A2207C3B7A99D_24_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x195049D0)
#define CLASS_1_355A2207C3B7A99D_24_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x195047C0)
#define CLASS_1_355A2207C3B7A99D_24_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x195049E0)
#define CLASS_1_355A2207C3B7A99D_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19504820)
#define CLASS_1_355A2207C3B7A99D_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19504BC0)
#define CLASS_1_355A2207C3B7A99D_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x19504C20)
#define CLASS_1_355A2207C3B7A99D_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x19504E50)
#define CLASS_1_355A2207C3B7A99D_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19504840)
#define CLASS_1_355A2207C3B7A99D_24__CTOR_OFFSET UNITYSDK_OFFSET(0x19504830)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_24_TypeDefinitionIndex = 26689;

class Class_1_355A2207C3B7A99D_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_24*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_24_TypeDefinitionIndex)->GetStaticField(0x43430);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_D1E0AD3915BCCF29_30* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_24*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_24*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_24*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_24* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_CLONE_OFFSET))(this);
	}

	::Class_1_D1E0AD3915BCCF29_30* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D1E0AD3915BCCF29_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D1E0AD3915BCCF29_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_30*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_24*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_24*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
