#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A85708757A0277D.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_4FA88ECF06D519C4_METHOD_2_BE1605662A82DF82_OFFSET UNITYSDK_OFFSET(0xA6470A0)
#define CLASS_2_4FA88ECF06D519C4__CTOR_OFFSET UNITYSDK_OFFSET(0xA647090)

inline static constexpr unsigned int Class_2_4FA88ECF06D519C4_TypeDefinitionIndex = 60955;

class Class_2_4FA88ECF06D519C4 : public ::Class_1_5A85708757A0277D
{
public:
	::RPG::Client::GridFightBattleGameContext* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_4FA88ECF06D519C4__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_BE1605662A82DF82(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_4FA88ECF06D519C4_METHOD_2_BE1605662A82DF82_OFFSET))(this, a1);
	}
};
