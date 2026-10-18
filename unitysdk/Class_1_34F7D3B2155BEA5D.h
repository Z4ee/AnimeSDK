#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1361;
class Class_0_16E4307DCC419505_1362;
class Class_1_CC5989D0025C57AE;
namespace RPG::Client::BlindBox::Pool { class BlindBoxPool; }
namespace System { class String; }

#define CLASS_1_34F7D3B2155BEA5D_METHOD_1_0EE0E75A50EA0EA8_OFFSET UNITYSDK_OFFSET(0x155AB0C0)
#define CLASS_1_34F7D3B2155BEA5D_METHOD_1_185D55CC55C77DBE_OFFSET UNITYSDK_OFFSET(0x155AA920)
#define CLASS_1_34F7D3B2155BEA5D__CCTOR_OFFSET UNITYSDK_OFFSET(0x155AB230)
#define CLASS_1_34F7D3B2155BEA5D__CTOR_OFFSET UNITYSDK_OFFSET(0x155AA890)

inline static constexpr unsigned int Class_1_34F7D3B2155BEA5D_TypeDefinitionIndex = 74910;

class Class_1_34F7D3B2155BEA5D : public ::System::Object
{
public:
	static ::RPG::Client::TextID* StaticGet_FLAIOKFKFEJ()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_34F7D3B2155BEA5D_TypeDefinitionIndex)->GetStaticField(0x12200);
	}
	static ::RPG::Client::TextID* StaticGet_HCINJBEFNIA()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_34F7D3B2155BEA5D_TypeDefinitionIndex)->GetStaticField(0x12210);
	}
	static ::RPG::Client::TextID* StaticGet_FDKPMNKMEBE()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_34F7D3B2155BEA5D_TypeDefinitionIndex)->GetStaticField(0x12220);
	}
	::Class_0_16E4307DCC419505_1361* KHNOPFEHCBP; // 0x10
	::Class_0_16E4307DCC419505_1362* POKJONGDBGC; // 0x18
	::System::UInt32 NFMDGJAEEFD; // 0x20
	::System::UInt32 LOHKJHKONCO; // 0x24
	::System::UInt32 KCBFECAKIFD; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_0_16E4307DCC419505_1362* a4, ::Class_0_16E4307DCC419505_1361* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_1362*, ::Class_0_16E4307DCC419505_1361*))((::PBYTE)hIl2Cpp + CLASS_1_34F7D3B2155BEA5D__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34F7D3B2155BEA5D__CCTOR_OFFSET))();
	}

	::RPG::Client::BlindBox::Pool::BlindBoxPool* Method_1_185D55CC55C77DBE(::System::UInt32 a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4)
	{
		return ((::RPG::Client::BlindBox::Pool::BlindBoxPool*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_34F7D3B2155BEA5D_METHOD_1_185D55CC55C77DBE_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_1_CC5989D0025C57AE* Method_1_0EE0E75A50EA0EA8(::System::UInt32 a1)
	{
		return ((::Class_1_CC5989D0025C57AE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34F7D3B2155BEA5D_METHOD_1_0EE0E75A50EA0EA8_OFFSET))(a1);
	}
};
