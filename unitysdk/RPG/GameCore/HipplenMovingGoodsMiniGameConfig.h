#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }
namespace RPG::GameCore { class HipplenMiniGameGradeConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class HipplenMovingGoodsEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG_METHOD_2_5BFAB2459B2D9F9A_OFFSET UNITYSDK_OFFSET(0x19837270)
#define RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19837620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMovingGoodsMiniGameConfig_TypeDefinitionIndex = 15951;

	class HipplenMovingGoodsMiniGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* GradeConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameLoadCharacter*>* LoadCharacterList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x30
		::Il2CppArray<::RPG::GameCore::HipplenMovingGoodsEventConfig*>* EventList; // 0x38
		::System::UInt32 GameTotalTime; // 0x40
		::RPG::GameCore::HipplenGameAtmosphereConfig* AtmosphereConfig; // 0x48
		::System::UInt32 TargetGroupID; // 0x50
		::Il2CppArray<::System::String*>* TargetAnchors; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5BFAB2459B2D9F9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMovingGoodsMiniGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMovingGoodsMiniGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSMINIGAMECONFIG_METHOD_2_5BFAB2459B2D9F9A_OFFSET))(a1, a2);
		}
	};
}
