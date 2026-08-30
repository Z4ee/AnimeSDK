#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_06FF1423D1FAE3CE_OFFSET UNITYSDK_OFFSET(0x1D29BA30)
#define RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_D8BF12F4BA1A040D_OFFSET UNITYSDK_OFFSET(0x1D29B9F0)
#define RPG_GAMECORE_TRIGGERWAVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29BA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWaveEffect_TypeDefinitionIndex = 23167;

	class TriggerWaveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceTrigger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8BF12F4BA1A040D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWaveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWaveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_D8BF12F4BA1A040D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06FF1423D1FAE3CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWaveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWaveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT_METHOD_3_06FF1423D1FAE3CE_OFFSET))(a1, a2);
		}
	};
}
