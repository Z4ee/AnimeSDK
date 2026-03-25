#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHESSWAITALLPROJECTILEFINISH_METHOD_3_19E179B97B3F2A9F_OFFSET UNITYSDK_OFFSET(0x1708F7F0)
#define RPG_GAMECORE_CHESSWAITALLPROJECTILEFINISH_METHOD_3_4940DE28546D632B_OFFSET UNITYSDK_OFFSET(0x1708F6E0)
#define RPG_GAMECORE_CHESSWAITALLPROJECTILEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1708F7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessWaitAllProjectileFinish_TypeDefinitionIndex = 21991;

	class ChessWaitAllProjectileFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITALLPROJECTILEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4940DE28546D632B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitAllProjectileFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitAllProjectileFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITALLPROJECTILEFINISH_METHOD_3_4940DE28546D632B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19E179B97B3F2A9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessWaitAllProjectileFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessWaitAllProjectileFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSWAITALLPROJECTILEFINISH_METHOD_3_19E179B97B3F2A9F_OFFSET))(a1, a2);
		}
	};
}
