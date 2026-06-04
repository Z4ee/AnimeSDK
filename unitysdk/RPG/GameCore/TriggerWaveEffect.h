#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_06FF1423D1FAE3CE_OFFSET UNITYSDK_OFFSET(0x19E20820)
#define RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_22C1E13076A1CC1F_OFFSET UNITYSDK_OFFSET(0x19E207A0)
#define RPG_GAMECORE_TRIGGERWAVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E207F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWaveEffect_TypeDefinitionIndex = 22153;

	class TriggerWaveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceTrigger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22C1E13076A1CC1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWaveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWaveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_22C1E13076A1CC1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06FF1423D1FAE3CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWaveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWaveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_06FF1423D1FAE3CE_OFFSET))(a1, a2);
		}
	};
}
