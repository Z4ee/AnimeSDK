#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_254B9C2203D3A74D_OFFSET UNITYSDK_OFFSET(0x172AB390)
#define RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_9B933442F1BD1491_OFFSET UNITYSDK_OFFSET(0x172AB310)
#define RPG_GAMECORE_HIDEWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x172AB360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideWaypoint_TypeDefinitionIndex = 19197;

	class HideWaypoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnNameBoard; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B933442F1BD1491(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideWaypoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideWaypoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_9B933442F1BD1491_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_254B9C2203D3A74D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideWaypoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideWaypoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_254B9C2203D3A74D_OFFSET))(a1, a2);
		}
	};
}
