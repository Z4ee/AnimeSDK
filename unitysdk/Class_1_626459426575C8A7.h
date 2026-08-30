#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_626459426575C8A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4BB740)

inline static constexpr unsigned int Class_1_626459426575C8A7_TypeDefinitionIndex = 40781;

class Class_1_626459426575C8A7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_626459426575C8A7_TypeDefinitionIndex)->GetStaticField(0x272A0);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_626459426575C8A7_TypeDefinitionIndex)->GetStaticField(0x272A8);
	}
	// static const ::System::Int32 BMGOFHDLJGE = 0x0; // 0x0
	// static const ::System::Int32 EIOJBDCOJBC = 0x1; // 0x0
	// static const ::System::Int32 PJEIJDEAPBL = 0x2; // 0x0
	// static const ::System::Int32 DDDJDADIPNJ = 0x3; // 0x0
	// static const ::System::Int32 NLKHKHKFCLP = 0x4; // 0x0
	// static const ::System::Int32 NEHIPFCGACA = 0x5; // 0x0
	// static const ::System::Int32 IIJAKHPONHA = 0x6; // 0x0
	// static const ::System::Int32 PCMFJIIJMMD = 0x7; // 0x0
	// static const ::System::Int32 KDHOIFFGCGI = 0x8; // 0x0
	// static const ::System::Int32 DHFEBPAFDIF = 0x9; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_626459426575C8A7__CCTOR_OFFSET))();
	}
};
