#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A59320)
#define CLASS_1_D17272E82AE804C2_CLONE_OFFSET UNITYSDK_OFFSET(0x19A58F70)
#define CLASS_1_D17272E82AE804C2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A59110)
#define CLASS_1_D17272E82AE804C2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A59060)
#define CLASS_1_D17272E82AE804C2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A59180)
#define CLASS_1_D17272E82AE804C2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A595B0)
#define CLASS_1_D17272E82AE804C2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A59560)
#define CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19A59040)
#define CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19A58FE0)
#define CLASS_1_D17272E82AE804C2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A58EC0)
#define CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19A59050)
#define CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19A58FF0)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x19A59030)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x19A59010)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x19A59020)
#define CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19A59000)
#define CLASS_1_D17272E82AE804C2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A58F20)
#define CLASS_1_D17272E82AE804C2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A591C0)
#define CLASS_1_D17272E82AE804C2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A59220)
#define CLASS_1_D17272E82AE804C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A59650)
#define CLASS_1_D17272E82AE804C2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A58F40)
#define CLASS_1_D17272E82AE804C2__CTOR_OFFSET UNITYSDK_OFFSET(0x19A58F30)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_TypeDefinitionIndex = 23858;

class Class_1_D17272E82AE804C2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_TypeDefinitionIndex)->GetStaticField(0x49860);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::UInt32 Field_1_9; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::Int32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2* Clone()
	{
		return ((::Class_1_D17272E82AE804C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
