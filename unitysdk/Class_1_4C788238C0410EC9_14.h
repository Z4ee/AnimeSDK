#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CD010263573232AE_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4C788238C0410EC9_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F7A600)
#define CLASS_1_4C788238C0410EC9_14_CLONE_OFFSET UNITYSDK_OFFSET(0x17F79D60)
#define CLASS_1_4C788238C0410EC9_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F79EE0)
#define CLASS_1_4C788238C0410EC9_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F79E30)
#define CLASS_1_4C788238C0410EC9_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F79F90)
#define CLASS_1_4C788238C0410EC9_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F7ABB0)
#define CLASS_1_4C788238C0410EC9_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F7A6D0)
#define CLASS_1_4C788238C0410EC9_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F79DF0)
#define CLASS_1_4C788238C0410EC9_14_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F79E10)
#define CLASS_1_4C788238C0410EC9_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F79E00)
#define CLASS_1_4C788238C0410EC9_14_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F79E20)
#define CLASS_1_4C788238C0410EC9_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F79C70)
#define CLASS_1_4C788238C0410EC9_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F7A520)
#define CLASS_1_4C788238C0410EC9_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F7A580)
#define CLASS_1_4C788238C0410EC9_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F79C90)
#define CLASS_1_4C788238C0410EC9_14__CTOR_OFFSET UNITYSDK_OFFSET(0x17F79C80)

inline static constexpr unsigned int Class_1_4C788238C0410EC9_14_TypeDefinitionIndex = 27546;

class Class_1_4C788238C0410EC9_14 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_CD010263573232AE_1* Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4C788238C0410EC9_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C788238C0410EC9_14*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4C788238C0410EC9_14* Clone()
	{
		return ((::Class_1_4C788238C0410EC9_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_CD010263573232AE_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CD010263573232AE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CD010263573232AE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_1*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4C788238C0410EC9_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4C788238C0410EC9_14*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4C788238C0410EC9_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C788238C0410EC9_14*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4C788238C0410EC9_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
