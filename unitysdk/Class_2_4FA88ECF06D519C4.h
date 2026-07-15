#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F620E8D05780B0E8.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_4FA88ECF06D519C4_METHOD_2_BC7F78E147FB944B_OFFSET UNITYSDK_OFFSET(0x17A2CBD0)
#define CLASS_2_4FA88ECF06D519C4__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2CBC0)

inline static constexpr unsigned int Class_2_4FA88ECF06D519C4_TypeDefinitionIndex = 62268;

class Class_2_4FA88ECF06D519C4 : public ::Class_1_F620E8D05780B0E8
{
public:
	::RPG::Client::GridFightBattleGameContext* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_4FA88ECF06D519C4__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_BC7F78E147FB944B(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_4FA88ECF06D519C4_METHOD_2_BC7F78E147FB944B_OFFSET))(this, a1);
	}
};
