#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphControlConfig; }
namespace RPG::GameCore { class PhotoGraphFindNpcConfig; }
namespace RPG::GameCore { class PhotoGraphHideEntityConfig; }
namespace RPG::GameCore { class PhotoGraphSetUniqueNameConfig; }
namespace RPG::GameCore { class SimpleFreeStyleConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING_METHOD_2_C0504FF537A0A1B6_OFFSET UNITYSDK_OFFSET(0x19A08450)
#define RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19A087A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphModeExtraConfigSetting_TypeDefinitionIndex = 20415;

	class PhotoGraphModeExtraConfigSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphFindNpcConfig* ShowNpc; // 0x10
		::RPG::GameCore::PhotoGraphSetUniqueNameConfig* SetEntityUniqueName; // 0x18
		::RPG::GameCore::PhotoGraphHideEntityConfig* HideEntityConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::SimpleFreeStyleConfig*>* FreeStyleConfig; // 0x28
		::RPG::GameCore::TargetEvaluator* LookAtCameraTarget; // 0x30
		::RPG::GameCore::PhotoGraphControlConfig* PlayerControlSetting; // 0x38
		::System::Boolean ShowBubbleTalk; // 0x40
		::System::Single AutoExitPreviewDialogTime; // 0x44
		::System::Boolean EnableShotNoneTarget; // 0x48
		::System::Boolean ShotHidePostProcessEffect; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C0504FF537A0A1B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHMODEEXTRACONFIGSETTING_METHOD_2_C0504FF537A0A1B6_OFFSET))(a1, a2);
		}
	};
}
