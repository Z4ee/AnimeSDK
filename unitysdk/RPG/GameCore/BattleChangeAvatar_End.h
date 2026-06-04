#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_BECEB47B6BA86EDE_OFFSET UNITYSDK_OFFSET(0x194C3E20)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_F08AC525B4A9BED2_OFFSET UNITYSDK_OFFSET(0x194C3D10)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_END__CTOR_OFFSET UNITYSDK_OFFSET(0x194C3DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_End_TypeDefinitionIndex = 21538;

	class BattleChangeAvatar_End : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F08AC525B4A9BED2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_End*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_End*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_F08AC525B4A9BED2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BECEB47B6BA86EDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleChangeAvatar_End* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleChangeAvatar_End*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END_METHOD_3_BECEB47B6BA86EDE_OFFSET))(a1, a2);
		}
	};
}
