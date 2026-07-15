#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8428FFDC1DFCE162_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C7287E0)
#define CLASS_1_8428FFDC1DFCE162_CLONE_OFFSET UNITYSDK_OFFSET(0x1C728180)
#define CLASS_1_8428FFDC1DFCE162_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C7282C0)
#define CLASS_1_8428FFDC1DFCE162_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C728260)
#define CLASS_1_8428FFDC1DFCE162_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7284C0)
#define CLASS_1_8428FFDC1DFCE162_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C728910)
#define CLASS_1_8428FFDC1DFCE162_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C7288B0)
#define CLASS_1_8428FFDC1DFCE162_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C7280C0)
#define CLASS_1_8428FFDC1DFCE162_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1C728220)
#define CLASS_1_8428FFDC1DFCE162_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1C728210)
#define CLASS_1_8428FFDC1DFCE162_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1C728200)
#define CLASS_1_8428FFDC1DFCE162_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C728250)
#define CLASS_1_8428FFDC1DFCE162_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1C728230)
#define CLASS_1_8428FFDC1DFCE162_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C728240)
#define CLASS_1_8428FFDC1DFCE162_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C728120)
#define CLASS_1_8428FFDC1DFCE162_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7285E0)
#define CLASS_1_8428FFDC1DFCE162_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C728640)
#define CLASS_1_8428FFDC1DFCE162__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C728AB0)
#define CLASS_1_8428FFDC1DFCE162__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C728140)
#define CLASS_1_8428FFDC1DFCE162__CTOR_OFFSET UNITYSDK_OFFSET(0x1C728130)

inline static constexpr unsigned int Class_1_8428FFDC1DFCE162_TypeDefinitionIndex = 31299;

class Class_1_8428FFDC1DFCE162 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8428FFDC1DFCE162*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8428FFDC1DFCE162*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8428FFDC1DFCE162_TypeDefinitionIndex)->GetStaticField(0x5ED40);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x1C
	::System::Single Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8428FFDC1DFCE162* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8428FFDC1DFCE162*))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8428FFDC1DFCE162*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8428FFDC1DFCE162*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8428FFDC1DFCE162* Clone()
	{
		return ((::Class_1_8428FFDC1DFCE162*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8428FFDC1DFCE162* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8428FFDC1DFCE162*))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8428FFDC1DFCE162* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8428FFDC1DFCE162*))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8428FFDC1DFCE162_MERGEFROM_1_OFFSET))(this, a1);
	}
};
