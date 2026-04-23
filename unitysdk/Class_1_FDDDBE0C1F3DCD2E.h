#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FDDDBE0C1F3DCD2E_Enum_3_2E741879C8CDBAFC_15.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FDDDBE0C1F3DCD2E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BFBC00)
#define CLASS_1_FDDDBE0C1F3DCD2E_CLONE_OFFSET UNITYSDK_OFFSET(0x19BFB7A0)
#define CLASS_1_FDDDBE0C1F3DCD2E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BFB870)
#define CLASS_1_FDDDBE0C1F3DCD2E_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BFB810)
#define CLASS_1_FDDDBE0C1F3DCD2E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BFBA20)
#define CLASS_1_FDDDBE0C1F3DCD2E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BFBE20)
#define CLASS_1_FDDDBE0C1F3DCD2E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BFBD60)
#define CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19BFB7F0)
#define CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19BFB5A0)
#define CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19BFB800)
#define CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_AA935885E31AA701_OFFSET UNITYSDK_OFFSET(0x19BFB770)
#define CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_EA1C8FD1B81E659E_OFFSET UNITYSDK_OFFSET(0x19BFB6F0)
#define CLASS_1_FDDDBE0C1F3DCD2E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BFB600)
#define CLASS_1_FDDDBE0C1F3DCD2E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BFBAD0)
#define CLASS_1_FDDDBE0C1F3DCD2E_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BFBB30)
#define CLASS_1_FDDDBE0C1F3DCD2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BFBEC0)
#define CLASS_1_FDDDBE0C1F3DCD2E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BFB620)
#define CLASS_1_FDDDBE0C1F3DCD2E__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFB610)

inline static constexpr unsigned int Class_1_FDDDBE0C1F3DCD2E_TypeDefinitionIndex = 29744;

class Class_1_FDDDBE0C1F3DCD2E : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FDDDBE0C1F3DCD2E*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FDDDBE0C1F3DCD2E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDDDBE0C1F3DCD2E_TypeDefinitionIndex)->GetStaticField(0x180D0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_3; // 0x18
	::Class_1_FDDDBE0C1F3DCD2E_Enum_3_2E741879C8CDBAFC_15 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FDDDBE0C1F3DCD2E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDDDBE0C1F3DCD2E*))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FDDDBE0C1F3DCD2E*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FDDDBE0C1F3DCD2E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FDDDBE0C1F3DCD2E* Clone()
	{
		return ((::Class_1_FDDDBE0C1F3DCD2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_EA1C8FD1B81E659E()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_EA1C8FD1B81E659E_OFFSET))(this);
	}

	::System::Void Method_1_AA935885E31AA701(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_AA935885E31AA701_OFFSET))(this, a1);
	}

	::Class_1_FDDDBE0C1F3DCD2E_Enum_3_2E741879C8CDBAFC_15 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_FDDDBE0C1F3DCD2E_Enum_3_2E741879C8CDBAFC_15(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FDDDBE0C1F3DCD2E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FDDDBE0C1F3DCD2E*))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FDDDBE0C1F3DCD2E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDDDBE0C1F3DCD2E*))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FDDDBE0C1F3DCD2E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
