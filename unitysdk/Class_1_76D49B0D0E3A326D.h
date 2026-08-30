#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleRoute; }

#define CLASS_1_76D49B0D0E3A326D_METHOD_1_A27184E4969EC25B_OFFSET UNITYSDK_OFFSET(0x1548FA90)
#define CLASS_1_76D49B0D0E3A326D__CTOR_OFFSET UNITYSDK_OFFSET(0x1548FBD0)

inline static constexpr unsigned int Class_1_76D49B0D0E3A326D_TypeDefinitionIndex = 63930;

class Class_1_76D49B0D0E3A326D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D49B0D0E3A326D__CTOR_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleRoute* Method_1_A27184E4969EC25B(::System::UInt32 a1)
	{
		return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76D49B0D0E3A326D_METHOD_1_A27184E4969EC25B_OFFSET))(this, a1);
	}
};
