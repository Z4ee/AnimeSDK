#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A107654BBD031F68_Enum_3_060898AA908AAA4E.h"
#include "unitysdk/System/Object.h"

class Class_1_38EDFE5CA7B8A5B6_1;
class Class_1_7FF19F6206AF6DD7_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A107654BBD031F68_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E644CD0)
#define CLASS_1_A107654BBD031F68_CLONE_OFFSET UNITYSDK_OFFSET(0x1E644450)
#define CLASS_1_A107654BBD031F68_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6444D0)
#define CLASS_1_A107654BBD031F68_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6444A0)
#define CLASS_1_A107654BBD031F68_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6448B0)
#define CLASS_1_A107654BBD031F68_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E645120)
#define CLASS_1_A107654BBD031F68_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E644E90)
#define CLASS_1_A107654BBD031F68_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1E644480)
#define CLASS_1_A107654BBD031F68_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E6440E0)
#define CLASS_1_A107654BBD031F68_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x1E6442E0)
#define CLASS_1_A107654BBD031F68_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1E644490)
#define CLASS_1_A107654BBD031F68_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1E644430)
#define CLASS_1_A107654BBD031F68_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E6443D0)
#define CLASS_1_A107654BBD031F68_METHOD_1_C4BFBB1BE6C0430A_1_OFFSET UNITYSDK_OFFSET(0x1E6443F0)
#define CLASS_1_A107654BBD031F68_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1E644390)
#define CLASS_1_A107654BBD031F68_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x1E644360)
#define CLASS_1_A107654BBD031F68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E644110)
#define CLASS_1_A107654BBD031F68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E644A60)
#define CLASS_1_A107654BBD031F68_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E644AC0)
#define CLASS_1_A107654BBD031F68__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E645460)
#define CLASS_1_A107654BBD031F68__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E644130)
#define CLASS_1_A107654BBD031F68__CTOR_OFFSET UNITYSDK_OFFSET(0x1E644120)

inline static constexpr unsigned int Class_1_A107654BBD031F68_TypeDefinitionIndex = 25919;

class Class_1_A107654BBD031F68 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A107654BBD031F68*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A107654BBD031F68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A107654BBD031F68_TypeDefinitionIndex)->GetStaticField(0x49FC0);
	}
	// static const ::System::Int32 FNHENNCPKAA = 0x1; // 0x0
	// static const ::System::Int32 EOMFFNCEAOK = 0x2; // 0x0
	// static const ::System::Int32 FJBGDOJEBMP = 0x3; // 0x0
	::System::Object* KGKNPPHMGKC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Class_1_A107654BBD031F68_Enum_3_060898AA908AAA4E OLBJLCGPCKM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A107654BBD031F68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A107654BBD031F68*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A107654BBD031F68*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A107654BBD031F68*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A107654BBD031F68* Clone()
	{
		return ((::Class_1_A107654BBD031F68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_38EDFE5CA7B8A5B6_1* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_38EDFE5CA7B8A5B6_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_38EDFE5CA7B8A5B6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38EDFE5CA7B8A5B6_1*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_7FF19F6206AF6DD7_2* Method_1_C4BFBB1BE6C0430A_1()
	{
		return ((::Class_1_7FF19F6206AF6DD7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_C4BFBB1BE6C0430A_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_7FF19F6206AF6DD7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_2*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_A107654BBD031F68_Enum_3_060898AA908AAA4E Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_A107654BBD031F68_Enum_3_060898AA908AAA4E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A107654BBD031F68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A107654BBD031F68*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A107654BBD031F68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A107654BBD031F68*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A107654BBD031F68_MERGEFROM_1_OFFSET))(this, a1);
	}
};
