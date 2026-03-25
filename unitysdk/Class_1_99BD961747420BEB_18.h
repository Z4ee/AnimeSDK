#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FDC070)
#define CLASS_1_99BD961747420BEB_18_CLONE_OFFSET UNITYSDK_OFFSET(0x17FDBB80)
#define CLASS_1_99BD961747420BEB_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FDBD20)
#define CLASS_1_99BD961747420BEB_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FDBC40)
#define CLASS_1_99BD961747420BEB_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FDBDD0)
#define CLASS_1_99BD961747420BEB_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FDC2E0)
#define CLASS_1_99BD961747420BEB_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FDC280)
#define CLASS_1_99BD961747420BEB_18_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17FDBC00)
#define CLASS_1_99BD961747420BEB_18_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17FDBC20)
#define CLASS_1_99BD961747420BEB_18_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FDBBE0)
#define CLASS_1_99BD961747420BEB_18_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17FDBBD0)
#define CLASS_1_99BD961747420BEB_18_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17FDBC10)
#define CLASS_1_99BD961747420BEB_18_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17FDBC30)
#define CLASS_1_99BD961747420BEB_18_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FDBBF0)
#define CLASS_1_99BD961747420BEB_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FDBA90)
#define CLASS_1_99BD961747420BEB_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FDBEE0)
#define CLASS_1_99BD961747420BEB_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FDBF40)
#define CLASS_1_99BD961747420BEB_18__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FDC3F0)
#define CLASS_1_99BD961747420BEB_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FDBAF0)
#define CLASS_1_99BD961747420BEB_18__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDBAA0)

inline static constexpr unsigned int Class_1_99BD961747420BEB_18_TypeDefinitionIndex = 24404;

class Class_1_99BD961747420BEB_18 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_18_TypeDefinitionIndex)->GetStaticField(0x37120);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::UInt32 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_18*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_18* Clone()
	{
		return ((::Class_1_99BD961747420BEB_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_18*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_18*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
