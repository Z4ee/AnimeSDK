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

#define CLASS_1_10F56A639581CEB1_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF1CC50)
#define CLASS_1_10F56A639581CEB1_13_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF1C6C0)
#define CLASS_1_10F56A639581CEB1_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF1C830)
#define CLASS_1_10F56A639581CEB1_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF1C780)
#define CLASS_1_10F56A639581CEB1_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF1C940)
#define CLASS_1_10F56A639581CEB1_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF1CEB0)
#define CLASS_1_10F56A639581CEB1_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF1CE50)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CF1C740)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CF1C760)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CF1C710)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CF1C560)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CF1C730)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CF1C750)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CF1C770)
#define CLASS_1_10F56A639581CEB1_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CF1C720)
#define CLASS_1_10F56A639581CEB1_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF1C5C0)
#define CLASS_1_10F56A639581CEB1_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF1CA40)
#define CLASS_1_10F56A639581CEB1_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF1CAA0)
#define CLASS_1_10F56A639581CEB1_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF1CFB0)
#define CLASS_1_10F56A639581CEB1_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF1C620)
#define CLASS_1_10F56A639581CEB1_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1C5D0)

inline static constexpr unsigned int Class_1_10F56A639581CEB1_13_TypeDefinitionIndex = 27903;

class Class_1_10F56A639581CEB1_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F56A639581CEB1_13_TypeDefinitionIndex)->GetStaticField(0xA3F0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_13*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10F56A639581CEB1_13_TypeDefinitionIndex)->GetStaticField(0xA3F8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::UInt32 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_10F56A639581CEB1_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_13*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_13*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_10F56A639581CEB1_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_10F56A639581CEB1_13* Clone()
	{
		return ((::Class_1_10F56A639581CEB1_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_10F56A639581CEB1_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_10F56A639581CEB1_13*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_10F56A639581CEB1_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_13*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_10F56A639581CEB1_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
