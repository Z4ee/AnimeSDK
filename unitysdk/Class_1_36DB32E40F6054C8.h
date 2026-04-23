#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_41.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_36DB32E40F6054C8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A3E9E0)
#define CLASS_1_36DB32E40F6054C8_CLONE_OFFSET UNITYSDK_OFFSET(0x19A3E4D0)
#define CLASS_1_36DB32E40F6054C8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A3E5C0)
#define CLASS_1_36DB32E40F6054C8_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A3E560)
#define CLASS_1_36DB32E40F6054C8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A3E6B0)
#define CLASS_1_36DB32E40F6054C8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A3EC50)
#define CLASS_1_36DB32E40F6054C8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A3EB90)
#define CLASS_1_36DB32E40F6054C8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A3E2A0)
#define CLASS_1_36DB32E40F6054C8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19A3E540)
#define CLASS_1_36DB32E40F6054C8_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x19A3E550)
#define CLASS_1_36DB32E40F6054C8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19A3E520)
#define CLASS_1_36DB32E40F6054C8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19A3E530)
#define CLASS_1_36DB32E40F6054C8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A3E300)
#define CLASS_1_36DB32E40F6054C8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A3E870)
#define CLASS_1_36DB32E40F6054C8_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A3E8D0)
#define CLASS_1_36DB32E40F6054C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A3EDA0)
#define CLASS_1_36DB32E40F6054C8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A3E3A0)
#define CLASS_1_36DB32E40F6054C8__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3E310)

inline static constexpr unsigned int Class_1_36DB32E40F6054C8_TypeDefinitionIndex = 28999;

class Class_1_36DB32E40F6054C8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36DB32E40F6054C8_TypeDefinitionIndex)->GetStaticField(0x4BB20);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_36DB32E40F6054C8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_36DB32E40F6054C8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36DB32E40F6054C8_TypeDefinitionIndex)->GetStaticField(0x4BB28);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36DB32E40F6054C8_TypeDefinitionIndex)->GetStaticField(0x4BB30);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::Enum_3_DB663931210BBC27_41 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_36DB32E40F6054C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36DB32E40F6054C8*))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_36DB32E40F6054C8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_36DB32E40F6054C8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_36DB32E40F6054C8* Clone()
	{
		return ((::Class_1_36DB32E40F6054C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_41 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_41(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_41 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_41))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_36DB32E40F6054C8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36DB32E40F6054C8*))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_36DB32E40F6054C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36DB32E40F6054C8*))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36DB32E40F6054C8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
