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

#define CLASS_1_6DED08B7C7C749EF_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A390FE0)
#define CLASS_1_6DED08B7C7C749EF_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1A390AD0)
#define CLASS_1_6DED08B7C7C749EF_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A390C60)
#define CLASS_1_6DED08B7C7C749EF_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A390B90)
#define CLASS_1_6DED08B7C7C749EF_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A390D30)
#define CLASS_1_6DED08B7C7C749EF_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A391230)
#define CLASS_1_6DED08B7C7C749EF_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3911C0)
#define CLASS_1_6DED08B7C7C749EF_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A390B70)
#define CLASS_1_6DED08B7C7C749EF_5_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A390B20)
#define CLASS_1_6DED08B7C7C749EF_5_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A390B10)
#define CLASS_1_6DED08B7C7C749EF_5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A390B00)
#define CLASS_1_6DED08B7C7C749EF_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A390990)
#define CLASS_1_6DED08B7C7C749EF_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A390B80)
#define CLASS_1_6DED08B7C7C749EF_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A3909C0)
#define CLASS_1_6DED08B7C7C749EF_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A390EB0)
#define CLASS_1_6DED08B7C7C749EF_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A390F10)
#define CLASS_1_6DED08B7C7C749EF_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A391350)
#define CLASS_1_6DED08B7C7C749EF_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A390A30)
#define CLASS_1_6DED08B7C7C749EF_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3909D0)

inline static constexpr unsigned int Class_1_6DED08B7C7C749EF_5_TypeDefinitionIndex = 32352;

class Class_1_6DED08B7C7C749EF_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DED08B7C7C749EF_5_TypeDefinitionIndex)->GetStaticField(0x5B770);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_5*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DED08B7C7C749EF_5_TypeDefinitionIndex)->GetStaticField(0x5B778);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::String* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6DED08B7C7C749EF_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DED08B7C7C749EF_5*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6DED08B7C7C749EF_5* Clone()
	{
		return ((::Class_1_6DED08B7C7C749EF_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6DED08B7C7C749EF_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6DED08B7C7C749EF_5*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6DED08B7C7C749EF_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DED08B7C7C749EF_5*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
