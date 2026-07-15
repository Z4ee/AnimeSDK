#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_RTBATTLECHARACTERCONFIG_METHOD_3_53E70177D1609FB4_OFFSET UNITYSDK_OFFSET(0x1BB86E00)
#define RPG_GAMECORE_RTBATTLECHARACTERCONFIG_METHOD_3_9FFE49F6BD516DAB_OFFSET UNITYSDK_OFFSET(0x1BB86CE0)
#define RPG_GAMECORE_RTBATTLECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB86D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCharacterConfig_TypeDefinitionIndex = 17308;

	class RtBattleCharacterConfig : public ::RPG::GameCore::RtCharacterConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>* CameraConfigList; // 0x100
		::RPG::GameCore::ValueEvaluatorConfig* BornGridEvaluator; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FFE49F6BD516DAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCONFIG_METHOD_3_9FFE49F6BD516DAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53E70177D1609FB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleCharacterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLECHARACTERCONFIG_METHOD_3_53E70177D1609FB4_OFFSET))(a1, a2);
		}
	};
}
