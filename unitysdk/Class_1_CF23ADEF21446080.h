#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_CF23ADEF21446080_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD86F80)
#define CLASS_1_CF23ADEF21446080_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD86880)
#define CLASS_1_CF23ADEF21446080_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD86A50)
#define CLASS_1_CF23ADEF21446080_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD86920)
#define CLASS_1_CF23ADEF21446080_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD86C10)
#define CLASS_1_CF23ADEF21446080_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD87240)
#define CLASS_1_CF23ADEF21446080_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD87180)
#define CLASS_1_CF23ADEF21446080_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD86900)
#define CLASS_1_CF23ADEF21446080_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CD868F0)
#define CLASS_1_CF23ADEF21446080_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CD868D0)
#define CLASS_1_CF23ADEF21446080_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD86720)
#define CLASS_1_CF23ADEF21446080_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1CD868C0)
#define CLASS_1_CF23ADEF21446080_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1CD868B0)
#define CLASS_1_CF23ADEF21446080_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD86910)
#define CLASS_1_CF23ADEF21446080_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CD868E0)
#define CLASS_1_CF23ADEF21446080_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD86750)
#define CLASS_1_CF23ADEF21446080_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD86D80)
#define CLASS_1_CF23ADEF21446080_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD86DE0)
#define CLASS_1_CF23ADEF21446080__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD87370)
#define CLASS_1_CF23ADEF21446080__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD867B0)
#define CLASS_1_CF23ADEF21446080__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD86760)

inline static constexpr unsigned int Class_1_CF23ADEF21446080_TypeDefinitionIndex = 25413;

class Class_1_CF23ADEF21446080 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF23ADEF21446080_TypeDefinitionIndex)->GetStaticField(0xA190);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_CF23ADEF21446080*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_CF23ADEF21446080*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF23ADEF21446080_TypeDefinitionIndex)->GetStaticField(0xA198);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Proto::ItemList* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x20
	::Enum_3_DFCB42601400F441 Field_1_9; // 0x28
	::System::UInt32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CF23ADEF21446080* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF23ADEF21446080*))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_CF23ADEF21446080*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_CF23ADEF21446080*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CF23ADEF21446080* Clone()
	{
		return ((::Class_1_CF23ADEF21446080*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CF23ADEF21446080* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CF23ADEF21446080*))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CF23ADEF21446080* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF23ADEF21446080*))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CF23ADEF21446080_MERGEFROM_1_OFFSET))(this, a1);
	}
};
