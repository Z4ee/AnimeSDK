#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_794C130D10C15C99_OFFSET UNITYSDK_OFFSET(0x189298E0)
#define RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_9C2337C39EC7E5E0_OFFSET UNITYSDK_OFFSET(0x18929960)
#define RPG_GAMECORE_FORCESETDIALOGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18929930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceSetDialogCamera_TypeDefinitionIndex = 20108;

	class ForceSetDialogCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_794C130D10C15C99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceSetDialogCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceSetDialogCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_794C130D10C15C99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C2337C39EC7E5E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceSetDialogCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceSetDialogCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESETDIALOGCAMERA_METHOD_3_9C2337C39EC7E5E0_OFFSET))(a1, a2);
		}
	};
}
