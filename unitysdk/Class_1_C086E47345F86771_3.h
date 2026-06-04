#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C086E47345F86771_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A356280)
#define CLASS_1_C086E47345F86771_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A355ED0)
#define CLASS_1_C086E47345F86771_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A356090)
#define CLASS_1_C086E47345F86771_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A355FD0)
#define CLASS_1_C086E47345F86771_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A356100)
#define CLASS_1_C086E47345F86771_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A356520)
#define CLASS_1_C086E47345F86771_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A3564D0)
#define CLASS_1_C086E47345F86771_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A355F90)
#define CLASS_1_C086E47345F86771_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A355FB0)
#define CLASS_1_C086E47345F86771_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A355F70)
#define CLASS_1_C086E47345F86771_3_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1A355F60)
#define CLASS_1_C086E47345F86771_3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A355E10)
#define CLASS_1_C086E47345F86771_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A355FA0)
#define CLASS_1_C086E47345F86771_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A355FC0)
#define CLASS_1_C086E47345F86771_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A355F80)
#define CLASS_1_C086E47345F86771_3_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1A355F50)
#define CLASS_1_C086E47345F86771_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A355E70)
#define CLASS_1_C086E47345F86771_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A356150)
#define CLASS_1_C086E47345F86771_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A3561B0)
#define CLASS_1_C086E47345F86771_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3565C0)
#define CLASS_1_C086E47345F86771_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A355E90)
#define CLASS_1_C086E47345F86771_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A355E80)

inline static constexpr unsigned int Class_1_C086E47345F86771_3_TypeDefinitionIndex = 25530;

class Class_1_C086E47345F86771_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C086E47345F86771_3_TypeDefinitionIndex)->GetStaticField(0x13DB0);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::System::UInt64 Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C086E47345F86771_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_3*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C086E47345F86771_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C086E47345F86771_3* Clone()
	{
		return ((::Class_1_C086E47345F86771_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C086E47345F86771_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C086E47345F86771_3*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C086E47345F86771_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C086E47345F86771_3*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C086E47345F86771_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
