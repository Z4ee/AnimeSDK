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

#define CLASS_1_45BB92167AED63A0_106_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E49C9E0)
#define CLASS_1_45BB92167AED63A0_106_CLONE_OFFSET UNITYSDK_OFFSET(0x1E49C4B0)
#define CLASS_1_45BB92167AED63A0_106_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E49C610)
#define CLASS_1_45BB92167AED63A0_106_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E49C500)
#define CLASS_1_45BB92167AED63A0_106_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E49C720)
#define CLASS_1_45BB92167AED63A0_106_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E49CAD0)
#define CLASS_1_45BB92167AED63A0_106_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E49CA70)
#define CLASS_1_45BB92167AED63A0_106_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E49C4F0)
#define CLASS_1_45BB92167AED63A0_106_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E49C4E0)
#define CLASS_1_45BB92167AED63A0_106_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E49C2F0)
#define CLASS_1_45BB92167AED63A0_106_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E49C320)
#define CLASS_1_45BB92167AED63A0_106_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E49C8E0)
#define CLASS_1_45BB92167AED63A0_106_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E49C940)
#define CLASS_1_45BB92167AED63A0_106__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49CC00)
#define CLASS_1_45BB92167AED63A0_106__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49C3C0)
#define CLASS_1_45BB92167AED63A0_106__CTOR_OFFSET UNITYSDK_OFFSET(0x1E49C330)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_106_TypeDefinitionIndex = 34552;

class Class_1_45BB92167AED63A0_106 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DEDPLCMFABC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_106_TypeDefinitionIndex)->GetStaticField(0x1DB30);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FBGAEFMBKKG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_106_TypeDefinitionIndex)->GetStaticField(0x1DB38);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_106*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_106*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_106_TypeDefinitionIndex)->GetStaticField(0x1DB40);
	}
	// static const ::System::Int32 DJCBLFFDIDB = 0xC; // 0x0
	// static const ::System::Int32 PNHIJFAHEDM = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ILINFECDPON; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFPJPMFGPIP; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_106* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_106*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_106*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_106*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_106* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_106*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_106* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_106*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_106* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_106*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_106_MERGEFROM_1_OFFSET))(this, a1);
	}
};
