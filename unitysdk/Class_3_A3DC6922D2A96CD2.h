#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FormationMoveSetGroupToStation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A3DC6922D2A96CD2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9846780)
#define CLASS_3_A3DC6922D2A96CD2__CTOR_OFFSET UNITYSDK_OFFSET(0x9846750)

inline static constexpr unsigned int Class_3_A3DC6922D2A96CD2_TypeDefinitionIndex = 53618;

class Class_3_A3DC6922D2A96CD2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FormationMoveSetGroupToStation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveSetGroupToStation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveSetGroupToStation*))((::PBYTE)hIl2Cpp + CLASS_3_A3DC6922D2A96CD2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DC6922D2A96CD2_ONTASKBEGIN_OFFSET))(this);
	}
};
