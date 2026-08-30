#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SwordTrainingSetDynamicValueByEnemyRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40B8F6155197440F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1780C350)
#define CLASS_3_40B8F6155197440F__CTOR_OFFSET UNITYSDK_OFFSET(0x1780C270)

inline static constexpr unsigned int Class_3_40B8F6155197440F_TypeDefinitionIndex = 55890;

class Class_3_40B8F6155197440F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*))((::PBYTE)hIl2Cpp + CLASS_3_40B8F6155197440F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40B8F6155197440F_ONTASKBEGIN_OFFSET))(this);
	}
};
