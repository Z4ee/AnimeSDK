#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StackRedirectSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_3E82BB27CA8DBD40_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A51590)
#define CLASS_3_3E82BB27CA8DBD40_METHOD_3_FD964A2C03CF6EC9_OFFSET UNITYSDK_OFFSET(0x17A518D0)
#define CLASS_3_3E82BB27CA8DBD40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A51660)
#define CLASS_3_3E82BB27CA8DBD40__CTOR_OFFSET UNITYSDK_OFFSET(0x17A514F0)

inline static constexpr unsigned int Class_3_3E82BB27CA8DBD40_TypeDefinitionIndex = 55840;

class Class_3_3E82BB27CA8DBD40 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackRedirectSkillTarget*>
{
public:
	::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* NOEAGBGOOMO; // 0x28
	::Class_3_07C3C4D2990C49EE* LKDIMCCENOI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackRedirectSkillTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackRedirectSkillTarget*))((::PBYTE)hIl2Cpp + CLASS_3_3E82BB27CA8DBD40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E82BB27CA8DBD40_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E82BB27CA8DBD40_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_FD964A2C03CF6EC9(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3E82BB27CA8DBD40_METHOD_3_FD964A2C03CF6EC9_OFFSET))(this, a1, a2);
	}
};
