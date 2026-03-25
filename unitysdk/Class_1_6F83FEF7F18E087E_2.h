#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6F83FEF7F18E087E_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18003290)
#define CLASS_1_6F83FEF7F18E087E_2_CLONE_OFFSET UNITYSDK_OFFSET(0x18002DC0)
#define CLASS_1_6F83FEF7F18E087E_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18002F40)
#define CLASS_1_6F83FEF7F18E087E_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x18002EE0)
#define CLASS_1_6F83FEF7F18E087E_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18003060)
#define CLASS_1_6F83FEF7F18E087E_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18003430)
#define CLASS_1_6F83FEF7F18E087E_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180033B0)
#define CLASS_1_6F83FEF7F18E087E_2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18002E40)
#define CLASS_1_6F83FEF7F18E087E_2_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x18002E50)
#define CLASS_1_6F83FEF7F18E087E_2_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x18002ED0)
#define CLASS_1_6F83FEF7F18E087E_2_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x18002EC0)
#define CLASS_1_6F83FEF7F18E087E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18002D50)
#define CLASS_1_6F83FEF7F18E087E_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18003190)
#define CLASS_1_6F83FEF7F18E087E_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x180031F0)
#define CLASS_1_6F83FEF7F18E087E_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18002D70)
#define CLASS_1_6F83FEF7F18E087E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18002D60)

inline static constexpr unsigned int Class_1_6F83FEF7F18E087E_2_TypeDefinitionIndex = 26721;

class Class_1_6F83FEF7F18E087E_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Double Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6F83FEF7F18E087E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F83FEF7F18E087E_2*))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6F83FEF7F18E087E_2* Clone()
	{
		return ((::Class_1_6F83FEF7F18E087E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6F83FEF7F18E087E_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6F83FEF7F18E087E_2*))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6F83FEF7F18E087E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F83FEF7F18E087E_2*))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6F83FEF7F18E087E_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
