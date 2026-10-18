#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_329;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityConfig; }

#define CLASS_1_C0781D55218EBCF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA133F0)

inline static constexpr unsigned int Class_1_C0781D55218EBCF6_TypeDefinitionIndex = 42888;

class Class_1_C0781D55218EBCF6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_329* PFGIMMJLOHB; // 0x10
	::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x18
	::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*>* EJHODPJIFIN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0781D55218EBCF6__CTOR_OFFSET))(this);
	}
};
