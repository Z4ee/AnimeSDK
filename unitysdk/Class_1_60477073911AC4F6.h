#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_60477073911AC4F6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ABADDB0)
#define CLASS_1_60477073911AC4F6_CLONE_OFFSET UNITYSDK_OFFSET(0x1ABAD800)
#define CLASS_1_60477073911AC4F6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ABAD970)
#define CLASS_1_60477073911AC4F6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ABAD910)
#define CLASS_1_60477073911AC4F6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ABADAF0)
#define CLASS_1_60477073911AC4F6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ABADF60)
#define CLASS_1_60477073911AC4F6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ABADEF0)
#define CLASS_1_60477073911AC4F6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1ABAD8B0)
#define CLASS_1_60477073911AC4F6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ABAD890)
#define CLASS_1_60477073911AC4F6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1ABAD730)
#define CLASS_1_60477073911AC4F6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1ABAD8C0)
#define CLASS_1_60477073911AC4F6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ABAD8A0)
#define CLASS_1_60477073911AC4F6_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x1ABAD900)
#define CLASS_1_60477073911AC4F6_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1ABAD8E0)
#define CLASS_1_60477073911AC4F6_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1ABAD8F0)
#define CLASS_1_60477073911AC4F6_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1ABAD8D0)
#define CLASS_1_60477073911AC4F6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ABAD790)
#define CLASS_1_60477073911AC4F6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ABADC40)
#define CLASS_1_60477073911AC4F6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ABADCA0)
#define CLASS_1_60477073911AC4F6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABAE000)
#define CLASS_1_60477073911AC4F6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ABAD7B0)
#define CLASS_1_60477073911AC4F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAD7A0)

inline static constexpr unsigned int Class_1_60477073911AC4F6_TypeDefinitionIndex = 24163;

class Class_1_60477073911AC4F6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_60477073911AC4F6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_60477073911AC4F6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60477073911AC4F6_TypeDefinitionIndex)->GetStaticField(0x26D70);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::System::Double Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::Double Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_60477073911AC4F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60477073911AC4F6*))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_60477073911AC4F6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_60477073911AC4F6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_60477073911AC4F6* Clone()
	{
		return ((::Class_1_60477073911AC4F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_60477073911AC4F6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_60477073911AC4F6*))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_60477073911AC4F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60477073911AC4F6*))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_60477073911AC4F6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
