#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_6FB9CB31F8B2D4C3_CLEAR_OFFSET UNITYSDK_OFFSET(0x15227470)
#define CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x152277F0)
#define CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_6BD22FADB2E43BAE_OFFSET UNITYSDK_OFFSET(0x15227590)
#define CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_EA672F77F1086A27_1_OFFSET UNITYSDK_OFFSET(0x15227530)
#define CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x152274D0)
#define CLASS_1_6FB9CB31F8B2D4C3__CTOR_OFFSET UNITYSDK_OFFSET(0x15227850)

inline static constexpr unsigned int Class_1_6FB9CB31F8B2D4C3_TypeDefinitionIndex = 55911;

class Class_1_6FB9CB31F8B2D4C3 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* ONMEAPKALEO; // 0x10
	::System::Boolean MFIBFJPLCOG; // 0x18
	::RPG::GameCore::FixPoint PPBNKKKIIIN; // 0x20
	::RPG::GameCore::FixPoint EIMIIHEDKFM; // 0x28
	::RPG::GameCore::FixPoint DDAGDNNDCDI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FB9CB31F8B2D4C3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FB9CB31F8B2D4C3_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA672F77F1086A27_1(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_EA672F77F1086A27_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_6BD22FADB2E43BAE()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_6BD22FADB2E43BAE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FB9CB31F8B2D4C3_METHOD_1_6AEE51845DFA6D71_OFFSET))(this);
	}
};
