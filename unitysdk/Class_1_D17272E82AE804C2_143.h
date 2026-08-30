#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_143_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8846B0)
#define CLASS_1_D17272E82AE804C2_143_CLONE_OFFSET UNITYSDK_OFFSET(0x1E884290)
#define CLASS_1_D17272E82AE804C2_143_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E884420)
#define CLASS_1_D17272E82AE804C2_143_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E884340)
#define CLASS_1_D17272E82AE804C2_143_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8844F0)
#define CLASS_1_D17272E82AE804C2_143_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E884890)
#define CLASS_1_D17272E82AE804C2_143_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E884840)
#define CLASS_1_D17272E82AE804C2_143_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E884300)
#define CLASS_1_D17272E82AE804C2_143_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E884320)
#define CLASS_1_D17272E82AE804C2_143_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E8842E0)
#define CLASS_1_D17272E82AE804C2_143_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E884200)
#define CLASS_1_D17272E82AE804C2_143_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E884310)
#define CLASS_1_D17272E82AE804C2_143_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E884330)
#define CLASS_1_D17272E82AE804C2_143_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E8842F0)
#define CLASS_1_D17272E82AE804C2_143_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E884230)
#define CLASS_1_D17272E82AE804C2_143_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E884520)
#define CLASS_1_D17272E82AE804C2_143_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E884580)
#define CLASS_1_D17272E82AE804C2_143__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E884A40)
#define CLASS_1_D17272E82AE804C2_143__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E884250)
#define CLASS_1_D17272E82AE804C2_143__CTOR_OFFSET UNITYSDK_OFFSET(0x1E884240)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_143_TypeDefinitionIndex = 26083;

class Class_1_D17272E82AE804C2_143 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_143*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_143*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_143_TypeDefinitionIndex)->GetStaticField(0x3F590);
	}
	// static const ::System::Int32 KPGNEGMDKCI = 0x4; // 0x0
	// static const ::System::Int32 FPKJMJADEBI = 0x3; // 0x0
	// static const ::System::Int32 JBLABOEPILK = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 MMOEKGNHACP; // 0x18
	::System::UInt32 NFGNEEGBNIF; // 0x1C
	::System::UInt32 FJLILEOEEIB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_143* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_143*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_143*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_143*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_143* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_143*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_143* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_143*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_143* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_143*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_143_MERGEFROM_1_OFFSET))(this, a1);
	}
};
