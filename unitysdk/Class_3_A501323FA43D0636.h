#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropWormCompassSetItemVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A501323FA43D0636_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97A0900)
#define CLASS_3_A501323FA43D0636__CTOR_OFFSET UNITYSDK_OFFSET(0x97A08D0)

inline static constexpr unsigned int Class_3_A501323FA43D0636_TypeDefinitionIndex = 47104;

class Class_3_A501323FA43D0636 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropWormCompassSetItemVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropWormCompassSetItemVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropWormCompassSetItemVisible*))((::PBYTE)hIl2Cpp + CLASS_3_A501323FA43D0636__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A501323FA43D0636_ONTASKBEGIN_OFFSET))(this);
	}
};
