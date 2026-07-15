#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_METHOD_3_6E05914FB1596232_OFFSET UNITYSDK_OFFSET(0x1A3E4670)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_METHOD_3_DDC2F1D04B6D02AF_OFFSET UNITYSDK_OFFSET(0x1A3E45A0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E4660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_PreEnterStage_TypeDefinitionIndex = 21958;

	class BattleChangeAvatar_PreEnterStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDC2F1D04B6D02AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_METHOD_3_DDC2F1D04B6D02AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E05914FB1596232(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_METHOD_3_6E05914FB1596232_OFFSET))(a1, a2);
		}
	};
}
