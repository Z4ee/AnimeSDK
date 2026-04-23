#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class AnimTriggerRandomPlay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA4613B05C7BB629_METHOD_3_94915E040EE3990F_OFFSET UNITYSDK_OFFSET(0xA0434D0)
#define CLASS_3_BA4613B05C7BB629_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA0430E0)
#define CLASS_3_BA4613B05C7BB629__CTOR_OFFSET UNITYSDK_OFFSET(0xA0430B0)

inline static constexpr unsigned int Class_3_BA4613B05C7BB629_TypeDefinitionIndex = 51525;

class Class_3_BA4613B05C7BB629 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AnimTriggerRandomPlay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AnimTriggerRandomPlay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + CLASS_3_BA4613B05C7BB629__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA4613B05C7BB629_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_94915E040EE3990F(::Class_2_1DBE0E1023AFDBC5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1DBE0E1023AFDBC5*))((::PBYTE)hIl2Cpp + CLASS_3_BA4613B05C7BB629_METHOD_3_94915E040EE3990F_OFFSET))(this, a1);
	}
};
