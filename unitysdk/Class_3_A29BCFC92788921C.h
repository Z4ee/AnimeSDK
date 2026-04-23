#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetWolfBroAchievementData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A29BCFC92788921C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9100570)
#define CLASS_3_A29BCFC92788921C__CTOR_OFFSET UNITYSDK_OFFSET(0x9100540)

inline static constexpr unsigned int Class_3_A29BCFC92788921C_TypeDefinitionIndex = 53868;

class Class_3_A29BCFC92788921C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetWolfBroAchievementData*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetWolfBroAchievementData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetWolfBroAchievementData*))((::PBYTE)hIl2Cpp + CLASS_3_A29BCFC92788921C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A29BCFC92788921C_ONTASKBEGIN_OFFSET))(this);
	}
};
