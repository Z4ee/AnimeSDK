#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CakeRaceLookAtCatByRank; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4BB7333993E4EA8B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9762D90)
#define CLASS_3_4BB7333993E4EA8B__CTOR_OFFSET UNITYSDK_OFFSET(0x9762D60)

inline static constexpr unsigned int Class_3_4BB7333993E4EA8B_TypeDefinitionIndex = 48591;

class Class_3_4BB7333993E4EA8B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CakeRaceLookAtCatByRank*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceLookAtCatByRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceLookAtCatByRank*))((::PBYTE)hIl2Cpp + CLASS_3_4BB7333993E4EA8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4BB7333993E4EA8B_ONTASKBEGIN_OFFSET))(this);
	}
};
