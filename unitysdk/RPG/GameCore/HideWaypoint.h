#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_254B9C2203D3A74D_OFFSET UNITYSDK_OFFSET(0x1D3E0D80)
#define RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_C51A9487C87DD81A_OFFSET UNITYSDK_OFFSET(0x1D3E0D30)
#define RPG_GAMECORE_HIDEWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E0D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideWaypoint_TypeDefinitionIndex = 20632;

	class HideWaypoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnNameBoard; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C51A9487C87DD81A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideWaypoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideWaypoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_C51A9487C87DD81A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_254B9C2203D3A74D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideWaypoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideWaypoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEWAYPOINT_METHOD_3_254B9C2203D3A74D_OFFSET))(a1, a2);
		}
	};
}
