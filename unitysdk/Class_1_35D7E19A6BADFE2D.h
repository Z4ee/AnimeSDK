#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_35D7E19A6BADFE2D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CAABDE0)
#define CLASS_1_35D7E19A6BADFE2D_CLONE_OFFSET UNITYSDK_OFFSET(0x1CAAB830)
#define CLASS_1_35D7E19A6BADFE2D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CAAB910)
#define CLASS_1_35D7E19A6BADFE2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CAAB8E0)
#define CLASS_1_35D7E19A6BADFE2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CAABB00)
#define CLASS_1_35D7E19A6BADFE2D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CAABFA0)
#define CLASS_1_35D7E19A6BADFE2D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CAABF40)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CAAB8C0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CAAB8B0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CAAB7A0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CAAB8D0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1CAAB890)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CAAB8A0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1CAAB880)
#define CLASS_1_35D7E19A6BADFE2D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CAAB7D0)
#define CLASS_1_35D7E19A6BADFE2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAABC20)
#define CLASS_1_35D7E19A6BADFE2D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CAABC80)
#define CLASS_1_35D7E19A6BADFE2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAAC140)
#define CLASS_1_35D7E19A6BADFE2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAAB7F0)
#define CLASS_1_35D7E19A6BADFE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAB7E0)

inline static constexpr unsigned int Class_1_35D7E19A6BADFE2D_TypeDefinitionIndex = 26956;

class Class_1_35D7E19A6BADFE2D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_35D7E19A6BADFE2D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_35D7E19A6BADFE2D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35D7E19A6BADFE2D_TypeDefinitionIndex)->GetStaticField(0x2B670);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Enum_3_01618AD0437C8486 Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::Double Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_35D7E19A6BADFE2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35D7E19A6BADFE2D*))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_35D7E19A6BADFE2D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_35D7E19A6BADFE2D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_35D7E19A6BADFE2D* Clone()
	{
		return ((::Class_1_35D7E19A6BADFE2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_CLONE_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_35D7E19A6BADFE2D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_35D7E19A6BADFE2D*))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_35D7E19A6BADFE2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35D7E19A6BADFE2D*))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_35D7E19A6BADFE2D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
