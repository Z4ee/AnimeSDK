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

#define CLASS_1_35D7E19A6BADFE2D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A32D140)
#define CLASS_1_35D7E19A6BADFE2D_CLONE_OFFSET UNITYSDK_OFFSET(0x1A32CD80)
#define CLASS_1_35D7E19A6BADFE2D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A32CE60)
#define CLASS_1_35D7E19A6BADFE2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A32CE30)
#define CLASS_1_35D7E19A6BADFE2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A32CF60)
#define CLASS_1_35D7E19A6BADFE2D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A32D300)
#define CLASS_1_35D7E19A6BADFE2D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A32D2A0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A32CE10)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A32CE00)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A32CCF0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A32CE20)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1A32CDE0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A32CDF0)
#define CLASS_1_35D7E19A6BADFE2D_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1A32CDD0)
#define CLASS_1_35D7E19A6BADFE2D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A32CD20)
#define CLASS_1_35D7E19A6BADFE2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A32D010)
#define CLASS_1_35D7E19A6BADFE2D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A32D070)
#define CLASS_1_35D7E19A6BADFE2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A32D4A0)
#define CLASS_1_35D7E19A6BADFE2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A32CD40)
#define CLASS_1_35D7E19A6BADFE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32CD30)

inline static constexpr unsigned int Class_1_35D7E19A6BADFE2D_TypeDefinitionIndex = 26489;

class Class_1_35D7E19A6BADFE2D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_35D7E19A6BADFE2D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_35D7E19A6BADFE2D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35D7E19A6BADFE2D_TypeDefinitionIndex)->GetStaticField(0x254C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Double Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::Enum_3_01618AD0437C8486 Field_1_7; // 0x24

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
