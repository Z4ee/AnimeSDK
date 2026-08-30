#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_METHOD_3_9AED2BE873C91533_OFFSET UNITYSDK_OFFSET(0x1CDC41A0)
#define RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_METHOD_3_FD8D163508A399A4_OFFSET UNITYSDK_OFFSET(0x1CDC4260)
#define RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC4210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterSetMotionBlendTime_TypeDefinitionIndex = 20368;

	class AdvCharacterSetMotionBlendTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single RunGaitLerpTime; // 0x20
		::System::Single WalkGaitLerpTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AED2BE873C91533(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterSetMotionBlendTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterSetMotionBlendTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_METHOD_3_9AED2BE873C91533_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD8D163508A399A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterSetMotionBlendTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterSetMotionBlendTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSETMOTIONBLENDTIME_METHOD_3_FD8D163508A399A4_OFFSET))(a1, a2);
		}
	};
}
