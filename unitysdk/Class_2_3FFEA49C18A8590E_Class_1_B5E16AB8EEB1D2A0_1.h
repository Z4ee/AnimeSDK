#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_3FFEA49C18A8590E_CLASS_1_B5E16AB8EEB1D2A0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x176373D0)

inline static constexpr unsigned int Class_2_3FFEA49C18A8590E_Class_1_B5E16AB8EEB1D2A0_1_TypeDefinitionIndex = 68688;

class Class_2_3FFEA49C18A8590E_Class_1_B5E16AB8EEB1D2A0_1 : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_CLASS_1_B5E16AB8EEB1D2A0_1__CTOR_OFFSET))(this);
	}
};
