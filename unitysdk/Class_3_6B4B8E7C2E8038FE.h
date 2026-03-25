#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetRogueTournFloorType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B4B8E7C2E8038FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A6BC30)
#define CLASS_3_6B4B8E7C2E8038FE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6BC00)

inline static constexpr unsigned int Class_3_6B4B8E7C2E8038FE_TypeDefinitionIndex = 44427;

class Class_3_6B4B8E7C2E8038FE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetRogueTournFloorType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetRogueTournFloorType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetRogueTournFloorType*))((::PBYTE)hIl2Cpp + CLASS_3_6B4B8E7C2E8038FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B4B8E7C2E8038FE_ONTASKBEGIN_OFFSET))(this);
	}
};
