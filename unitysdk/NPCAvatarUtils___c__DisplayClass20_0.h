#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }

#define NPCAVATARUTILS___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x112703E0)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass20_0_TypeDefinitionIndex = 53550;

class NPCAvatarUtils___c__DisplayClass20_0 : public ::System::Object
{
public:
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}
};
