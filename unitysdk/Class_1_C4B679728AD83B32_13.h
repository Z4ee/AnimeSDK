#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0A446EC7AE7E87D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C4B679728AD83B32_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19AE3010)
#define CLASS_1_C4B679728AD83B32_13_CLONE_OFFSET UNITYSDK_OFFSET(0x19AE2C60)
#define CLASS_1_C4B679728AD83B32_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19AE2E20)
#define CLASS_1_C4B679728AD83B32_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x19AE2D60)
#define CLASS_1_C4B679728AD83B32_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19AE2ED0)
#define CLASS_1_C4B679728AD83B32_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19AE3200)
#define CLASS_1_C4B679728AD83B32_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19AE3160)
#define CLASS_1_C4B679728AD83B32_13_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19AE2D40)
#define CLASS_1_C4B679728AD83B32_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19AE2D00)
#define CLASS_1_C4B679728AD83B32_13_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19AE2D20)
#define CLASS_1_C4B679728AD83B32_13_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19AE2B80)
#define CLASS_1_C4B679728AD83B32_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19AE2D50)
#define CLASS_1_C4B679728AD83B32_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19AE2D10)
#define CLASS_1_C4B679728AD83B32_13_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19AE2D30)
#define CLASS_1_C4B679728AD83B32_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19AE2BB0)
#define CLASS_1_C4B679728AD83B32_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AE2F10)
#define CLASS_1_C4B679728AD83B32_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x19AE2F70)
#define CLASS_1_C4B679728AD83B32_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AE32D0)
#define CLASS_1_C4B679728AD83B32_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AE2BD0)
#define CLASS_1_C4B679728AD83B32_13__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE2BC0)

inline static constexpr unsigned int Class_1_C4B679728AD83B32_13_TypeDefinitionIndex = 29249;

class Class_1_C4B679728AD83B32_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C4B679728AD83B32_13*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C4B679728AD83B32_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4B679728AD83B32_13_TypeDefinitionIndex)->GetStaticField(0x5D940);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	::Class_1_F0A446EC7AE7E87D_2* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C4B679728AD83B32_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4B679728AD83B32_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C4B679728AD83B32_13*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C4B679728AD83B32_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C4B679728AD83B32_13* Clone()
	{
		return ((::Class_1_C4B679728AD83B32_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_F0A446EC7AE7E87D_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F0A446EC7AE7E87D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F0A446EC7AE7E87D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_2*))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C4B679728AD83B32_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4B679728AD83B32_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C4B679728AD83B32_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4B679728AD83B32_13*))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C4B679728AD83B32_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
