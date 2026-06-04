#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAABILITYSTART_METHOD_3_6FADE5E9CEB757D4_OFFSET UNITYSDK_OFFSET(0x19633AB0)
#define RPG_GAMECORE_CHIMERAABILITYSTART_METHOD_3_C911B17D9296D5E8_OFFSET UNITYSDK_OFFSET(0x19634E20)
#define RPG_GAMECORE_CHIMERAABILITYSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x19633AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityStart_TypeDefinitionIndex = 15084;

	class ChimeraAbilityStart : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYSTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C911B17D9296D5E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYSTART_METHOD_3_C911B17D9296D5E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6FADE5E9CEB757D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYSTART_METHOD_3_6FADE5E9CEB757D4_OFFSET))(a1, a2);
		}
	};
}
