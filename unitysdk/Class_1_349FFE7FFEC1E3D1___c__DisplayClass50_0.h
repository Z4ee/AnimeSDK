#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_349FFE7FFEC1E3D1;
namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_1_349FFE7FFEC1E3D1___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F65720)
#define CLASS_1_349FFE7FFEC1E3D1___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x18F658F0)

inline static constexpr unsigned int Class_1_349FFE7FFEC1E3D1___c__DisplayClass50_0_TypeDefinitionIndex = 75239;

class Class_1_349FFE7FFEC1E3D1___c__DisplayClass50_0 : public ::System::Object
{
public:
	::Class_1_349FFE7FFEC1E3D1* __4__this; // 0x10
	::RPG::GameCore::AdventureCharacterController* characterCtrl; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void __GetOrCreateEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_349FFE7FFEC1E3D1___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET))(this);
	}
};
