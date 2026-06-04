#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6659C5C004EC1381;
class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_E00612EF74950BC6_METHOD_1_32A2172E1E5FD2AE_OFFSET UNITYSDK_OFFSET(0xA7E0720)
#define CLASS_1_E00612EF74950BC6_METHOD_1_6945E0FD6845CDEF_OFFSET UNITYSDK_OFFSET(0xA7E06C0)
#define CLASS_1_E00612EF74950BC6_METHOD_1_92129EB3CB5C94A7_OFFSET UNITYSDK_OFFSET(0xA7E0610)
#define CLASS_1_E00612EF74950BC6_METHOD_1_EA8DCE39D3E94AE7_OFFSET UNITYSDK_OFFSET(0xA7E0830)
#define CLASS_1_E00612EF74950BC6__CTOR_OFFSET UNITYSDK_OFFSET(0xA7E0890)

inline static constexpr unsigned int Class_1_E00612EF74950BC6_TypeDefinitionIndex = 66878;

class Class_1_E00612EF74950BC6 : public ::System::Object
{
public:
	::Class_1_6659C5C004EC1381* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E00612EF74950BC6__CTOR_OFFSET))(this);
	}

	::Class_1_95EEF67A826E14FF* Method_1_92129EB3CB5C94A7(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_E00612EF74950BC6_METHOD_1_92129EB3CB5C94A7_OFFSET))(this, a1);
	}

	::Class_1_95EEF67A826E14FF* Method_1_32A2172E1E5FD2AE(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_1_E00612EF74950BC6_METHOD_1_32A2172E1E5FD2AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6945E0FD6845CDEF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_E00612EF74950BC6_METHOD_1_6945E0FD6845CDEF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EA8DCE39D3E94AE7(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_1_E00612EF74950BC6_METHOD_1_EA8DCE39D3E94AE7_OFFSET))(this, a1);
	}
};
