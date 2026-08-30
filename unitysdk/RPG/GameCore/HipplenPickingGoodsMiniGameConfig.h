#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }
namespace RPG::GameCore { class HipplenMiniGameGoodsConfig; }
namespace RPG::GameCore { class HipplenMiniGameGradeConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class HipplenPickingGoodsNPCConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG_METHOD_2_6B10664144C53C2B_OFFSET UNITYSDK_OFFSET(0x1D1938C0)
#define RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D193C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenPickingGoodsMiniGameConfig_TypeDefinitionIndex = 16623;

	class HipplenPickingGoodsMiniGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* GradeConfigList; // 0x10
		::System::Single HintInterval; // 0x18
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameGoodsConfig*>* InitialGoodsList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x28
		::Il2CppArray<::RPG::GameCore::HipplenPickingGoodsNPCConfig*>* NPCConfigList; // 0x30
		::RPG::GameCore::HipplenGameAtmosphereConfig* AtmosphereConfig; // 0x38
		::RPG::GameCore::HipplenMiniGameLoadCharacter* InitNpc; // 0x40
		::System::UInt32 GameTotalTime; // 0x48
		::System::Single NpcFadeInTime; // 0x4C
		::System::Single NpcFadeOutTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6B10664144C53C2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenPickingGoodsMiniGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenPickingGoodsMiniGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG_METHOD_2_6B10664144C53C2B_OFFSET))(a1, a2);
		}
	};
}
