#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMoveParamModifierFloat; }

#define RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_METHOD_3_23FC67182FF076BD_OFFSET UNITYSDK_OFFSET(0x1D871DF0)
#define RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_METHOD_3_DEBB82FD6CE9A288_OFFSET UNITYSDK_OFFSET(0x1D871E30)
#define RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D871E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerMoveModifierConfig_TypeDefinitionIndex = 18337;

	class FiveDimPlayerMoveModifierConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Modify; // 0x10
		::RPG::GameCore::FiveDimMoveParamModifierFloat* MaxSpeedMultiplier; // 0x18
		::RPG::GameCore::FiveDimMoveParamModifierFloat* AccDuration; // 0x20
		::RPG::GameCore::FiveDimMoveParamModifierFloat* BrakeDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23FC67182FF076BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_METHOD_3_23FC67182FF076BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEBB82FD6CE9A288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerMoveModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERMOVEMODIFIERCONFIG_METHOD_3_DEBB82FD6CE9A288_OFFSET))(a1, a2);
		}
	};
}
