#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetTrackMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3FE98949A26FCB89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x916E630)
#define CLASS_3_3FE98949A26FCB89__CTOR_OFFSET UNITYSDK_OFFSET(0x916E600)

inline static constexpr unsigned int Class_3_3FE98949A26FCB89_TypeDefinitionIndex = 54013;

class Class_3_3FE98949A26FCB89 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetTrackMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetTrackMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetTrackMove*))((::PBYTE)hIl2Cpp + CLASS_3_3FE98949A26FCB89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FE98949A26FCB89_ONTASKBEGIN_OFFSET))(this);
	}
};
