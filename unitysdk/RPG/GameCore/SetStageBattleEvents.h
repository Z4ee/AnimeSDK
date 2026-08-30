#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageBattleEventConfig; }

#define RPG_GAMECORE_SETSTAGEBATTLEEVENTS_METHOD_3_2F992C677B0DAF11_OFFSET UNITYSDK_OFFSET(0x1D50E3D0)
#define RPG_GAMECORE_SETSTAGEBATTLEEVENTS_METHOD_3_7ED315CA0E623432_OFFSET UNITYSDK_OFFSET(0x1D50E410)
#define RPG_GAMECORE_SETSTAGEBATTLEEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50E400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStageBattleEvents_TypeDefinitionIndex = 23193;

	class SetStageBattleEvents : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>* EventList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEBATTLEEVENTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F992C677B0DAF11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageBattleEvents*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageBattleEvents*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEBATTLEEVENTS_METHOD_3_2F992C677B0DAF11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7ED315CA0E623432(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageBattleEvents* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageBattleEvents*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEBATTLEEVENTS_METHOD_3_7ED315CA0E623432_OFFSET))(a1, a2);
		}
	};
}
