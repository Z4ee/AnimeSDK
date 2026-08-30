#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpticalIllusionBubble; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_010E67A6BF2DEF53_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1542B650)
#define CLASS_3_010E67A6BF2DEF53__CTOR_OFFSET UNITYSDK_OFFSET(0x1542B620)

inline static constexpr unsigned int Class_3_010E67A6BF2DEF53_TypeDefinitionIndex = 53313;

class Class_3_010E67A6BF2DEF53 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpticalIllusionBubble*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionBubble* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionBubble*))((::PBYTE)hIl2Cpp + CLASS_3_010E67A6BF2DEF53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_010E67A6BF2DEF53_ONTASKBEGIN_OFFSET))(this);
	}
};
