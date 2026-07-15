#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F11CBE4D3C7DF06D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5E76B1A40C70415B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D050210)
#define CLASS_1_5E76B1A40C70415B_CLONE_OFFSET UNITYSDK_OFFSET(0x1D04FAF0)
#define CLASS_1_5E76B1A40C70415B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D04FDC0)
#define CLASS_1_5E76B1A40C70415B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D04FC20)
#define CLASS_1_5E76B1A40C70415B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D050090)
#define CLASS_1_5E76B1A40C70415B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D0502E0)
#define CLASS_1_5E76B1A40C70415B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D050270)
#define CLASS_1_5E76B1A40C70415B_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1D04FC00)
#define CLASS_1_5E76B1A40C70415B_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D04F9A0)
#define CLASS_1_5E76B1A40C70415B_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1D04FC10)
#define CLASS_1_5E76B1A40C70415B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D04FA00)
#define CLASS_1_5E76B1A40C70415B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D050120)
#define CLASS_1_5E76B1A40C70415B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D050180)
#define CLASS_1_5E76B1A40C70415B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D050460)
#define CLASS_1_5E76B1A40C70415B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D04FA20)
#define CLASS_1_5E76B1A40C70415B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04FA10)

inline static constexpr unsigned int Class_1_5E76B1A40C70415B_TypeDefinitionIndex = 31698;

class Class_1_5E76B1A40C70415B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5E76B1A40C70415B*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5E76B1A40C70415B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E76B1A40C70415B_TypeDefinitionIndex)->GetStaticField(0x22240);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_F11CBE4D3C7DF06D_2* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5E76B1A40C70415B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E76B1A40C70415B*))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5E76B1A40C70415B*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5E76B1A40C70415B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5E76B1A40C70415B* Clone()
	{
		return ((::Class_1_5E76B1A40C70415B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_CLONE_OFFSET))(this);
	}

	::Class_1_F11CBE4D3C7DF06D_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F11CBE4D3C7DF06D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F11CBE4D3C7DF06D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_2*))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5E76B1A40C70415B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5E76B1A40C70415B*))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5E76B1A40C70415B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E76B1A40C70415B*))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5E76B1A40C70415B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
