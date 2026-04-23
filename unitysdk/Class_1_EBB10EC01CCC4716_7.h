#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197E5670)
#define CLASS_1_EBB10EC01CCC4716_7_CLONE_OFFSET UNITYSDK_OFFSET(0x197E4AD0)
#define CLASS_1_EBB10EC01CCC4716_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197E4C50)
#define CLASS_1_EBB10EC01CCC4716_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x197E4C20)
#define CLASS_1_EBB10EC01CCC4716_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197E5030)
#define CLASS_1_EBB10EC01CCC4716_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197E57F0)
#define CLASS_1_EBB10EC01CCC4716_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197E5700)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x197E4A20)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x197E4B70)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_2_OFFSET UNITYSDK_OFFSET(0x197E4B90)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_3_OFFSET UNITYSDK_OFFSET(0x197E4BB0)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_4_OFFSET UNITYSDK_OFFSET(0x197E4BD0)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_5_OFFSET UNITYSDK_OFFSET(0x197E4BF0)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_6_OFFSET UNITYSDK_OFFSET(0x197E4C10)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x197E4B50)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x197E4B60)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_2_OFFSET UNITYSDK_OFFSET(0x197E4B80)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_3_OFFSET UNITYSDK_OFFSET(0x197E4BA0)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_4_OFFSET UNITYSDK_OFFSET(0x197E4BC0)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_5_OFFSET UNITYSDK_OFFSET(0x197E4BE0)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_6_OFFSET UNITYSDK_OFFSET(0x197E4C00)
#define CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x197E4B40)
#define CLASS_1_EBB10EC01CCC4716_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197E4A50)
#define CLASS_1_EBB10EC01CCC4716_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197E5430)
#define CLASS_1_EBB10EC01CCC4716_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x197E5490)
#define CLASS_1_EBB10EC01CCC4716_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x197E58F0)
#define CLASS_1_EBB10EC01CCC4716_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197E4A70)
#define CLASS_1_EBB10EC01CCC4716_7__CTOR_OFFSET UNITYSDK_OFFSET(0x197E4A60)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_7_TypeDefinitionIndex = 24175;

class Class_1_EBB10EC01CCC4716_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_7_TypeDefinitionIndex)->GetStaticField(0x63490);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Double Field_1_11; // 0x18
	::System::Double Field_1_5; // 0x20
	::System::Double Field_1_15; // 0x28
	::System::Double Field_1_9; // 0x30
	::System::Double Field_1_3; // 0x38
	::System::Double Field_1_13; // 0x40
	::System::Double Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_7*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_7* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_CLONE_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_2(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_2_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_3()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_3_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_3(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_3_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_4()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_4_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_4(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_4_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_5()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_5_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_5(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_5_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_C229FF62B898C0B2_6_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_6(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_METHOD_1_8633AE51B23EBDFD_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_7*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_7*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
