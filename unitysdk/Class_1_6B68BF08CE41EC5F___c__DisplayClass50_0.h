#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6B68BF08CE41EC5F;
namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_1_6B68BF08CE41EC5F___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183BCAD0)
#define CLASS_1_6B68BF08CE41EC5F___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x183BCCB0)

inline static constexpr unsigned int Class_1_6B68BF08CE41EC5F___c__DisplayClass50_0_TypeDefinitionIndex = 71933;

class Class_1_6B68BF08CE41EC5F___c__DisplayClass50_0 : public ::System::Object
{
public:
	::Class_1_6B68BF08CE41EC5F* __4__this; // 0x10
	::RPG::GameCore::AdventureCharacterController* characterCtrl; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B68BF08CE41EC5F___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void __GetOrCreateEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B68BF08CE41EC5F___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET))(this);
	}
};
