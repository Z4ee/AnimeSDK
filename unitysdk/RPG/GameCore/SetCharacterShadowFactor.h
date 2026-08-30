#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_METHOD_3_2C705EFE023C67FF_OFFSET UNITYSDK_OFFSET(0x1D4E7870)
#define RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_METHOD_3_C5350054DAFB1B1E_OFFSET UNITYSDK_OFFSET(0x1D4E7830)
#define RPG_GAMECORE_SETCHARACTERSHADOWFACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E7860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterShadowFactor_TypeDefinitionIndex = 21637;

	class SetCharacterShadowFactor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EnableFactor; // 0x18
		::System::Boolean OnlyEnableWhenUseShadowProbe; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADOWFACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5350054DAFB1B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShadowFactor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShadowFactor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_METHOD_3_C5350054DAFB1B1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C705EFE023C67FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShadowFactor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShadowFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADOWFACTOR_METHOD_3_2C705EFE023C67FF_OFFSET))(a1, a2);
		}
	};
}
