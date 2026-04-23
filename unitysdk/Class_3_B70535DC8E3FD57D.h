#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class CreateBattleEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B70535DC8E3FD57D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C15A30)
#define CLASS_3_B70535DC8E3FD57D_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET UNITYSDK_OFFSET(0x11C15820)
#define CLASS_3_B70535DC8E3FD57D_METHOD_3_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0x11C14D90)
#define CLASS_3_B70535DC8E3FD57D_METHOD_3_89F176837E56D424_OFFSET UNITYSDK_OFFSET(0x11C14FA0)
#define CLASS_3_B70535DC8E3FD57D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C14C90)
#define CLASS_3_B70535DC8E3FD57D__CTOR_OFFSET UNITYSDK_OFFSET(0x11C14B50)
#define CLASS_3_B70535DC8E3FD57D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C15AC0)

inline static constexpr unsigned int Class_3_B70535DC8E3FD57D_TypeDefinitionIndex = 53528;

class Class_3_B70535DC8E3FD57D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleEvent*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_1; // 0x28
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_3_2; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_3_B70535DC8E3FD57D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B70535DC8E3FD57D_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_89F176837E56D424(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_3_B70535DC8E3FD57D_METHOD_3_89F176837E56D424_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B70535DC8E3FD57D_METHOD_3_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B70535DC8E3FD57D_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B70535DC8E3FD57D_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B70535DC8E3FD57D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
