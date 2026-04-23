#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEnableTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DD93A7CF9E05F8EC_METHOD_3_DB6AE91A68719504_OFFSET UNITYSDK_OFFSET(0xD3A56F0)
#define CLASS_3_DD93A7CF9E05F8EC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD3A57A0)
#define CLASS_3_DD93A7CF9E05F8EC__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A56C0)

inline static constexpr unsigned int Class_3_DD93A7CF9E05F8EC_TypeDefinitionIndex = 48331;

class Class_3_DD93A7CF9E05F8EC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEnableTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_DD93A7CF9E05F8EC__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_DB6AE91A68719504()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD93A7CF9E05F8EC_METHOD_3_DB6AE91A68719504_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD93A7CF9E05F8EC_ONTASKBEGIN_OFFSET))(this);
	}
};
