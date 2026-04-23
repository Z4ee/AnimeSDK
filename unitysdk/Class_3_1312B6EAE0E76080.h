#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMonsterHUDType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1312B6EAE0E76080_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A017D0)
#define CLASS_3_1312B6EAE0E76080__CTOR_OFFSET UNITYSDK_OFFSET(0x12A017A0)

inline static constexpr unsigned int Class_3_1312B6EAE0E76080_TypeDefinitionIndex = 51206;

class Class_3_1312B6EAE0E76080 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMonsterHUDType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHUDType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHUDType*))((::PBYTE)hIl2Cpp + CLASS_3_1312B6EAE0E76080__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1312B6EAE0E76080_ONTASKBEGIN_OFFSET))(this);
	}
};
