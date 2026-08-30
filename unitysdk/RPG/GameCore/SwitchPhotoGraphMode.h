#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphIdentifyDisplayType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_METHOD_3_455A2DFBD33CD5BE_OFFSET UNITYSDK_OFFSET(0x1D58E1F0)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_METHOD_3_BC1FA8DF523BC277_OFFSET UNITYSDK_OFFSET(0x1D58E1A0)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58E1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchPhotoGraphMode_TypeDefinitionIndex = 20284;

	class SwitchPhotoGraphMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PhotoGraphModeType PhotoGraphMode; // 0x18
		::System::Boolean ExitWhenPreViewDialogFinish; // 0x1C
		::System::Boolean SkipPhotoPreviewDialog; // 0x1D
		::RPG::GameCore::DynamicFloat* IdentifyRadiusOverride; // 0x20
		::System::Single IdentifyMaxExitDistance; // 0x28
		::RPG::GameCore::TargetEvaluator* IdentifyLookAt; // 0x30
		::System::Single InitFov; // 0x38
		::RPG::GameCore::PhotoGraphIdentifyDisplayType IdentifyDisplayType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC1FA8DF523BC277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchPhotoGraphMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchPhotoGraphMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_METHOD_3_BC1FA8DF523BC277_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_455A2DFBD33CD5BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchPhotoGraphMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchPhotoGraphMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHMODE_METHOD_3_455A2DFBD33CD5BE_OFFSET))(a1, a2);
		}
	};
}
