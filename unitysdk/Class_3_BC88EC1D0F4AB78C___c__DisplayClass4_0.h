#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3A8B05AA1BBEE81;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_3_BC88EC1D0F4AB78C___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD0C70)
#define CLASS_3_BC88EC1D0F4AB78C___C__DISPLAYCLASS4_0___PRECHECKFORCONDITION_B__0_OFFSET UNITYSDK_OFFSET(0x8AD0C80)

inline static constexpr unsigned int Class_3_BC88EC1D0F4AB78C___c__DisplayClass4_0_TypeDefinitionIndex = 44684;

class Class_3_BC88EC1D0F4AB78C___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::String* sAbilityName; // 0x10
	::RPG::GameCore::GameEntity* pAbiOwnerEntity; // 0x18
	::System::Int32 nCount; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC88EC1D0F4AB78C___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __PreCheckForCondition_b__0(::Class_1_E3A8B05AA1BBEE81* pCurInsertAbiInst)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + CLASS_3_BC88EC1D0F4AB78C___C__DISPLAYCLASS4_0___PRECHECKFORCONDITION_B__0_OFFSET))(this, pCurInsertAbiInst);
	}
};
