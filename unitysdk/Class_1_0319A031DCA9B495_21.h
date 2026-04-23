#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0319A031DCA9B495_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19327110)
#define CLASS_1_0319A031DCA9B495_21_CLONE_OFFSET UNITYSDK_OFFSET(0x19326DD0)
#define CLASS_1_0319A031DCA9B495_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19326F40)
#define CLASS_1_0319A031DCA9B495_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x19326E90)
#define CLASS_1_0319A031DCA9B495_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19326FF0)
#define CLASS_1_0319A031DCA9B495_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19327290)
#define CLASS_1_0319A031DCA9B495_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193271E0)
#define CLASS_1_0319A031DCA9B495_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19326E50)
#define CLASS_1_0319A031DCA9B495_21_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19326E70)
#define CLASS_1_0319A031DCA9B495_21_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19326D10)
#define CLASS_1_0319A031DCA9B495_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19326E60)
#define CLASS_1_0319A031DCA9B495_21_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19326E80)
#define CLASS_1_0319A031DCA9B495_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19326D40)
#define CLASS_1_0319A031DCA9B495_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19327030)
#define CLASS_1_0319A031DCA9B495_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x19327090)
#define CLASS_1_0319A031DCA9B495_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x19327370)
#define CLASS_1_0319A031DCA9B495_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19326D60)
#define CLASS_1_0319A031DCA9B495_21__CTOR_OFFSET UNITYSDK_OFFSET(0x19326D50)

inline static constexpr unsigned int Class_1_0319A031DCA9B495_21_TypeDefinitionIndex = 32547;

class Class_1_0319A031DCA9B495_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0319A031DCA9B495_21_TypeDefinitionIndex)->GetStaticField(0x625F0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Class_1_14E02E1F6D70E487_12* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0319A031DCA9B495_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_21*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_21*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0319A031DCA9B495_21* Clone()
	{
		return ((::Class_1_0319A031DCA9B495_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_12*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0319A031DCA9B495_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0319A031DCA9B495_21*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0319A031DCA9B495_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_21*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
