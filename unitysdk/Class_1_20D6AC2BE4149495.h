#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_20D6AC2BE4149495_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C5A30)
#define CLASS_1_20D6AC2BE4149495_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C54B0)
#define CLASS_1_20D6AC2BE4149495_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C5710)
#define CLASS_1_20D6AC2BE4149495_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C5590)
#define CLASS_1_20D6AC2BE4149495_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C5890)
#define CLASS_1_20D6AC2BE4149495_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C5C00)
#define CLASS_1_20D6AC2BE4149495_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C5B40)
#define CLASS_1_20D6AC2BE4149495_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E1C5550)
#define CLASS_1_20D6AC2BE4149495_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E1C5580)
#define CLASS_1_20D6AC2BE4149495_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E1C53D0)
#define CLASS_1_20D6AC2BE4149495_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E1C5560)
#define CLASS_1_20D6AC2BE4149495_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E1C5570)
#define CLASS_1_20D6AC2BE4149495_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C5400)
#define CLASS_1_20D6AC2BE4149495_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C58E0)
#define CLASS_1_20D6AC2BE4149495_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C5940)
#define CLASS_1_20D6AC2BE4149495__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C5DD0)
#define CLASS_1_20D6AC2BE4149495__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C5420)
#define CLASS_1_20D6AC2BE4149495__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C5410)

inline static constexpr unsigned int Class_1_20D6AC2BE4149495_TypeDefinitionIndex = 30061;

class Class_1_20D6AC2BE4149495 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_20D6AC2BE4149495*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_20D6AC2BE4149495*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D6AC2BE4149495_TypeDefinitionIndex)->GetStaticField(0x2EB40);
	}
	// static const ::System::Int32 EKOJBDKKGKB = 0xA; // 0x0
	// static const ::System::Int32 EPHDHCDELFA = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_7B005A18003A04C3* IEIGGCPOANL; // 0x18
	::Enum_3_01618AD0437C8486_2 CIFEGFBGDNB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_20D6AC2BE4149495* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D6AC2BE4149495*))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_20D6AC2BE4149495*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_20D6AC2BE4149495*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_20D6AC2BE4149495* Clone()
	{
		return ((::Class_1_20D6AC2BE4149495*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_CLONE_OFFSET))(this);
	}

	::Class_1_7B005A18003A04C3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7B005A18003A04C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7B005A18003A04C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_20D6AC2BE4149495* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20D6AC2BE4149495*))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_20D6AC2BE4149495* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D6AC2BE4149495*))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D6AC2BE4149495_MERGEFROM_1_OFFSET))(this, a1);
	}
};
