#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FightFestShowCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8B670B5D5AE5CD90_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179FC7F0)
#define CLASS_3_8B670B5D5AE5CD90__CTOR_OFFSET UNITYSDK_OFFSET(0x179FC7C0)

inline static constexpr unsigned int Class_3_8B670B5D5AE5CD90_TypeDefinitionIndex = 56543;

class Class_3_8B670B5D5AE5CD90 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FightFestShowCutIn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FightFestShowCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FightFestShowCutIn*))((::PBYTE)hIl2Cpp + CLASS_3_8B670B5D5AE5CD90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B670B5D5AE5CD90_ONTASKBEGIN_OFFSET))(this);
	}
};
