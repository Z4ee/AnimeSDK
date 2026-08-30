#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9AD828BA811E7C7A_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D8263E0)
#define CLASS_1_9AD828BA811E7C7A_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1D825E00)
#define CLASS_1_9AD828BA811E7C7A_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D826020)
#define CLASS_1_9AD828BA811E7C7A_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D825F10)
#define CLASS_1_9AD828BA811E7C7A_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D826130)
#define CLASS_1_9AD828BA811E7C7A_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D826580)
#define CLASS_1_9AD828BA811E7C7A_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D826530)
#define CLASS_1_9AD828BA811E7C7A_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D825EF0)
#define CLASS_1_9AD828BA811E7C7A_2_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1D825E90)
#define CLASS_1_9AD828BA811E7C7A_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D825CF0)
#define CLASS_1_9AD828BA811E7C7A_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D825F00)
#define CLASS_1_9AD828BA811E7C7A_2_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1D825EA0)
#define CLASS_1_9AD828BA811E7C7A_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D825D20)
#define CLASS_1_9AD828BA811E7C7A_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D826260)
#define CLASS_1_9AD828BA811E7C7A_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D8262C0)
#define CLASS_1_9AD828BA811E7C7A_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D826730)
#define CLASS_1_9AD828BA811E7C7A_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D825D80)
#define CLASS_1_9AD828BA811E7C7A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D825D30)

inline static constexpr unsigned int Class_1_9AD828BA811E7C7A_2_TypeDefinitionIndex = 33502;

class Class_1_9AD828BA811E7C7A_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD828BA811E7C7A_2_TypeDefinitionIndex)->GetStaticField(0x16170);
	}
	// static const ::System::Int32 BFJOJJHJAIJ = 0x5; // 0x0
	// static const ::System::Int32 CFBDEAHMPKF = 0x2; // 0x0
	::Google::Protobuf::ByteString* CMDGAIOLHKP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 AIMBCOMFKMN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_2* Clone()
	{
		return ((::Class_1_9AD828BA811E7C7A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
