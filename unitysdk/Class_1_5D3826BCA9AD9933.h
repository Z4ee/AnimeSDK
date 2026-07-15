#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5D3826BCA9AD9933_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C7D4A80)
#define CLASS_1_5D3826BCA9AD9933_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7D4590)
#define CLASS_1_5D3826BCA9AD9933_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C7D4700)
#define CLASS_1_5D3826BCA9AD9933_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7D4650)
#define CLASS_1_5D3826BCA9AD9933_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7D4810)
#define CLASS_1_5D3826BCA9AD9933_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C7D4D00)
#define CLASS_1_5D3826BCA9AD9933_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C7D4C90)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C7D4610)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C7D4630)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C7D45F0)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C7D4470)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C7D4620)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C7D4640)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C7D4600)
#define CLASS_1_5D3826BCA9AD9933_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1C7D45E0)
#define CLASS_1_5D3826BCA9AD9933_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C7D44D0)
#define CLASS_1_5D3826BCA9AD9933_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7D4860)
#define CLASS_1_5D3826BCA9AD9933_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C7D48C0)
#define CLASS_1_5D3826BCA9AD9933__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7D4E00)
#define CLASS_1_5D3826BCA9AD9933__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C7D4510)
#define CLASS_1_5D3826BCA9AD9933__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D44E0)

inline static constexpr unsigned int Class_1_5D3826BCA9AD9933_TypeDefinitionIndex = 30490;

class Class_1_5D3826BCA9AD9933 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5D3826BCA9AD9933*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5D3826BCA9AD9933*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D3826BCA9AD9933_TypeDefinitionIndex)->GetStaticField(0x29E00);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D3826BCA9AD9933_TypeDefinitionIndex)->GetStaticField(0x29E08);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::UInt32 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5D3826BCA9AD9933* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D3826BCA9AD9933*))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5D3826BCA9AD9933*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5D3826BCA9AD9933*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5D3826BCA9AD9933* Clone()
	{
		return ((::Class_1_5D3826BCA9AD9933*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5D3826BCA9AD9933* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5D3826BCA9AD9933*))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5D3826BCA9AD9933* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D3826BCA9AD9933*))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5D3826BCA9AD9933_MERGEFROM_1_OFFSET))(this, a1);
	}
};
