#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_426;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FDFA365FE186E8F2_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE9F9D0)
#define CLASS_1_FDFA365FE186E8F2_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE9F350)
#define CLASS_1_FDFA365FE186E8F2_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE9F5B0)
#define CLASS_1_FDFA365FE186E8F2_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE9F3D0)
#define CLASS_1_FDFA365FE186E8F2_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE9F750)
#define CLASS_1_FDFA365FE186E8F2_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE9FB80)
#define CLASS_1_FDFA365FE186E8F2_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE9FAB0)
#define CLASS_1_FDFA365FE186E8F2_15_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DE9F3A0)
#define CLASS_1_FDFA365FE186E8F2_15_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE9F190)
#define CLASS_1_FDFA365FE186E8F2_15_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DE9F3C0)
#define CLASS_1_FDFA365FE186E8F2_15_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DE9F3B0)
#define CLASS_1_FDFA365FE186E8F2_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE9F1F0)
#define CLASS_1_FDFA365FE186E8F2_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE9F870)
#define CLASS_1_FDFA365FE186E8F2_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE9F8D0)
#define CLASS_1_FDFA365FE186E8F2_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE9FD70)
#define CLASS_1_FDFA365FE186E8F2_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE9F250)
#define CLASS_1_FDFA365FE186E8F2_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE9F200)

inline static constexpr unsigned int Class_1_FDFA365FE186E8F2_15_TypeDefinitionIndex = 28604;

class Class_1_FDFA365FE186E8F2_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_15*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDFA365FE186E8F2_15_TypeDefinitionIndex)->GetStaticField(0x37CE0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GIDFDIIEBPP()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDFA365FE186E8F2_15_TypeDefinitionIndex)->GetStaticField(0x37CE8);
	}
	// static const ::System::Int32 PJOHMKOPAPB = 0x7; // 0x0
	// static const ::System::Int32 JAAGHIBFCPE = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_D17272E82AE804C2_426* CEKBBJKMBNH; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DGGAPDHMFCO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FDFA365FE186E8F2_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_15*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_15*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FDFA365FE186E8F2_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FDFA365FE186E8F2_15* Clone()
	{
		return ((::Class_1_FDFA365FE186E8F2_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_426* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_426*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_426* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_426*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FDFA365FE186E8F2_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_15*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FDFA365FE186E8F2_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_15*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDFA365FE186E8F2_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
