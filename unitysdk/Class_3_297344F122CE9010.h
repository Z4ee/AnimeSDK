#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployMapPoseSwitcher; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_297344F122CE9010_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18754A90)
#define CLASS_3_297344F122CE9010__CTOR_OFFSET UNITYSDK_OFFSET(0x18754A60)

inline static constexpr unsigned int Class_3_297344F122CE9010_TypeDefinitionIndex = 50585;

class Class_3_297344F122CE9010 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployMapPoseSwitcher*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployMapPoseSwitcher* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_3_297344F122CE9010__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_297344F122CE9010_ONTASKBEGIN_OFFSET))(this);
	}
};
