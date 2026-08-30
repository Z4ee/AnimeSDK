#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ServerPrefsType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace Google::Protobuf { class ByteString; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_564359BE60EC3253_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xB4B7720)
#define CLASS_1_564359BE60EC3253_METHOD_1_645EB903F9235220_OFFSET UNITYSDK_OFFSET(0xB4B7FE0)
#define CLASS_1_564359BE60EC3253_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB4B7740)
#define CLASS_1_564359BE60EC3253_METHOD_1_A3A0E53DF970A3C5_OFFSET UNITYSDK_OFFSET(0xB4B7890)
#define CLASS_1_564359BE60EC3253_METHOD_1_B34D6B5EC2E4D29F_OFFSET UNITYSDK_OFFSET(0xB4B79A0)
#define CLASS_1_564359BE60EC3253_METHOD_1_C3A1D7A266E0BFB1_OFFSET UNITYSDK_OFFSET(0xB4B7A90)
#define CLASS_1_564359BE60EC3253_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4B7FA0)
#define CLASS_1_564359BE60EC3253_METHOD_1_D3C1E02147B0C84A_OFFSET UNITYSDK_OFFSET(0xB4B7D40)
#define CLASS_1_564359BE60EC3253_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xB4B7F10)
#define CLASS_1_564359BE60EC3253_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xB4B7730)
#define CLASS_1_564359BE60EC3253__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B7790)

inline static constexpr unsigned int Class_1_564359BE60EC3253_TypeDefinitionIndex = 67910;

class Class_1_564359BE60EC3253 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_564359BE60EC3253*>** StaticGet_OFPDBJCHGIM()
	{
		return (::System::Action_1<::Class_1_564359BE60EC3253*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_564359BE60EC3253_TypeDefinitionIndex)->GetStaticField(0x3F550);
	}
	::System::Type* LKMFFKJHIAE; // 0x10
	::Class_1_7A22A3DBEEDD1F80* EFLEBLIIHEJ; // 0x18
	::System::String* OENAMINOLLF; // 0x20
	::RPG::GameCore::ServerPrefsType OEOFJBLFMJP; // 0x28
	::System::UInt32 MJPHEEFHDII; // 0x2C
	::System::UInt32 OGAGIKLCGPL; // 0x30
	::System::Boolean _IsDirty_k__BackingField; // 0x34

	::System::Void _ctor(::RPG::GameCore::ServerPrefsType a1, ::System::Type* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ServerPrefsType, ::System::Type*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_GET_ISDIRTY_OFFSET))(this);
	}

	::System::Void set_IsDirty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_SET_ISDIRTY_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_A3A0E53DF970A3C5(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_A3A0E53DF970A3C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B34D6B5EC2E4D29F(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_B34D6B5EC2E4D29F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3A1D7A266E0BFB1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_C3A1D7A266E0BFB1_OFFSET))(this, a1, a2);
	}

	::Google::Protobuf::ByteString* Method_1_D3C1E02147B0C84A()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_D3C1E02147B0C84A_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_645EB903F9235220(::System::Action_1<::Class_1_564359BE60EC3253*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_564359BE60EC3253*>*))((::PBYTE)hIl2Cpp + CLASS_1_564359BE60EC3253_METHOD_1_645EB903F9235220_OFFSET))(a1);
	}
};
