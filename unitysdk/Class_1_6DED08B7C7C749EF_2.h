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

#define CLASS_1_6DED08B7C7C749EF_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC105E0)
#define CLASS_1_6DED08B7C7C749EF_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC0FF20)
#define CLASS_1_6DED08B7C7C749EF_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC100E0)
#define CLASS_1_6DED08B7C7C749EF_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC10020)
#define CLASS_1_6DED08B7C7C749EF_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC10220)
#define CLASS_1_6DED08B7C7C749EF_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC10830)
#define CLASS_1_6DED08B7C7C749EF_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC107C0)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CC0FFA0)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC0FF80)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CC0FFD0)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CC0FFC0)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC0FDB0)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CC0FF70)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CC0FFB0)
#define CLASS_1_6DED08B7C7C749EF_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC0FF90)
#define CLASS_1_6DED08B7C7C749EF_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC0FE10)
#define CLASS_1_6DED08B7C7C749EF_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC103A0)
#define CLASS_1_6DED08B7C7C749EF_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC10400)
#define CLASS_1_6DED08B7C7C749EF_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC10970)
#define CLASS_1_6DED08B7C7C749EF_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC0FE80)
#define CLASS_1_6DED08B7C7C749EF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC0FE20)

inline static constexpr unsigned int Class_1_6DED08B7C7C749EF_2_TypeDefinitionIndex = 24822;

class Class_1_6DED08B7C7C749EF_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DED08B7C7C749EF_2_TypeDefinitionIndex)->GetStaticField(0x275A0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DED08B7C7C749EF_2_TypeDefinitionIndex)->GetStaticField(0x275A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6DED08B7C7C749EF_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DED08B7C7C749EF_2*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6DED08B7C7C749EF_2* Clone()
	{
		return ((::Class_1_6DED08B7C7C749EF_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6DED08B7C7C749EF_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6DED08B7C7C749EF_2*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6DED08B7C7C749EF_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DED08B7C7C749EF_2*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
