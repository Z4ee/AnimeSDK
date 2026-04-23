#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60E3B7F7BA004DCE_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197C3B50)
#define CLASS_1_9BA36423EA524C40_9_CLONE_OFFSET UNITYSDK_OFFSET(0x197C37E0)
#define CLASS_1_9BA36423EA524C40_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197C39A0)
#define CLASS_1_9BA36423EA524C40_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x197C38D0)
#define CLASS_1_9BA36423EA524C40_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197C3A40)
#define CLASS_1_9BA36423EA524C40_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197C3CA0)
#define CLASS_1_9BA36423EA524C40_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197C3BB0)
#define CLASS_1_9BA36423EA524C40_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x197C38B0)
#define CLASS_1_9BA36423EA524C40_9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x197C36D0)
#define CLASS_1_9BA36423EA524C40_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x197C38C0)
#define CLASS_1_9BA36423EA524C40_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197C3730)
#define CLASS_1_9BA36423EA524C40_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197C3A90)
#define CLASS_1_9BA36423EA524C40_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x197C3AF0)
#define CLASS_1_9BA36423EA524C40_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x197C3DB0)
#define CLASS_1_9BA36423EA524C40_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197C3750)
#define CLASS_1_9BA36423EA524C40_9__CTOR_OFFSET UNITYSDK_OFFSET(0x197C3740)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_9_TypeDefinitionIndex = 29787;

class Class_1_9BA36423EA524C40_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_9_TypeDefinitionIndex)->GetStaticField(0x60CE0);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_60E3B7F7BA004DCE_4* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_9*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_9* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_CLONE_OFFSET))(this);
	}

	::Class_1_60E3B7F7BA004DCE_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_60E3B7F7BA004DCE_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_60E3B7F7BA004DCE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_4*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_9*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_9*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
