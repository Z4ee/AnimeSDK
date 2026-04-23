#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class ParkourGameAddPlayerSkillPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65FC5FD0A49F19ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117A3C20)
#define CLASS_3_65FC5FD0A49F19ED__CTOR_OFFSET UNITYSDK_OFFSET(0x117A3BF0)

inline static constexpr unsigned int Class_3_65FC5FD0A49F19ED_TypeDefinitionIndex = 48927;

class Class_3_65FC5FD0A49F19ED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::ParkourGameAddPlayerSkillPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ParkourGameAddPlayerSkillPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ParkourGameAddPlayerSkillPoint*))((::PBYTE)hIl2Cpp + CLASS_3_65FC5FD0A49F19ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65FC5FD0A49F19ED_ONTASKBEGIN_OFFSET))(this);
	}
};
