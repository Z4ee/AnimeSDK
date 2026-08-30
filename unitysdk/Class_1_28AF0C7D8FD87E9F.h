#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_28AF0C7D8FD87E9F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E689A90)
#define CLASS_1_28AF0C7D8FD87E9F_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6894D0)
#define CLASS_1_28AF0C7D8FD87E9F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6896D0)
#define CLASS_1_28AF0C7D8FD87E9F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E689620)
#define CLASS_1_28AF0C7D8FD87E9F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E689740)
#define CLASS_1_28AF0C7D8FD87E9F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E689D10)
#define CLASS_1_28AF0C7D8FD87E9F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E689CB0)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E689580)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E6895A0)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1E689600)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E689560)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E689400)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E689590)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E6895B0)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1E689610)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E689570)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E6895F0)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E6895D0)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E6895E0)
#define CLASS_1_28AF0C7D8FD87E9F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E6895C0)
#define CLASS_1_28AF0C7D8FD87E9F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E689460)
#define CLASS_1_28AF0C7D8FD87E9F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E689780)
#define CLASS_1_28AF0C7D8FD87E9F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6897E0)
#define CLASS_1_28AF0C7D8FD87E9F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E689DE0)
#define CLASS_1_28AF0C7D8FD87E9F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E689480)
#define CLASS_1_28AF0C7D8FD87E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1E689470)

inline static constexpr unsigned int Class_1_28AF0C7D8FD87E9F_TypeDefinitionIndex = 27488;

class Class_1_28AF0C7D8FD87E9F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28AF0C7D8FD87E9F_TypeDefinitionIndex)->GetStaticField(0x169D0);
	}
	// static const ::System::Int32 FBCFBAPNOGL = 0xE; // 0x0
	// static const ::System::Int32 FEGJODHHKKJ = 0xB; // 0x0
	// static const ::System::Int32 KNKKAJKGKOI = 0x4; // 0x0
	// static const ::System::Int32 GBBHNLJAKDO = 0xA; // 0x0
	// static const ::System::Int32 KJDBNFHNEKC = 0x1; // 0x0
	// static const ::System::Int32 KMHAHCHEEBP = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 EHCFPHJABDL; // 0x18
	::System::Boolean LFMNOJJAFOI; // 0x1C
	::System::Boolean LLHKFFKMOBK; // 0x1D
	::System::UInt32 AJPNGCJCMEB; // 0x20
	::System::UInt32 LFCMKNPJFAK; // 0x24
	::System::UInt32 ADHIIGFDPNG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_28AF0C7D8FD87E9F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_28AF0C7D8FD87E9F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_28AF0C7D8FD87E9F* Clone()
	{
		return ((::Class_1_28AF0C7D8FD87E9F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_28AF0C7D8FD87E9F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_28AF0C7D8FD87E9F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28AF0C7D8FD87E9F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
