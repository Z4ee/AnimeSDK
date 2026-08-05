#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }

#define NPCAVATARUTILS___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x114D2D20)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass19_0_TypeDefinitionIndex = 53566;

class NPCAvatarUtils___c__DisplayClass19_0 : public ::System::Object
{
public:
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}
};
