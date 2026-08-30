#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CreateBattleEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_778D44A66A0719FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBF1040)
#define CLASS_3_778D44A66A0719FE_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET UNITYSDK_OFFSET(0xBBF0E30)
#define CLASS_3_778D44A66A0719FE_METHOD_3_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0xBBF0450)
#define CLASS_3_778D44A66A0719FE_METHOD_3_DBFC6601BD68BC4F_OFFSET UNITYSDK_OFFSET(0xBBF0660)
#define CLASS_3_778D44A66A0719FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBF02E0)
#define CLASS_3_778D44A66A0719FE__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF0190)

inline static constexpr unsigned int Class_3_778D44A66A0719FE_TypeDefinitionIndex = 58195;

class Class_3_778D44A66A0719FE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleEvent*>
{
public:
	::Class_3_07C3C4D2990C49EE* ELCJBKPAMMH; // 0x28
	::System::Action_1<::RPG::GameCore::GameEntity*>* PBIFNCNBJAG; // 0x30
	::Class_3_07C3C4D2990C49EE* PPCPGFGKEHN; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_3_778D44A66A0719FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_778D44A66A0719FE_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_DBFC6601BD68BC4F(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_3_778D44A66A0719FE_METHOD_3_DBFC6601BD68BC4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_778D44A66A0719FE_METHOD_3_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_778D44A66A0719FE_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_778D44A66A0719FE_DISPOSE_OFFSET))(this);
	}
};
