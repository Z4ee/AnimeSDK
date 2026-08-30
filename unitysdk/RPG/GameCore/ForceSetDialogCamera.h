#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_9C2337C39EC7E5E0_OFFSET UNITYSDK_OFFSET(0x1DCB1610)
#define RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_CC45134255F618A3_OFFSET UNITYSDK_OFFSET(0x1DCB15D0)
#define RPG_GAMECORE_FORCESETDIALOGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB1600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceSetDialogCamera_TypeDefinitionIndex = 20887;

	class ForceSetDialogCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC45134255F618A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceSetDialogCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceSetDialogCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_CC45134255F618A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C2337C39EC7E5E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceSetDialogCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceSetDialogCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_9C2337C39EC7E5E0_OFFSET))(a1, a2);
		}
	};
}
