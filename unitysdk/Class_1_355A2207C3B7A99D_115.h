#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F753D12928E830D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_115_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A8F8C00)
#define CLASS_1_355A2207C3B7A99D_115_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8F88B0)
#define CLASS_1_355A2207C3B7A99D_115_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A8F8A50)
#define CLASS_1_355A2207C3B7A99D_115_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A8F8980)
#define CLASS_1_355A2207C3B7A99D_115_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8F8AF0)
#define CLASS_1_355A2207C3B7A99D_115_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A8F8D30)
#define CLASS_1_355A2207C3B7A99D_115_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8F8C60)
#define CLASS_1_355A2207C3B7A99D_115_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A8F8960)
#define CLASS_1_355A2207C3B7A99D_115_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A8F87C0)
#define CLASS_1_355A2207C3B7A99D_115_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A8F8970)
#define CLASS_1_355A2207C3B7A99D_115_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8F8820)
#define CLASS_1_355A2207C3B7A99D_115_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8F8B40)
#define CLASS_1_355A2207C3B7A99D_115_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A8F8BA0)
#define CLASS_1_355A2207C3B7A99D_115__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8F8F20)
#define CLASS_1_355A2207C3B7A99D_115__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8F8840)
#define CLASS_1_355A2207C3B7A99D_115__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F8830)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_115_TypeDefinitionIndex = 32857;

class Class_1_355A2207C3B7A99D_115 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_115*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_115*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_115_TypeDefinitionIndex)->GetStaticField(0x60A30);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_7F753D12928E830D* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_115* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_115*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_115*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_115*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_115* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_115*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_CLONE_OFFSET))(this);
	}

	::Class_1_7F753D12928E830D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7F753D12928E830D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7F753D12928E830D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F753D12928E830D*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_115* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_115*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_115* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_115*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_115_MERGEFROM_1_OFFSET))(this, a1);
	}
};
