#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F158EBB544151B42;
namespace RPG::Client::ChenLingBattle { class Effect; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9D9A0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0__SYNCEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x9FA1AE0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass64_0_TypeDefinitionIndex = 70098;

	class ChenLingBattleGameSession___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::Class_1_F158EBB544151B42* effectProto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncEffect_b__0(::RPG::Client::ChenLingBattle::Effect* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Effect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS64_0__SYNCEFFECT_B__0_OFFSET))(this, x);
		}
	};
}
