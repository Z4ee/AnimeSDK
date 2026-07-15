#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetCharacterVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_174791505DC74295_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17ADD650)
#define CLASS_2_174791505DC74295_METHOD_2_0D96E0AD0A6D6298_OFFSET UNITYSDK_OFFSET(0x17ADD870)
#define CLASS_2_174791505DC74295_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17ADD690)
#define CLASS_2_174791505DC74295_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17ADD900)
#define CLASS_2_174791505DC74295_TICK_OFFSET UNITYSDK_OFFSET(0x17ADD950)
#define CLASS_2_174791505DC74295__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD640)

inline static constexpr unsigned int Class_2_174791505DC74295_TypeDefinitionIndex = 53865;

class Class_2_174791505DC74295 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetCharacterVisible* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterVisible*))((::PBYTE)hIl2Cpp + CLASS_2_174791505DC74295__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174791505DC74295_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174791505DC74295_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_0D96E0AD0A6D6298(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_174791505DC74295_METHOD_2_0D96E0AD0A6D6298_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_174791505DC74295_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_174791505DC74295_TICK_OFFSET))(this, a1);
	}
};
