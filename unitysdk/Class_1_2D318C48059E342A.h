#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_42.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2D318C48059E342A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CEA77D0)
#define CLASS_1_2D318C48059E342A_CLONE_OFFSET UNITYSDK_OFFSET(0x1CEA7280)
#define CLASS_1_2D318C48059E342A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEA7370)
#define CLASS_1_2D318C48059E342A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEA7310)
#define CLASS_1_2D318C48059E342A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEA74C0)
#define CLASS_1_2D318C48059E342A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CEA7A00)
#define CLASS_1_2D318C48059E342A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CEA7940)
#define CLASS_1_2D318C48059E342A_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CEA7090)
#define CLASS_1_2D318C48059E342A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CEA72E0)
#define CLASS_1_2D318C48059E342A_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1CEA72F0)
#define CLASS_1_2D318C48059E342A_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CEA7300)
#define CLASS_1_2D318C48059E342A_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CEA72D0)
#define CLASS_1_2D318C48059E342A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CEA70F0)
#define CLASS_1_2D318C48059E342A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEA7610)
#define CLASS_1_2D318C48059E342A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CEA7670)
#define CLASS_1_2D318C48059E342A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEA7B40)
#define CLASS_1_2D318C48059E342A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEA7180)
#define CLASS_1_2D318C48059E342A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA7100)

inline static constexpr unsigned int Class_1_2D318C48059E342A_TypeDefinitionIndex = 29508;

class Class_1_2D318C48059E342A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D318C48059E342A_TypeDefinitionIndex)->GetStaticField(0x346E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D318C48059E342A_TypeDefinitionIndex)->GetStaticField(0x346E8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_2D318C48059E342A*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2D318C48059E342A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D318C48059E342A_TypeDefinitionIndex)->GetStaticField(0x346F0);
	}
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_8; // 0x20
	::Enum_3_DB663931210BBC27_42 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2D318C48059E342A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D318C48059E342A*))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2D318C48059E342A*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2D318C48059E342A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2D318C48059E342A* Clone()
	{
		return ((::Class_1_2D318C48059E342A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_CLONE_OFFSET))(this);
	}

	::Enum_3_DB663931210BBC27_42 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_42(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_42 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_42))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2D318C48059E342A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2D318C48059E342A*))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2D318C48059E342A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2D318C48059E342A*))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2D318C48059E342A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
