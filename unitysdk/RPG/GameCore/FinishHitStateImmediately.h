#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_19765CAD45C06517_OFFSET UNITYSDK_OFFSET(0x1BA81BE0)
#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_8DA56A8337928C5C_OFFSET UNITYSDK_OFFSET(0x1BA81BA0)
#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA81BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishHitStateImmediately_TypeDefinitionIndex = 22615;

	class FinishHitStateImmediately : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8DA56A8337928C5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishHitStateImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishHitStateImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_8DA56A8337928C5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19765CAD45C06517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishHitStateImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishHitStateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_19765CAD45C06517_OFFSET))(a1, a2);
		}
	};
}
