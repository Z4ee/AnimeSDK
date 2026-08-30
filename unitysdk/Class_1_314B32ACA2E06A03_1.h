#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_314B32ACA2E06A03_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B89A0)
#define CLASS_1_314B32ACA2E06A03_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B8460)
#define CLASS_1_314B32ACA2E06A03_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B8520)
#define CLASS_1_314B32ACA2E06A03_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B84F0)
#define CLASS_1_314B32ACA2E06A03_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B8710)
#define CLASS_1_314B32ACA2E06A03_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B8AC0)
#define CLASS_1_314B32ACA2E06A03_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B8A70)
#define CLASS_1_314B32ACA2E06A03_1_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1E1B84B0)
#define CLASS_1_314B32ACA2E06A03_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E1B83D0)
#define CLASS_1_314B32ACA2E06A03_1_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1E1B84E0)
#define CLASS_1_314B32ACA2E06A03_1_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1E1B84D0)
#define CLASS_1_314B32ACA2E06A03_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1E1B84C0)
#define CLASS_1_314B32ACA2E06A03_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8400)
#define CLASS_1_314B32ACA2E06A03_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B8830)
#define CLASS_1_314B32ACA2E06A03_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B8890)
#define CLASS_1_314B32ACA2E06A03_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8C40)
#define CLASS_1_314B32ACA2E06A03_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B8420)
#define CLASS_1_314B32ACA2E06A03_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8410)

inline static constexpr unsigned int Class_1_314B32ACA2E06A03_1_TypeDefinitionIndex = 32615;

class Class_1_314B32ACA2E06A03_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_314B32ACA2E06A03_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_314B32ACA2E06A03_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_314B32ACA2E06A03_1_TypeDefinitionIndex)->GetStaticField(0x2D3A0);
	}
	// static const ::System::Int32 LCFKBENEJBM = 0x2; // 0x0
	// static const ::System::Int32 PODKPKOCLFH = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Int32 LFCNOIPGGGI; // 0x18
	::System::Single PKLCIBNJKDN; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_314B32ACA2E06A03_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_314B32ACA2E06A03_1*))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_314B32ACA2E06A03_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_314B32ACA2E06A03_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_314B32ACA2E06A03_1* Clone()
	{
		return ((::Class_1_314B32ACA2E06A03_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_CLONE_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_314B32ACA2E06A03_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_314B32ACA2E06A03_1*))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_314B32ACA2E06A03_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_314B32ACA2E06A03_1*))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
