#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_METHOD_3_6BC5629475AF9BD3_OFFSET UNITYSDK_OFFSET(0x1CE6BD20)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_METHOD_3_A44FC9FDE8A0B496_OFFSET UNITYSDK_OFFSET(0x1CE6BC50)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6BD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_EnterStage_TypeDefinitionIndex = 22523;

	class BattleChangeAvatar_EnterStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A44FC9FDE8A0B496(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_EnterStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_EnterStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_METHOD_3_A44FC9FDE8A0B496_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BC5629475AF9BD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_EnterStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_EnterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_METHOD_3_6BC5629475AF9BD3_OFFSET))(a1, a2);
		}
	};
}
