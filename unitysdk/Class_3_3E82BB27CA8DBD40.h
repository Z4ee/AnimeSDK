#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StackRedirectSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_3E82BB27CA8DBD40_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC68A10)
#define CLASS_3_3E82BB27CA8DBD40_METHOD_3_FD964A2C03CF6EC9_OFFSET UNITYSDK_OFFSET(0xAC68D70)
#define CLASS_3_3E82BB27CA8DBD40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC68A80)
#define CLASS_3_3E82BB27CA8DBD40__CTOR_OFFSET UNITYSDK_OFFSET(0xAC68970)
#define CLASS_3_3E82BB27CA8DBD40___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC68FD0)

inline static constexpr unsigned int Class_3_3E82BB27CA8DBD40_TypeDefinitionIndex = 44573;

class Class_3_3E82BB27CA8DBD40 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackRedirectSkillTarget*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_1; // 0x28
	::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* Field_3_0; // 0x30

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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E82BB27CA8DBD40___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
