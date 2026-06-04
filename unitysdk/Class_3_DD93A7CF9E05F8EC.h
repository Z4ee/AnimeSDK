#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEnableTrigger; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DD93A7CF9E05F8EC_METHOD_3_FE35875749051272_OFFSET UNITYSDK_OFFSET(0x143C35B0)
#define CLASS_3_DD93A7CF9E05F8EC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143C3660)
#define CLASS_3_DD93A7CF9E05F8EC__CTOR_OFFSET UNITYSDK_OFFSET(0x143C3580)

inline static constexpr unsigned int Class_3_DD93A7CF9E05F8EC_TypeDefinitionIndex = 48957;

class Class_3_DD93A7CF9E05F8EC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEnableTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_DD93A7CF9E05F8EC__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_FE35875749051272()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD93A7CF9E05F8EC_METHOD_3_FE35875749051272_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD93A7CF9E05F8EC_ONTASKBEGIN_OFFSET))(this);
	}
};
