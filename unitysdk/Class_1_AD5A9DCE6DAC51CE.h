#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AD5A9DCE6DAC51CE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5ED540)
#define CLASS_1_AD5A9DCE6DAC51CE_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5ED060)
#define CLASS_1_AD5A9DCE6DAC51CE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5ED140)
#define CLASS_1_AD5A9DCE6DAC51CE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5ED110)
#define CLASS_1_AD5A9DCE6DAC51CE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5ED2B0)
#define CLASS_1_AD5A9DCE6DAC51CE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5ED670)
#define CLASS_1_AD5A9DCE6DAC51CE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5ED600)
#define CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A5ED0B0)
#define CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A5ECFD0)
#define CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A5ED0C0)
#define CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x1A5ED100)
#define CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1A5ED0E0)
#define CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1A5ED0F0)
#define CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1A5ED0D0)
#define CLASS_1_AD5A9DCE6DAC51CE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5ED000)
#define CLASS_1_AD5A9DCE6DAC51CE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5ED400)
#define CLASS_1_AD5A9DCE6DAC51CE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5ED460)
#define CLASS_1_AD5A9DCE6DAC51CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5ED880)
#define CLASS_1_AD5A9DCE6DAC51CE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5ED020)
#define CLASS_1_AD5A9DCE6DAC51CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5ED010)

inline static constexpr unsigned int Class_1_AD5A9DCE6DAC51CE_TypeDefinitionIndex = 24082;

class Class_1_AD5A9DCE6DAC51CE : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_AD5A9DCE6DAC51CE*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_AD5A9DCE6DAC51CE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AD5A9DCE6DAC51CE_TypeDefinitionIndex)->GetStaticField(0x1AE60);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Double Field_1_5; // 0x18
	::System::Double Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AD5A9DCE6DAC51CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AD5A9DCE6DAC51CE*))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_AD5A9DCE6DAC51CE*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_AD5A9DCE6DAC51CE*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AD5A9DCE6DAC51CE* Clone()
	{
		return ((::Class_1_AD5A9DCE6DAC51CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AD5A9DCE6DAC51CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AD5A9DCE6DAC51CE*))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AD5A9DCE6DAC51CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AD5A9DCE6DAC51CE*))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AD5A9DCE6DAC51CE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
