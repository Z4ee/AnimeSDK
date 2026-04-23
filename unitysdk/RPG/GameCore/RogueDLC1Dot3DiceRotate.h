#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_METHOD_3_187856E33375A83C_OFFSET UNITYSDK_OFFSET(0x18CFD6C0)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_METHOD_3_B03D0DDE513220CD_OFFSET UNITYSDK_OFFSET(0x18CFD640)
#define RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFD690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3DiceRotate_TypeDefinitionIndex = 21149;

	class RogueDLC1Dot3DiceRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StopImmediately; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B03D0DDE513220CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3DiceRotate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3DiceRotate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_METHOD_3_B03D0DDE513220CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_187856E33375A83C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3DiceRotate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3DiceRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3DICEROTATE_METHOD_3_187856E33375A83C_OFFSET))(a1, a2);
		}
	};
}
