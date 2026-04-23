#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_455AFDBF94B9FB14_Enum_3_2E741879C8CDBAFC_16.h"
#include "unitysdk/System/Object.h"

class Class_1_6FC4D75D938BC053_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455AFDBF94B9FB14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x199524B0)
#define CLASS_1_455AFDBF94B9FB14_CLONE_OFFSET UNITYSDK_OFFSET(0x19952080)
#define CLASS_1_455AFDBF94B9FB14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19952190)
#define CLASS_1_455AFDBF94B9FB14_EQUALS_OFFSET UNITYSDK_OFFSET(0x19952130)
#define CLASS_1_455AFDBF94B9FB14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199522E0)
#define CLASS_1_455AFDBF94B9FB14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19952850)
#define CLASS_1_455AFDBF94B9FB14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19952660)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x199520F0)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x199520D0)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19952110)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19951EB0)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x19952000)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19952100)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x199520E0)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19952120)
#define CLASS_1_455AFDBF94B9FB14_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19952060)
#define CLASS_1_455AFDBF94B9FB14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19951F10)
#define CLASS_1_455AFDBF94B9FB14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19952370)
#define CLASS_1_455AFDBF94B9FB14_WRITETO_OFFSET UNITYSDK_OFFSET(0x199523D0)
#define CLASS_1_455AFDBF94B9FB14__CCTOR_OFFSET UNITYSDK_OFFSET(0x19952A00)
#define CLASS_1_455AFDBF94B9FB14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19951F30)
#define CLASS_1_455AFDBF94B9FB14__CTOR_OFFSET UNITYSDK_OFFSET(0x19951F20)

inline static constexpr unsigned int Class_1_455AFDBF94B9FB14_TypeDefinitionIndex = 29901;

class Class_1_455AFDBF94B9FB14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455AFDBF94B9FB14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455AFDBF94B9FB14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455AFDBF94B9FB14_TypeDefinitionIndex)->GetStaticField(0x5FB50);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_7; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::Class_1_455AFDBF94B9FB14_Enum_3_2E741879C8CDBAFC_16 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455AFDBF94B9FB14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455AFDBF94B9FB14*))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455AFDBF94B9FB14*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455AFDBF94B9FB14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455AFDBF94B9FB14* Clone()
	{
		return ((::Class_1_455AFDBF94B9FB14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_6FC4D75D938BC053_11* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_6FC4D75D938BC053_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6FC4D75D938BC053_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_11*))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_455AFDBF94B9FB14_Enum_3_2E741879C8CDBAFC_16 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_455AFDBF94B9FB14_Enum_3_2E741879C8CDBAFC_16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455AFDBF94B9FB14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455AFDBF94B9FB14*))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455AFDBF94B9FB14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455AFDBF94B9FB14*))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455AFDBF94B9FB14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
