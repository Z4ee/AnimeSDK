#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF03248024BAA97A_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_91_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196AB390)
#define CLASS_1_355A2207C3B7A99D_91_CLONE_OFFSET UNITYSDK_OFFSET(0x196AB040)
#define CLASS_1_355A2207C3B7A99D_91_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196AB190)
#define CLASS_1_355A2207C3B7A99D_91_EQUALS_OFFSET UNITYSDK_OFFSET(0x196AB0E0)
#define CLASS_1_355A2207C3B7A99D_91_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196AB230)
#define CLASS_1_355A2207C3B7A99D_91_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196AB460)
#define CLASS_1_355A2207C3B7A99D_91_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196AB3F0)
#define CLASS_1_355A2207C3B7A99D_91_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x196AB0C0)
#define CLASS_1_355A2207C3B7A99D_91_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x196AAF80)
#define CLASS_1_355A2207C3B7A99D_91_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x196AB0D0)
#define CLASS_1_355A2207C3B7A99D_91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196AAFB0)
#define CLASS_1_355A2207C3B7A99D_91_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196AB2D0)
#define CLASS_1_355A2207C3B7A99D_91_WRITETO_OFFSET UNITYSDK_OFFSET(0x196AB330)
#define CLASS_1_355A2207C3B7A99D_91__CCTOR_OFFSET UNITYSDK_OFFSET(0x196AB4F0)
#define CLASS_1_355A2207C3B7A99D_91__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196AAFD0)
#define CLASS_1_355A2207C3B7A99D_91__CTOR_OFFSET UNITYSDK_OFFSET(0x196AAFC0)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_91_TypeDefinitionIndex = 31252;

class Class_1_355A2207C3B7A99D_91 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_91*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_91_TypeDefinitionIndex)->GetStaticField(0x46CA0);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Class_1_FF03248024BAA97A_2* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_91*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_91*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_91*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_91* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_CLONE_OFFSET))(this);
	}

	::Class_1_FF03248024BAA97A_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FF03248024BAA97A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FF03248024BAA97A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_2*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_91* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_91*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_91*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_91_MERGEFROM_1_OFFSET))(this, a1);
	}
};
