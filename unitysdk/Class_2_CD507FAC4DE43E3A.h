#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B17C3A61CEC44E6.h"

namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_CD507FAC4DE43E3A_METHOD_2_0715EE926F8C537C_OFFSET UNITYSDK_OFFSET(0x128ECDD0)
#define CLASS_2_CD507FAC4DE43E3A__CTOR_OFFSET UNITYSDK_OFFSET(0x128ECDC0)

inline static constexpr unsigned int Class_2_CD507FAC4DE43E3A_TypeDefinitionIndex = 60020;

class Class_2_CD507FAC4DE43E3A : public ::Class_1_7B17C3A61CEC44E6
{
public:
	::RPG::Client::GridFightBattleGameContext* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightBattleGameContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + CLASS_2_CD507FAC4DE43E3A__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_0715EE926F8C537C(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_CD507FAC4DE43E3A_METHOD_2_0715EE926F8C537C_OFFSET))(this, a1);
	}
};
