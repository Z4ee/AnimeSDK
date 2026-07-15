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

#define CLASS_1_73F64B93A3CFE81A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C866840)
#define CLASS_1_73F64B93A3CFE81A_CLONE_OFFSET UNITYSDK_OFFSET(0x1C866270)
#define CLASS_1_73F64B93A3CFE81A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8663E0)
#define CLASS_1_73F64B93A3CFE81A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C866330)
#define CLASS_1_73F64B93A3CFE81A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8664F0)
#define CLASS_1_73F64B93A3CFE81A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C866AF0)
#define CLASS_1_73F64B93A3CFE81A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C866A80)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C866300)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8662C0)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C866110)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C8662F0)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C866320)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C866310)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8662D0)
#define CLASS_1_73F64B93A3CFE81A_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C8662E0)
#define CLASS_1_73F64B93A3CFE81A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C866170)
#define CLASS_1_73F64B93A3CFE81A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C866610)
#define CLASS_1_73F64B93A3CFE81A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C866670)
#define CLASS_1_73F64B93A3CFE81A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C866C00)
#define CLASS_1_73F64B93A3CFE81A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8661D0)
#define CLASS_1_73F64B93A3CFE81A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C866180)

inline static constexpr unsigned int Class_1_73F64B93A3CFE81A_TypeDefinitionIndex = 30581;

class Class_1_73F64B93A3CFE81A : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F64B93A3CFE81A_TypeDefinitionIndex)->GetStaticField(0x18B50);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_73F64B93A3CFE81A*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_73F64B93A3CFE81A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F64B93A3CFE81A_TypeDefinitionIndex)->GetStaticField(0x18B58);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::Int64 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_73F64B93A3CFE81A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F64B93A3CFE81A*))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_73F64B93A3CFE81A*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_73F64B93A3CFE81A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_73F64B93A3CFE81A* Clone()
	{
		return ((::Class_1_73F64B93A3CFE81A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_73F64B93A3CFE81A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_73F64B93A3CFE81A*))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_73F64B93A3CFE81A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F64B93A3CFE81A*))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_73F64B93A3CFE81A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
