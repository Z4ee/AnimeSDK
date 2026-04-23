#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96F8680)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS56_0___SETUPBUFFLIST_B__0_OFFSET UNITYSDK_OFFSET(0x96F9F60)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass56_0_TypeDefinitionIndex = 65734;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass56_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* debuffs; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* buffs; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* otherBuffs; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupBuffList_b__0(::RPG::GameCore::TurnBasedModifierInstance* modifier)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS56_0___SETUPBUFFLIST_B__0_OFFSET))(this, modifier);
	}
};
