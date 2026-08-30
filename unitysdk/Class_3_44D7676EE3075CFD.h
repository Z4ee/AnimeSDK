#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartPropSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_44D7676EE3075CFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16261E20)
#define CLASS_3_44D7676EE3075CFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16261DF0)

inline static constexpr unsigned int Class_3_44D7676EE3075CFD_TypeDefinitionIndex = 58875;

class Class_3_44D7676EE3075CFD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartPropSceneSelection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartPropSceneSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartPropSceneSelection*))((::PBYTE)hIl2Cpp + CLASS_3_44D7676EE3075CFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44D7676EE3075CFD_ONTASKBEGIN_OFFSET))(this);
	}
};
