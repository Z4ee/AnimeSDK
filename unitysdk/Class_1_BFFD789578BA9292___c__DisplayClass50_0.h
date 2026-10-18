#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BFFD789578BA9292;
namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_1_BFFD789578BA9292___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A61B80)
#define CLASS_1_BFFD789578BA9292___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x15A61D60)

inline static constexpr unsigned int Class_1_BFFD789578BA9292___c__DisplayClass50_0_TypeDefinitionIndex = 75540;

class Class_1_BFFD789578BA9292___c__DisplayClass50_0 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* characterCtrl; // 0x10
	::Class_1_BFFD789578BA9292* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFFD789578BA9292___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void __GetOrCreateEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFFD789578BA9292___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET))(this);
	}
};
