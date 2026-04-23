#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/PlayerActionSet.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class InControlActionData; }
namespace System { class String; }

#define CLASS_2_559FD6C5998F578D_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x954FCB0)
#define CLASS_2_559FD6C5998F578D_METHOD_2_49A795130974090F_OFFSET UNITYSDK_OFFSET(0x954F120)
#define CLASS_2_559FD6C5998F578D_METHOD_2_6E5E314D8B7AEC0A_OFFSET UNITYSDK_OFFSET(0x954FFC0)
#define CLASS_2_559FD6C5998F578D_METHOD_2_A63B994617D9A0C9_OFFSET UNITYSDK_OFFSET(0x9550050)
#define CLASS_2_559FD6C5998F578D_METHOD_2_AD53170936E3BF3E_OFFSET UNITYSDK_OFFSET(0x954F3A0)
#define CLASS_2_559FD6C5998F578D_METHOD_2_C5D3EF14EAF64A44_OFFSET UNITYSDK_OFFSET(0x954F300)
#define CLASS_2_559FD6C5998F578D__CTOR_OFFSET UNITYSDK_OFFSET(0x954F0E0)

inline static constexpr unsigned int Class_2_559FD6C5998F578D_TypeDefinitionIndex = 56559;

class Class_2_559FD6C5998F578D : public ::InControl::PlayerActionSet
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_559FD6C5998F578D__CTOR_OFFSET))(this);
	}

	::InControl::PlayerAction* Method_2_49A795130974090F(::System::String* a1)
	{
		return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_559FD6C5998F578D_METHOD_2_49A795130974090F_OFFSET))(this, a1);
	}

	::InControl::PlayerAction* Method_2_C5D3EF14EAF64A44(::RPG::Client::InControlActionData* a1)
	{
		return ((::InControl::PlayerAction*(*)(::PVOID, ::RPG::Client::InControlActionData*))((::PBYTE)hIl2Cpp + CLASS_2_559FD6C5998F578D_METHOD_2_C5D3EF14EAF64A44_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_559FD6C5998F578D_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Boolean Method_2_6E5E314D8B7AEC0A(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_559FD6C5998F578D_METHOD_2_6E5E314D8B7AEC0A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A63B994617D9A0C9(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_559FD6C5998F578D_METHOD_2_A63B994617D9A0C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD53170936E3BF3E(::RPG::Client::InControlActionData* a1, ::InControl::PlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::InControlActionData*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_559FD6C5998F578D_METHOD_2_AD53170936E3BF3E_OFFSET))(this, a1, a2);
	}
};
