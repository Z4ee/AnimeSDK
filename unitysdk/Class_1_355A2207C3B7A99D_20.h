#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_21;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195A9870)
#define CLASS_1_355A2207C3B7A99D_20_CLONE_OFFSET UNITYSDK_OFFSET(0x195A9500)
#define CLASS_1_355A2207C3B7A99D_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x195A96C0)
#define CLASS_1_355A2207C3B7A99D_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x195A95F0)
#define CLASS_1_355A2207C3B7A99D_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195A9760)
#define CLASS_1_355A2207C3B7A99D_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x195A99F0)
#define CLASS_1_355A2207C3B7A99D_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x195A98D0)
#define CLASS_1_355A2207C3B7A99D_20_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x195A95D0)
#define CLASS_1_355A2207C3B7A99D_20_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x195A93F0)
#define CLASS_1_355A2207C3B7A99D_20_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x195A95E0)
#define CLASS_1_355A2207C3B7A99D_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195A9450)
#define CLASS_1_355A2207C3B7A99D_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195A97B0)
#define CLASS_1_355A2207C3B7A99D_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x195A9810)
#define CLASS_1_355A2207C3B7A99D_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x195A9B20)
#define CLASS_1_355A2207C3B7A99D_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195A9470)
#define CLASS_1_355A2207C3B7A99D_20__CTOR_OFFSET UNITYSDK_OFFSET(0x195A9460)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_20_TypeDefinitionIndex = 26107;

class Class_1_355A2207C3B7A99D_20 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_20*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_20_TypeDefinitionIndex)->GetStaticField(0x50BC0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_455008579EB95638_21* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_20*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_20*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_20*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_20* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_CLONE_OFFSET))(this);
	}

	::Class_1_455008579EB95638_21* Method_1_24748FC20F375725()
	{
		return ((::Class_1_455008579EB95638_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_455008579EB95638_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_21*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_20*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_20*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
