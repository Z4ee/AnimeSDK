#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_METHOD_3_6B7B78099502B3FA_OFFSET UNITYSDK_OFFSET(0x1D1753E0)
#define RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_METHOD_3_B97BBCA278C314DD_OFFSET UNITYSDK_OFFSET(0x1D175340)
#define RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1753A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveModifySpeed_TypeDefinitionIndex = 20775;

	class PropCurveMoveModifySpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* MoveSpeedFactor; // 0x20
		::RPG::GameCore::DynamicFloat* BlendDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B97BBCA278C314DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveModifySpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveModifySpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_METHOD_3_B97BBCA278C314DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B7B78099502B3FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveModifySpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveModifySpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVEMODIFYSPEED_METHOD_3_6B7B78099502B3FA_OFFSET))(a1, a2);
		}
	};
}
