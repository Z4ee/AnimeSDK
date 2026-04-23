#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD828BA811E7C7A_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_112_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19646A40)
#define CLASS_1_355A2207C3B7A99D_112_CLONE_OFFSET UNITYSDK_OFFSET(0x196466F0)
#define CLASS_1_355A2207C3B7A99D_112_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19646890)
#define CLASS_1_355A2207C3B7A99D_112_EQUALS_OFFSET UNITYSDK_OFFSET(0x196467E0)
#define CLASS_1_355A2207C3B7A99D_112_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19646930)
#define CLASS_1_355A2207C3B7A99D_112_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19646BD0)
#define CLASS_1_355A2207C3B7A99D_112_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19646AA0)
#define CLASS_1_355A2207C3B7A99D_112_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x196467C0)
#define CLASS_1_355A2207C3B7A99D_112_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x196465E0)
#define CLASS_1_355A2207C3B7A99D_112_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x196467D0)
#define CLASS_1_355A2207C3B7A99D_112_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19646610)
#define CLASS_1_355A2207C3B7A99D_112_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19646980)
#define CLASS_1_355A2207C3B7A99D_112_WRITETO_OFFSET UNITYSDK_OFFSET(0x196469E0)
#define CLASS_1_355A2207C3B7A99D_112__CCTOR_OFFSET UNITYSDK_OFFSET(0x19646CD0)
#define CLASS_1_355A2207C3B7A99D_112__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19646630)
#define CLASS_1_355A2207C3B7A99D_112__CTOR_OFFSET UNITYSDK_OFFSET(0x19646620)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_112_TypeDefinitionIndex = 32274;

class Class_1_355A2207C3B7A99D_112 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_112*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_112*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_112_TypeDefinitionIndex)->GetStaticField(0x6D00);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Class_1_9AD828BA811E7C7A_4* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_112* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_112*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_112*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_112*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_112* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_112*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_CLONE_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_9AD828BA811E7C7A_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_9AD828BA811E7C7A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_4*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_112* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_112*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_112* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_112*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_112_MERGEFROM_1_OFFSET))(this, a1);
	}
};
