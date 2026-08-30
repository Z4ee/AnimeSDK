#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployPuzzleFinished; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F0594DF7E77EA2AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB81DF90)
#define CLASS_3_F0594DF7E77EA2AE__CTOR_OFFSET UNITYSDK_OFFSET(0xB81DF60)

inline static constexpr unsigned int Class_3_F0594DF7E77EA2AE_TypeDefinitionIndex = 58223;

class Class_3_F0594DF7E77EA2AE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployPuzzleFinished*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleFinished* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleFinished*))((::PBYTE)hIl2Cpp + CLASS_3_F0594DF7E77EA2AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0594DF7E77EA2AE_ONTASKBEGIN_OFFSET))(this);
	}
};
