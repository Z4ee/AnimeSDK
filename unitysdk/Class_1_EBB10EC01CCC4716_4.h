#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BA8B70)
#define CLASS_1_EBB10EC01CCC4716_4_CLONE_OFFSET UNITYSDK_OFFSET(0x19BA7E30)
#define CLASS_1_EBB10EC01CCC4716_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BA83E0)
#define CLASS_1_EBB10EC01CCC4716_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BA83B0)
#define CLASS_1_EBB10EC01CCC4716_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BA8570)
#define CLASS_1_EBB10EC01CCC4716_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BA9530)
#define CLASS_1_EBB10EC01CCC4716_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BA9210)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19BA7F90)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x19BA8040)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x19BA80F0)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_4_OFFSET UNITYSDK_OFFSET(0x19BA81A0)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_5_OFFSET UNITYSDK_OFFSET(0x19BA8250)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_6_OFFSET UNITYSDK_OFFSET(0x19BA8300)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19BA7EE0)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BA7D00)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x19BA7FA0)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_2_OFFSET UNITYSDK_OFFSET(0x19BA8050)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_3_OFFSET UNITYSDK_OFFSET(0x19BA8100)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_4_OFFSET UNITYSDK_OFFSET(0x19BA81B0)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_5_OFFSET UNITYSDK_OFFSET(0x19BA8260)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_6_OFFSET UNITYSDK_OFFSET(0x19BA8310)
#define CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19BA7EF0)
#define CLASS_1_EBB10EC01CCC4716_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BA7D30)
#define CLASS_1_EBB10EC01CCC4716_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BA8940)
#define CLASS_1_EBB10EC01CCC4716_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BA89A0)
#define CLASS_1_EBB10EC01CCC4716_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA9A80)
#define CLASS_1_EBB10EC01CCC4716_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BA7D90)
#define CLASS_1_EBB10EC01CCC4716_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA7D40)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_4_TypeDefinitionIndex = 24069;

class Class_1_EBB10EC01CCC4716_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB10EC01CCC4716_4_TypeDefinitionIndex)->GetStaticField(0x4D720);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::String* Field_1_3; // 0x30
	::System::String* Field_1_13; // 0x38
	::System::String* Field_1_9; // 0x40
	::System::String* Field_1_15; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_4*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_4*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EBB10EC01CCC4716_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_4* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_4_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_5_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_126AB3935214AA22_6_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_METHOD_1_9CE3056B66B7573D_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_4*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_4*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
