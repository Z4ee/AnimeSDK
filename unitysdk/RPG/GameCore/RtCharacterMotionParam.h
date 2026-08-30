#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTCHARACTERMOTIONPARAM_METHOD_2_D4205F33CDE91B9B_OFFSET UNITYSDK_OFFSET(0x1D4995E0)
#define RPG_GAMECORE_RTCHARACTERMOTIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A57E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterMotionParam_TypeDefinitionIndex = 17439;

	class RtCharacterMotionParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint WalkSpeed; // 0x10
		::RPG::GameCore::FixPoint RunSpeed; // 0x18
		::RPG::GameCore::FixPoint FastRunSpeed; // 0x20
		::RPG::GameCore::FixPoint RunStartSpeed; // 0x28
		::RPG::GameCore::FixPoint RunStartAcc; // 0x30
		::RPG::GameCore::FixPoint RunStopSpeed; // 0x38
		::RPG::GameCore::FixPoint RunStopAcc; // 0x40
		::RPG::GameCore::FixPoint RunStartTime; // 0x48
		::RPG::GameCore::FixPoint RunStopTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERMOTIONPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D4205F33CDE91B9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCharacterMotionParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCharacterMotionParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERMOTIONPARAM_METHOD_2_D4205F33CDE91B9B_OFFSET))(a1, a2);
		}
	};
}
