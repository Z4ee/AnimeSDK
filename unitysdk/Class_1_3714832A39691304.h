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

#define CLASS_1_3714832A39691304_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB14350)
#define CLASS_1_3714832A39691304_CLONE_OFFSET UNITYSDK_OFFSET(0x1CB139D0)
#define CLASS_1_3714832A39691304_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB13B30)
#define CLASS_1_3714832A39691304_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB13AD0)
#define CLASS_1_3714832A39691304_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB13DB0)
#define CLASS_1_3714832A39691304_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB14610)
#define CLASS_1_3714832A39691304_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB14570)
#define CLASS_1_3714832A39691304_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CB13A90)
#define CLASS_1_3714832A39691304_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CB13AB0)
#define CLASS_1_3714832A39691304_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CB13A20)
#define CLASS_1_3714832A39691304_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CB13860)
#define CLASS_1_3714832A39691304_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CB13AA0)
#define CLASS_1_3714832A39691304_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CB13AC0)
#define CLASS_1_3714832A39691304_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CB13A30)
#define CLASS_1_3714832A39691304_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x1CB13A70)
#define CLASS_1_3714832A39691304_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1CB13A50)
#define CLASS_1_3714832A39691304_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1CB13A60)
#define CLASS_1_3714832A39691304_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1CB13A40)
#define CLASS_1_3714832A39691304_METHOD_1_F64A1871C5AC5ACE_OFFSET UNITYSDK_OFFSET(0x1CB13A80)
#define CLASS_1_3714832A39691304_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CB138C0)
#define CLASS_1_3714832A39691304_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB14020)
#define CLASS_1_3714832A39691304_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB14080)
#define CLASS_1_3714832A39691304__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB14740)
#define CLASS_1_3714832A39691304__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB13920)
#define CLASS_1_3714832A39691304__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB138D0)

inline static constexpr unsigned int Class_1_3714832A39691304_TypeDefinitionIndex = 24721;

class Class_1_3714832A39691304 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3714832A39691304_TypeDefinitionIndex)->GetStaticField(0x414A0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3714832A39691304_TypeDefinitionIndex)->GetStaticField(0x414A8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::System::Double Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30
	::System::Double Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3714832A39691304* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3714832A39691304*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3714832A39691304*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3714832A39691304* Clone()
	{
		return ((::Class_1_3714832A39691304*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Method_1_F64A1871C5AC5ACE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_F64A1871C5AC5ACE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3714832A39691304* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3714832A39691304*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3714832A39691304* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3714832A39691304*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3714832A39691304_MERGEFROM_1_OFFSET))(this, a1);
	}
};
