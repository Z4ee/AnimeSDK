#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropSoundConfig; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace RPG::GameCore { class UnitHintTriggerConfig; }

#define RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG_METHOD_2_D1AE0BDFC6DA422C_OFFSET UNITYSDK_OFFSET(0x18EB52A0)
#define RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB7350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitTriggerConfig_TypeDefinitionIndex = 16702;

	class SummonUnitTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::UnitHintTriggerConfig* HintTrigger; // 0x10
		::RPG::GameCore::PropSoundConfig* SoundTrigger; // 0x18
		::Il2CppArray<::RPG::GameCore::UnitCustomTriggerConfig*>* CustomTriggers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1AE0BDFC6DA422C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitTriggerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitTriggerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITTRIGGERCONFIG_METHOD_2_D1AE0BDFC6DA422C_OFFSET))(a1, a2);
		}
	};
}
