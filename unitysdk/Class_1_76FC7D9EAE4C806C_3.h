#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_76FC7D9EAE4C806C_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A6FDFB0)
#define CLASS_1_76FC7D9EAE4C806C_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A6FDC30)
#define CLASS_1_76FC7D9EAE4C806C_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A6FDDC0)
#define CLASS_1_76FC7D9EAE4C806C_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6FDD10)
#define CLASS_1_76FC7D9EAE4C806C_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A6FDE30)
#define CLASS_1_76FC7D9EAE4C806C_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A6FE1E0)
#define CLASS_1_76FC7D9EAE4C806C_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A6FE190)
#define CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A6FDB70)
#define CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1A6FDCE0)
#define CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C114A1F8E08B6F92_2_OFFSET UNITYSDK_OFFSET(0x1A6FDD00)
#define CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A6FDCC0)
#define CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1A6FDCD0)
#define CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x1A6FDCF0)
#define CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A6FDCB0)
#define CLASS_1_76FC7D9EAE4C806C_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A6FDBD0)
#define CLASS_1_76FC7D9EAE4C806C_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6FDE60)
#define CLASS_1_76FC7D9EAE4C806C_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A6FDEC0)
#define CLASS_1_76FC7D9EAE4C806C_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6FE380)
#define CLASS_1_76FC7D9EAE4C806C_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A6FDBF0)
#define CLASS_1_76FC7D9EAE4C806C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FDBE0)

inline static constexpr unsigned int Class_1_76FC7D9EAE4C806C_3_TypeDefinitionIndex = 26862;

class Class_1_76FC7D9EAE4C806C_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_76FC7D9EAE4C806C_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_76FC7D9EAE4C806C_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76FC7D9EAE4C806C_3_TypeDefinitionIndex)->GetStaticField(0x35B50);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::Int32 Field_1_6; // 0x1C
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_76FC7D9EAE4C806C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76FC7D9EAE4C806C_3*))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_76FC7D9EAE4C806C_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_76FC7D9EAE4C806C_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_76FC7D9EAE4C806C_3* Clone()
	{
		return ((::Class_1_76FC7D9EAE4C806C_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_METHOD_1_C114A1F8E08B6F92_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_76FC7D9EAE4C806C_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_76FC7D9EAE4C806C_3*))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_76FC7D9EAE4C806C_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76FC7D9EAE4C806C_3*))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_76FC7D9EAE4C806C_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
