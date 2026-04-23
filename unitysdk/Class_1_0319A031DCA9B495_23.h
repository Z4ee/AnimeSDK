#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_87;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0319A031DCA9B495_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BFF420)
#define CLASS_1_0319A031DCA9B495_23_CLONE_OFFSET UNITYSDK_OFFSET(0x19BFF090)
#define CLASS_1_0319A031DCA9B495_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BFF230)
#define CLASS_1_0319A031DCA9B495_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BFF170)
#define CLASS_1_0319A031DCA9B495_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BFF2E0)
#define CLASS_1_0319A031DCA9B495_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BFF630)
#define CLASS_1_0319A031DCA9B495_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BFF570)
#define CLASS_1_0319A031DCA9B495_23_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19BFF150)
#define CLASS_1_0319A031DCA9B495_23_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19BFF110)
#define CLASS_1_0319A031DCA9B495_23_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19BFF130)
#define CLASS_1_0319A031DCA9B495_23_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BFEFD0)
#define CLASS_1_0319A031DCA9B495_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19BFF160)
#define CLASS_1_0319A031DCA9B495_23_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19BFF120)
#define CLASS_1_0319A031DCA9B495_23_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19BFF140)
#define CLASS_1_0319A031DCA9B495_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BFF000)
#define CLASS_1_0319A031DCA9B495_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BFF320)
#define CLASS_1_0319A031DCA9B495_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BFF380)
#define CLASS_1_0319A031DCA9B495_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BFF730)
#define CLASS_1_0319A031DCA9B495_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BFF020)
#define CLASS_1_0319A031DCA9B495_23__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFF010)

inline static constexpr unsigned int Class_1_0319A031DCA9B495_23_TypeDefinitionIndex = 32638;

class Class_1_0319A031DCA9B495_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_23*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0319A031DCA9B495_23_TypeDefinitionIndex)->GetStaticField(0x558D0);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	::Class_1_D40936EF3BF54118_87* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0319A031DCA9B495_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_23*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_23*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0319A031DCA9B495_23* Clone()
	{
		return ((::Class_1_0319A031DCA9B495_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_87* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D40936EF3BF54118_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D40936EF3BF54118_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_87*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0319A031DCA9B495_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0319A031DCA9B495_23*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0319A031DCA9B495_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_23*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
