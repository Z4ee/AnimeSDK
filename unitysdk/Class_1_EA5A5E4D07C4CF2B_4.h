#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EA5A5E4D07C4CF2B_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED4F410)
#define CLASS_1_EA5A5E4D07C4CF2B_4_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED4EFE0)
#define CLASS_1_EA5A5E4D07C4CF2B_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED4F1A0)
#define CLASS_1_EA5A5E4D07C4CF2B_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED4F090)
#define CLASS_1_EA5A5E4D07C4CF2B_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED4F270)
#define CLASS_1_EA5A5E4D07C4CF2B_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED4F5A0)
#define CLASS_1_EA5A5E4D07C4CF2B_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED4F560)
#define CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1ED4EF30)
#define CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1ED4F080)
#define CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1ED4F060)
#define CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1ED4F070)
#define CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1ED4F050)
#define CLASS_1_EA5A5E4D07C4CF2B_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED4EF90)
#define CLASS_1_EA5A5E4D07C4CF2B_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED4F2A0)
#define CLASS_1_EA5A5E4D07C4CF2B_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED4F300)
#define CLASS_1_EA5A5E4D07C4CF2B_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED4F720)
#define CLASS_1_EA5A5E4D07C4CF2B_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED4EFB0)
#define CLASS_1_EA5A5E4D07C4CF2B_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED4EFA0)

inline static constexpr unsigned int Class_1_EA5A5E4D07C4CF2B_4_TypeDefinitionIndex = 26551;

class Class_1_EA5A5E4D07C4CF2B_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_4*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA5A5E4D07C4CF2B_4_TypeDefinitionIndex)->GetStaticField(0x436F0);
	}
	// static const ::System::Int32 PLAGKJDJGBN = 0xD; // 0x0
	// static const ::System::Int32 OAPJNMPOKHB = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Int32 EIKLKDGDLEG; // 0x18
	::System::Int32 KFNMMILCBFP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA5A5E4D07C4CF2B_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_4*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_4* Clone()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA5A5E4D07C4CF2B_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_4*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA5A5E4D07C4CF2B_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_4*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
