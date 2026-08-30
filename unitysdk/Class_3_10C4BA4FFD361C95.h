#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class CreateBattleEventServant; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_10C4BA4FFD361C95_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F31580)
#define CLASS_3_10C4BA4FFD361C95_METHOD_3_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0x18F31110)
#define CLASS_3_10C4BA4FFD361C95_METHOD_3_6CE27D1966F1AF3F_OFFSET UNITYSDK_OFFSET(0x18F30920)
#define CLASS_3_10C4BA4FFD361C95_METHOD_3_8D54FDC80FA22AA7_OFFSET UNITYSDK_OFFSET(0x18F31320)
#define CLASS_3_10C4BA4FFD361C95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F30700)
#define CLASS_3_10C4BA4FFD361C95__CTOR_OFFSET UNITYSDK_OFFSET(0x18F305F0)

inline static constexpr unsigned int Class_3_10C4BA4FFD361C95_TypeDefinitionIndex = 58194;

class Class_3_10C4BA4FFD361C95 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleEventServant*>
{
public:
	::Class_3_07C3C4D2990C49EE* ELCJBKPAMMH; // 0x28
	::Class_3_07C3C4D2990C49EE* PPCPGFGKEHN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventServant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventServant*))((::PBYTE)hIl2Cpp + CLASS_3_10C4BA4FFD361C95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10C4BA4FFD361C95_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_6CE27D1966F1AF3F(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::BattleGridFightAvatarData* a3, ::RPG::GameCore::StageRow* a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_3_10C4BA4FFD361C95_METHOD_3_6CE27D1966F1AF3F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_10C4BA4FFD361C95_METHOD_3_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_8D54FDC80FA22AA7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_10C4BA4FFD361C95_METHOD_3_8D54FDC80FA22AA7_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10C4BA4FFD361C95_DISPOSE_OFFSET))(this);
	}
};
