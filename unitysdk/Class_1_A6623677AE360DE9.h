#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A6623677AE360DE9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71C7A0)
#define CLASS_1_A6623677AE360DE9_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71C2D0)
#define CLASS_1_A6623677AE360DE9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71C3E0)
#define CLASS_1_A6623677AE360DE9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71C350)
#define CLASS_1_A6623677AE360DE9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71C4E0)
#define CLASS_1_A6623677AE360DE9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71C8F0)
#define CLASS_1_A6623677AE360DE9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71C890)
#define CLASS_1_A6623677AE360DE9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E71C310)
#define CLASS_1_A6623677AE360DE9_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E71C300)
#define CLASS_1_A6623677AE360DE9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E71C1A0)
#define CLASS_1_A6623677AE360DE9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E71C320)
#define CLASS_1_A6623677AE360DE9_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E71C340)
#define CLASS_1_A6623677AE360DE9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E71C330)
#define CLASS_1_A6623677AE360DE9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71C1D0)
#define CLASS_1_A6623677AE360DE9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71C5E0)
#define CLASS_1_A6623677AE360DE9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71C640)
#define CLASS_1_A6623677AE360DE9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71C9C0)
#define CLASS_1_A6623677AE360DE9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71C230)
#define CLASS_1_A6623677AE360DE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71C1E0)

inline static constexpr unsigned int Class_1_A6623677AE360DE9_TypeDefinitionIndex = 27636;

class Class_1_A6623677AE360DE9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EPAMOMMFMGA()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6623677AE360DE9_TypeDefinitionIndex)->GetStaticField(0x1F350);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6623677AE360DE9_TypeDefinitionIndex)->GetStaticField(0x1F358);
	}
	// static const ::System::Int32 IJNFEONMFLA = 0x7; // 0x0
	// static const ::System::Int32 BOIGPPCIPFF = 0x2; // 0x0
	// static const ::System::Int32 JOIMOBINPOL = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PNPEOIOHENI; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::Boolean LGJDEIKNELF; // 0x20
	::System::UInt32 OPPNMFMNMGC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A6623677AE360DE9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6623677AE360DE9*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A6623677AE360DE9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A6623677AE360DE9* Clone()
	{
		return ((::Class_1_A6623677AE360DE9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A6623677AE360DE9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A6623677AE360DE9*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A6623677AE360DE9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6623677AE360DE9*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A6623677AE360DE9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
