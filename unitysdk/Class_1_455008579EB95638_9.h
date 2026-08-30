#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_18C00C8FB77B0B39_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9BB8A0)
#define CLASS_1_455008579EB95638_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9BB220)
#define CLASS_1_455008579EB95638_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9BB410)
#define CLASS_1_455008579EB95638_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9BB2C0)
#define CLASS_1_455008579EB95638_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9BB5C0)
#define CLASS_1_455008579EB95638_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9BBB80)
#define CLASS_1_455008579EB95638_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9BB9E0)
#define CLASS_1_455008579EB95638_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E9BB270)
#define CLASS_1_455008579EB95638_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E9BB290)
#define CLASS_1_455008579EB95638_9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E9BB070)
#define CLASS_1_455008579EB95638_9_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E9BB2B0)
#define CLASS_1_455008579EB95638_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E9BB280)
#define CLASS_1_455008579EB95638_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E9BB2A0)
#define CLASS_1_455008579EB95638_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB0D0)
#define CLASS_1_455008579EB95638_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9BB6D0)
#define CLASS_1_455008579EB95638_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9BB730)
#define CLASS_1_455008579EB95638_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BBD30)
#define CLASS_1_455008579EB95638_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9BB130)
#define CLASS_1_455008579EB95638_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB0E0)

inline static constexpr unsigned int Class_1_455008579EB95638_9_TypeDefinitionIndex = 31947;

class Class_1_455008579EB95638_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_9_TypeDefinitionIndex)->GetStaticField(0x6C90);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IBOBFDAMEHC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_9_TypeDefinitionIndex)->GetStaticField(0x6C98);
	}
	// static const ::System::Int32 KOEOEHIMOEI = 0xB; // 0x0
	// static const ::System::Int32 MIOPFDLMJOH = 0x2; // 0x0
	// static const ::System::Int32 AJPEEDNHODK = 0x8; // 0x0
	::Class_1_18C00C8FB77B0B39_2* CILOCAKKIGN; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x20
	::System::UInt32 LJDBCGPFFDH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_9*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_9* Clone()
	{
		return ((::Class_1_455008579EB95638_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_18C00C8FB77B0B39_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_18C00C8FB77B0B39_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_18C00C8FB77B0B39_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_18C00C8FB77B0B39_2*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_9*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_9*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
