#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C5558E44458D1466_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C48D710)
#define CLASS_1_C5558E44458D1466_CLONE_OFFSET UNITYSDK_OFFSET(0x1C48D0E0)
#define CLASS_1_C5558E44458D1466_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C48D310)
#define CLASS_1_C5558E44458D1466_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C48D1F0)
#define CLASS_1_C5558E44458D1466_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C48D430)
#define CLASS_1_C5558E44458D1466_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C48D830)
#define CLASS_1_C5558E44458D1466_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C48D7E0)
#define CLASS_1_C5558E44458D1466_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1C48D170)
#define CLASS_1_C5558E44458D1466_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C48CFD0)
#define CLASS_1_C5558E44458D1466_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1C48D180)
#define CLASS_1_C5558E44458D1466_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C48D1E0)
#define CLASS_1_C5558E44458D1466_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C48D1D0)
#define CLASS_1_C5558E44458D1466_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C48D000)
#define CLASS_1_C5558E44458D1466_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C48D560)
#define CLASS_1_C5558E44458D1466_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C48D5C0)
#define CLASS_1_C5558E44458D1466__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C48D9E0)
#define CLASS_1_C5558E44458D1466__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C48D060)
#define CLASS_1_C5558E44458D1466__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48D010)

inline static constexpr unsigned int Class_1_C5558E44458D1466_TypeDefinitionIndex = 32525;

class Class_1_C5558E44458D1466 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C5558E44458D1466*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C5558E44458D1466*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C5558E44458D1466_TypeDefinitionIndex)->GetStaticField(0x46C20);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::ByteString* Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C5558E44458D1466* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C5558E44458D1466*))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C5558E44458D1466*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C5558E44458D1466*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C5558E44458D1466* Clone()
	{
		return ((::Class_1_C5558E44458D1466*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C5558E44458D1466* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C5558E44458D1466*))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C5558E44458D1466* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C5558E44458D1466*))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C5558E44458D1466_MERGEFROM_1_OFFSET))(this, a1);
	}
};
