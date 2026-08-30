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

#define CLASS_1_45BB92167AED63A0_106_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF5260)
#define CLASS_1_45BB92167AED63A0_106_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF4D30)
#define CLASS_1_45BB92167AED63A0_106_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF4E90)
#define CLASS_1_45BB92167AED63A0_106_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF4D80)
#define CLASS_1_45BB92167AED63A0_106_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF4FA0)
#define CLASS_1_45BB92167AED63A0_106_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF5350)
#define CLASS_1_45BB92167AED63A0_106_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF52F0)
#define CLASS_1_45BB92167AED63A0_106_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1DDF4D70)
#define CLASS_1_45BB92167AED63A0_106_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DDF4D60)
#define CLASS_1_45BB92167AED63A0_106_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DDF4B70)
#define CLASS_1_45BB92167AED63A0_106_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF4BA0)
#define CLASS_1_45BB92167AED63A0_106_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF5160)
#define CLASS_1_45BB92167AED63A0_106_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF51C0)
#define CLASS_1_45BB92167AED63A0_106__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF5480)
#define CLASS_1_45BB92167AED63A0_106__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF4C40)
#define CLASS_1_45BB92167AED63A0_106__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF4BB0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_106_TypeDefinitionIndex = 33858;

class Class_1_45BB92167AED63A0_106 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DEDPLCMFABC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_106_TypeDefinitionIndex)->GetStaticField(0x24730);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FBGAEFMBKKG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_106_TypeDefinitionIndex)->GetStaticField(0x24738);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_106*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_106*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_106_TypeDefinitionIndex)->GetStaticField(0x24740);
	}
	// static const ::System::Int32 DJCBLFFDIDB = 0xA; // 0x0
	// static const ::System::Int32 PNHIJFAHEDM = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ILINFECDPON; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFPJPMFGPIP; // 0x20

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
