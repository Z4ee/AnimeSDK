#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class AttachEffectCfg; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_C843C6690DA82D5B_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x13E580B0)
#define CLASS_2_C843C6690DA82D5B_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13E581A0)
#define CLASS_2_C843C6690DA82D5B__CTOR_OFFSET UNITYSDK_OFFSET(0x13E58030)

inline static constexpr unsigned int Class_2_C843C6690DA82D5B_TypeDefinitionIndex = 54393;

class Class_2_C843C6690DA82D5B : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::AttachEffectCfg* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_C843C6690DA82D5B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_C843C6690DA82D5B_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_C843C6690DA82D5B_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
