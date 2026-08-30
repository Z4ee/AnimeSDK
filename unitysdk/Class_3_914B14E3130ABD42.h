#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForbidBattleConditionOnStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_914B14E3130ABD42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155A5020)
#define CLASS_3_914B14E3130ABD42__CTOR_OFFSET UNITYSDK_OFFSET(0x155A4FF0)

inline static constexpr unsigned int Class_3_914B14E3130ABD42_TypeDefinitionIndex = 58277;

class Class_3_914B14E3130ABD42 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForbidBattleConditionOnStart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForbidBattleConditionOnStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForbidBattleConditionOnStart*))((::PBYTE)hIl2Cpp + CLASS_3_914B14E3130ABD42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_914B14E3130ABD42_ONTASKBEGIN_OFFSET))(this);
	}
};
