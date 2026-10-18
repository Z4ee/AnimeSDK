#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9673A3D08D2D12A0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E25C030)
#define CLASS_1_9673A3D08D2D12A0_CLONE_OFFSET UNITYSDK_OFFSET(0x1E25BB70)
#define CLASS_1_9673A3D08D2D12A0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E25BC40)
#define CLASS_1_9673A3D08D2D12A0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25BC10)
#define CLASS_1_9673A3D08D2D12A0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E25BD80)
#define CLASS_1_9673A3D08D2D12A0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E25C2D0)
#define CLASS_1_9673A3D08D2D12A0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E25C240)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E25BBC0)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E25BBF0)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E25BBA0)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E25BA50)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E25BBD0)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E25BC00)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E25BBB0)
#define CLASS_1_9673A3D08D2D12A0_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x1E25BBE0)
#define CLASS_1_9673A3D08D2D12A0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E25BA80)
#define CLASS_1_9673A3D08D2D12A0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E25BE00)
#define CLASS_1_9673A3D08D2D12A0_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E25BE60)
#define CLASS_1_9673A3D08D2D12A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25C3C0)
#define CLASS_1_9673A3D08D2D12A0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E25BAD0)
#define CLASS_1_9673A3D08D2D12A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E25BA90)

inline static constexpr unsigned int Class_1_9673A3D08D2D12A0_TypeDefinitionIndex = 34098;

class Class_1_9673A3D08D2D12A0 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_DFMGBGOEHNO()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9673A3D08D2D12A0_TypeDefinitionIndex)->GetStaticField(0x3F860);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_9673A3D08D2D12A0*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9673A3D08D2D12A0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9673A3D08D2D12A0_TypeDefinitionIndex)->GetStaticField(0x3F868);
	}
	// static const ::System::Int32 NBCBOBPECPD = 0x8; // 0x0
	// static const ::System::Int32 OEMNIDFIJEO = 0x7; // 0x0
	// static const ::System::Int32 MDHHACEKNNO = 0x4; // 0x0
	// static const ::System::Int32 JFFKLDOPFOJ = 0x9; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* CCIAIDIACBE; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 DKLCPIAINIK; // 0x20
	::System::UInt32 BHFEEGICLMK; // 0x24
	::System::UInt32 DNCBIIBLFOO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9673A3D08D2D12A0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9673A3D08D2D12A0*))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9673A3D08D2D12A0*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9673A3D08D2D12A0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9673A3D08D2D12A0* Clone()
	{
		return ((::Class_1_9673A3D08D2D12A0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9673A3D08D2D12A0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9673A3D08D2D12A0*))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9673A3D08D2D12A0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9673A3D08D2D12A0*))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9673A3D08D2D12A0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
