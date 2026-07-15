#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_9F8AF0482866F9DB_OFFSET UNITYSDK_OFFSET(0x1A3E40F0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_BECEB47B6BA86EDE_OFFSET UNITYSDK_OFFSET(0x1A3E41C0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_END__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E41B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_End_TypeDefinitionIndex = 21960;

	class BattleChangeAvatar_End : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F8AF0482866F9DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_End*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_End*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_9F8AF0482866F9DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BECEB47B6BA86EDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_End* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_End*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_BECEB47B6BA86EDE_OFFSET))(a1, a2);
		}
	};
}
