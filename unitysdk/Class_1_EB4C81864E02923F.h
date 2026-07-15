#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_EB4C81864E02923F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C36BA20)
#define CLASS_1_EB4C81864E02923F_CLONE_OFFSET UNITYSDK_OFFSET(0x1C36B470)
#define CLASS_1_EB4C81864E02923F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C36B710)
#define CLASS_1_EB4C81864E02923F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C36B560)
#define CLASS_1_EB4C81864E02923F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C36B890)
#define CLASS_1_EB4C81864E02923F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C36BC40)
#define CLASS_1_EB4C81864E02923F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C36BB50)
#define CLASS_1_EB4C81864E02923F_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x1C36B520)
#define CLASS_1_EB4C81864E02923F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C36B370)
#define CLASS_1_EB4C81864E02923F_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C36B550)
#define CLASS_1_EB4C81864E02923F_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x1C36B530)
#define CLASS_1_EB4C81864E02923F_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C36B540)
#define CLASS_1_EB4C81864E02923F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C36B3D0)
#define CLASS_1_EB4C81864E02923F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C36B8E0)
#define CLASS_1_EB4C81864E02923F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C36B940)
#define CLASS_1_EB4C81864E02923F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C36BE40)
#define CLASS_1_EB4C81864E02923F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C36B3F0)
#define CLASS_1_EB4C81864E02923F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C36B3E0)

inline static constexpr unsigned int Class_1_EB4C81864E02923F_TypeDefinitionIndex = 27663;

class Class_1_EB4C81864E02923F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EB4C81864E02923F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EB4C81864E02923F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB4C81864E02923F_TypeDefinitionIndex)->GetStaticField(0x54740);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	::Proto::PlayerSimpleInfo* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::Int64 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EB4C81864E02923F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB4C81864E02923F*))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EB4C81864E02923F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EB4C81864E02923F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EB4C81864E02923F* Clone()
	{
		return ((::Class_1_EB4C81864E02923F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_CLONE_OFFSET))(this);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EB4C81864E02923F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EB4C81864E02923F*))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EB4C81864E02923F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB4C81864E02923F*))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB4C81864E02923F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
