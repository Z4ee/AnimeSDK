#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/Object.h"

class Class_1_A810E08D2BDEB9C4;
class Class_1_D17272E82AE804C2_369;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_146D316B78139D25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA19AD0)
#define CLASS_1_146D316B78139D25_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA193F0)
#define CLASS_1_146D316B78139D25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA19600)
#define CLASS_1_146D316B78139D25_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA194C0)
#define CLASS_1_146D316B78139D25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA19840)
#define CLASS_1_146D316B78139D25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA19DD0)
#define CLASS_1_146D316B78139D25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA19C90)
#define CLASS_1_146D316B78139D25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CA19480)
#define CLASS_1_146D316B78139D25_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CA194A0)
#define CLASS_1_146D316B78139D25_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CA19440)
#define CLASS_1_146D316B78139D25_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CA192A0)
#define CLASS_1_146D316B78139D25_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CA19470)
#define CLASS_1_146D316B78139D25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CA19490)
#define CLASS_1_146D316B78139D25_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CA194B0)
#define CLASS_1_146D316B78139D25_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CA19450)
#define CLASS_1_146D316B78139D25_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CA19460)
#define CLASS_1_146D316B78139D25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA19300)
#define CLASS_1_146D316B78139D25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA198B0)
#define CLASS_1_146D316B78139D25_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA19910)
#define CLASS_1_146D316B78139D25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA19EA0)
#define CLASS_1_146D316B78139D25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA19320)
#define CLASS_1_146D316B78139D25__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA19310)

inline static constexpr unsigned int Class_1_146D316B78139D25_TypeDefinitionIndex = 27608;

class Class_1_146D316B78139D25 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_146D316B78139D25*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_146D316B78139D25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_146D316B78139D25_TypeDefinitionIndex)->GetStaticField(0x32850);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Class_1_A810E08D2BDEB9C4* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Class_1_D17272E82AE804C2_369* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::Enum_3_0A3761FE34514D6C_37 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_146D316B78139D25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_146D316B78139D25*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_146D316B78139D25*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_146D316B78139D25*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_146D316B78139D25* Clone()
	{
		return ((::Class_1_146D316B78139D25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_CLONE_OFFSET))(this);
	}

	::Class_1_A810E08D2BDEB9C4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A810E08D2BDEB9C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A810E08D2BDEB9C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A810E08D2BDEB9C4*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_37 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_37(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_369* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_369*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_369* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_369*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_146D316B78139D25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_146D316B78139D25*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_146D316B78139D25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_146D316B78139D25*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_146D316B78139D25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
