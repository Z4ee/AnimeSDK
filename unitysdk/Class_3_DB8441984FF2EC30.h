#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BlockSetVisibility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DB8441984FF2EC30_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2130C0)
#define CLASS_3_DB8441984FF2EC30__CTOR_OFFSET UNITYSDK_OFFSET(0xB213090)

inline static constexpr unsigned int Class_3_DB8441984FF2EC30_TypeDefinitionIndex = 51526;

class Class_3_DB8441984FF2EC30 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BlockSetVisibility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockSetVisibility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockSetVisibility*))((::PBYTE)hIl2Cpp + CLASS_3_DB8441984FF2EC30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB8441984FF2EC30_ONTASKBEGIN_OFFSET))(this);
	}
};
