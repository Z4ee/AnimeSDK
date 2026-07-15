#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_36.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_16;
class Class_1_BB4B99DE4C2501EC_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BF143F0112C85F1D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C928C90)
#define CLASS_1_BF143F0112C85F1D_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9284F0)
#define CLASS_1_BF143F0112C85F1D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C928840)
#define CLASS_1_BF143F0112C85F1D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C928610)
#define CLASS_1_BF143F0112C85F1D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C928A70)
#define CLASS_1_BF143F0112C85F1D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C928EA0)
#define CLASS_1_BF143F0112C85F1D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C928DE0)
#define CLASS_1_BF143F0112C85F1D_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C9285F0)
#define CLASS_1_BF143F0112C85F1D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C9285B0)
#define CLASS_1_BF143F0112C85F1D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C9285E0)
#define CLASS_1_BF143F0112C85F1D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C9283F0)
#define CLASS_1_BF143F0112C85F1D_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C928600)
#define CLASS_1_BF143F0112C85F1D_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C9285C0)
#define CLASS_1_BF143F0112C85F1D_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C9285D0)
#define CLASS_1_BF143F0112C85F1D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C928420)
#define CLASS_1_BF143F0112C85F1D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C928AD0)
#define CLASS_1_BF143F0112C85F1D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C928B30)
#define CLASS_1_BF143F0112C85F1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C929070)
#define CLASS_1_BF143F0112C85F1D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C928440)
#define CLASS_1_BF143F0112C85F1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C928430)

inline static constexpr unsigned int Class_1_BF143F0112C85F1D_TypeDefinitionIndex = 32665;

class Class_1_BF143F0112C85F1D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BF143F0112C85F1D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BF143F0112C85F1D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF143F0112C85F1D_TypeDefinitionIndex)->GetStaticField(0x5DD80);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	::Class_1_21DCD4640D389503_16* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Class_1_BB4B99DE4C2501EC_6* Field_1_6; // 0x20
	::Enum_3_4608E37A1B3D374A_36 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BF143F0112C85F1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF143F0112C85F1D*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BF143F0112C85F1D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BF143F0112C85F1D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BF143F0112C85F1D* Clone()
	{
		return ((::Class_1_BF143F0112C85F1D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_CLONE_OFFSET))(this);
	}

	::Class_1_BB4B99DE4C2501EC_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BB4B99DE4C2501EC_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_36 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_36(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_36 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_36))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_16* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_16*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BF143F0112C85F1D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BF143F0112C85F1D*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BF143F0112C85F1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF143F0112C85F1D*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF143F0112C85F1D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
