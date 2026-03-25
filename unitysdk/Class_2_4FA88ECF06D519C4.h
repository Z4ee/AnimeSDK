#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F14F05C7810148.h"

namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_4FA88ECF06D519C4_METHOD_2_A86A6FCA8D0A7015_OFFSET UNITYSDK_OFFSET(0x110CA9C0)
#define CLASS_2_4FA88ECF06D519C4__CTOR_OFFSET UNITYSDK_OFFSET(0x110CA9B0)

inline static constexpr unsigned int Class_2_4FA88ECF06D519C4_TypeDefinitionIndex = 52939;

class Class_2_4FA88ECF06D519C4 : public ::Class_1_48F14F05C7810148
{
public:
	::RPG::Client::GridFightBattleGameContext* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_4FA88ECF06D519C4__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_A86A6FCA8D0A7015(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_4FA88ECF06D519C4_METHOD_2_A86A6FCA8D0A7015_OFFSET))(this, a1);
	}
};
