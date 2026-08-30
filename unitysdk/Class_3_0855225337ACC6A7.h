#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetupSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0855225337ACC6A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198E9B20)
#define CLASS_3_0855225337ACC6A7__CTOR_OFFSET UNITYSDK_OFFSET(0x198E9AF0)

inline static constexpr unsigned int Class_3_0855225337ACC6A7_TypeDefinitionIndex = 58502;

class Class_3_0855225337ACC6A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetupSceneSelection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupSceneSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupSceneSelection*))((::PBYTE)hIl2Cpp + CLASS_3_0855225337ACC6A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0855225337ACC6A7_ONTASKBEGIN_OFFSET))(this);
	}
};
