#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_526C2C5F58C0A6C2.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }
namespace UnityEngine { class Animator; }

#define CLASS_2_F205A6FFC05DDE51_METHOD_2_5CEF0A1AFE214F53_OFFSET UNITYSDK_OFFSET(0x17AC4270)
#define CLASS_2_F205A6FFC05DDE51__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC4250)

inline static constexpr unsigned int Class_2_F205A6FFC05DDE51_TypeDefinitionIndex = 53833;

class Class_2_F205A6FFC05DDE51 : public ::Class_1_526C2C5F58C0A6C2
{
public:
	::RPG::GameCore::NPCBodySize GHCIJGJGFFL; // 0x50

	::System::Void _ctor(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_2_F205A6FFC05DDE51__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CEF0A1AFE214F53(::RPGTools::Timeline::CharacterStoryMoveSequenceData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveSequenceData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_F205A6FFC05DDE51_METHOD_2_5CEF0A1AFE214F53_OFFSET))(this, a1, a2, a3);
	}
};
