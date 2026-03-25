#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_526C2C5F58C0A6C2.h"
#include "unitysdk/RPG/GameCore/BodySize.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }
namespace UnityEngine { class Animator; }

#define CLASS_2_DDC3C2B2C534ACD4_METHOD_2_5CEF0A1AFE214F53_OFFSET UNITYSDK_OFFSET(0x104A62F0)
#define CLASS_2_DDC3C2B2C534ACD4__CTOR_OFFSET UNITYSDK_OFFSET(0x104A62D0)

inline static constexpr unsigned int Class_2_DDC3C2B2C534ACD4_TypeDefinitionIndex = 43400;

class Class_2_DDC3C2B2C534ACD4 : public ::Class_1_526C2C5F58C0A6C2
{
public:
	::RPG::GameCore::BodySize Field_2_0; // 0x50

	::System::Void _ctor(::RPG::GameCore::BodySize a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_2_DDC3C2B2C534ACD4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CEF0A1AFE214F53(::RPGTools::Timeline::CharacterStoryMoveSequenceData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveSequenceData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_DDC3C2B2C534ACD4_METHOD_2_5CEF0A1AFE214F53_OFFSET))(this, a1, a2, a3);
	}
};
