#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_CBC61A8A9CF53D82_OFFSET UNITYSDK_OFFSET(0x1D34E4C0)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_DCABBC680DD0F634_OFFSET UNITYSDK_OFFSET(0x1D34E520)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34E530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondConfigBase_TypeDefinitionIndex = 19329;

	class PlayerCondConfigBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CBC61A8A9CF53D82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_CBC61A8A9CF53D82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DCABBC680DD0F634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_4_DCABBC680DD0F634_OFFSET))(a1, a2);
		}
	};
}
