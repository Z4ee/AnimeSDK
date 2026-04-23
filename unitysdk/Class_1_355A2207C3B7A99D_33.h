#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_27;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_33_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x194070A0)
#define CLASS_1_355A2207C3B7A99D_33_CLONE_OFFSET UNITYSDK_OFFSET(0x19406D30)
#define CLASS_1_355A2207C3B7A99D_33_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19406EF0)
#define CLASS_1_355A2207C3B7A99D_33_EQUALS_OFFSET UNITYSDK_OFFSET(0x19406E20)
#define CLASS_1_355A2207C3B7A99D_33_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19406F90)
#define CLASS_1_355A2207C3B7A99D_33_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19407220)
#define CLASS_1_355A2207C3B7A99D_33_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19407100)
#define CLASS_1_355A2207C3B7A99D_33_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19406E00)
#define CLASS_1_355A2207C3B7A99D_33_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19406C20)
#define CLASS_1_355A2207C3B7A99D_33_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19406E10)
#define CLASS_1_355A2207C3B7A99D_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19406C80)
#define CLASS_1_355A2207C3B7A99D_33_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19406FE0)
#define CLASS_1_355A2207C3B7A99D_33_WRITETO_OFFSET UNITYSDK_OFFSET(0x19407040)
#define CLASS_1_355A2207C3B7A99D_33__CCTOR_OFFSET UNITYSDK_OFFSET(0x19407310)
#define CLASS_1_355A2207C3B7A99D_33__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19406CA0)
#define CLASS_1_355A2207C3B7A99D_33__CTOR_OFFSET UNITYSDK_OFFSET(0x19406C90)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_33_TypeDefinitionIndex = 27158;

class Class_1_355A2207C3B7A99D_33 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_33*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_33_TypeDefinitionIndex)->GetStaticField(0x42C30);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Class_1_4BC858D7C27E10ED_27* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_33*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_33*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_33*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_33* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_CLONE_OFFSET))(this);
	}

	::Class_1_4BC858D7C27E10ED_27* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4BC858D7C27E10ED_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4BC858D7C27E10ED_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_27*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_33*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_33*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_33_MERGEFROM_1_OFFSET))(this, a1);
	}
};
