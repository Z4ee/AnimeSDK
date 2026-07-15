#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB0633E85BD6CF8E_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0319A031DCA9B495_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC87A60)
#define CLASS_1_0319A031DCA9B495_24_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC87520)
#define CLASS_1_0319A031DCA9B495_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC87760)
#define CLASS_1_0319A031DCA9B495_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC875E0)
#define CLASS_1_0319A031DCA9B495_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC878E0)
#define CLASS_1_0319A031DCA9B495_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC87BE0)
#define CLASS_1_0319A031DCA9B495_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC87B30)
#define CLASS_1_0319A031DCA9B495_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC875A0)
#define CLASS_1_0319A031DCA9B495_24_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CC875C0)
#define CLASS_1_0319A031DCA9B495_24_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC87460)
#define CLASS_1_0319A031DCA9B495_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC875B0)
#define CLASS_1_0319A031DCA9B495_24_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CC875D0)
#define CLASS_1_0319A031DCA9B495_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC87490)
#define CLASS_1_0319A031DCA9B495_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC87920)
#define CLASS_1_0319A031DCA9B495_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC87980)
#define CLASS_1_0319A031DCA9B495_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC87DB0)
#define CLASS_1_0319A031DCA9B495_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC874B0)
#define CLASS_1_0319A031DCA9B495_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC874A0)

inline static constexpr unsigned int Class_1_0319A031DCA9B495_24_TypeDefinitionIndex = 33010;

class Class_1_0319A031DCA9B495_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_24*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_24*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0319A031DCA9B495_24_TypeDefinitionIndex)->GetStaticField(0x5DFD0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_FB0633E85BD6CF8E_12* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0319A031DCA9B495_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_24*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_24*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_24*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0319A031DCA9B495_24* Clone()
	{
		return ((::Class_1_0319A031DCA9B495_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_FB0633E85BD6CF8E_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FB0633E85BD6CF8E_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FB0633E85BD6CF8E_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_12*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0319A031DCA9B495_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0319A031DCA9B495_24*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0319A031DCA9B495_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_24*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
