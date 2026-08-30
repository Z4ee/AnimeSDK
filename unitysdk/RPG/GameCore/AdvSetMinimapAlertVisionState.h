#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_METHOD_3_4EA832862FE4BC25_OFFSET UNITYSDK_OFFSET(0x1CDDA8F0)
#define RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_METHOD_3_B8941B45AD77DFEF_OFFSET UNITYSDK_OFFSET(0x1CDDA970)
#define RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDA940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetMinimapAlertVisionState_TypeDefinitionIndex = 20306;

	class AdvSetMinimapAlertVisionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4EA832862FE4BC25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetMinimapAlertVisionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetMinimapAlertVisionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_METHOD_3_4EA832862FE4BC25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8941B45AD77DFEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetMinimapAlertVisionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetMinimapAlertVisionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETMINIMAPALERTVISIONSTATE_METHOD_3_B8941B45AD77DFEF_OFFSET))(a1, a2);
		}
	};
}
