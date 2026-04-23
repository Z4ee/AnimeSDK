#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class VCameraConfig; }

#define RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG_METHOD_2_1E6BAEC96986B140_OFFSET UNITYSDK_OFFSET(0x18DC2AA0)
#define RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC2C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCharacterCameraConfig_TypeDefinitionIndex = 17136;

	class RtBattleCharacterCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraTag>* Tags; // 0x10
		::RPG::GameCore::PredicateConfig* Condition; // 0x18
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::VCameraConfig* CameraConfigAdded; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E6BAEC96986B140(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleCharacterCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleCharacterCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCAMERACONFIG_METHOD_2_1E6BAEC96986B140_OFFSET))(a1, a2);
		}
	};
}
