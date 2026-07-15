#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_5B0832D98183AE98_OFFSET UNITYSDK_OFFSET(0x1BA094F0)
#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_7542D13DC033961A_OFFSET UNITYSDK_OFFSET(0x1BA09550)
#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA09560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerActionConfigBase_TypeDefinitionIndex = 18800;

	class PlayerActionConfigBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5B0832D98183AE98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_5B0832D98183AE98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7542D13DC033961A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE_METHOD_4_7542D13DC033961A_OFFSET))(a1, a2);
		}
	};
}
