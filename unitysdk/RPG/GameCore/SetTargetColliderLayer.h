#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETCOLLIDERLAYER_METHOD_3_54533BB757908E07_OFFSET UNITYSDK_OFFSET(0x18E44920)
#define RPG_GAMECORE_SETTARGETCOLLIDERLAYER_METHOD_3_DCD2EEC32B6CD459_OFFSET UNITYSDK_OFFSET(0x18E44A70)
#define RPG_GAMECORE_SETTARGETCOLLIDERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E449E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetColliderLayer_TypeDefinitionIndex = 21043;

	class SetTargetColliderLayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* ColliderName; // 0x20
		::RPG::GameCore::DynamicString* LayerName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCOLLIDERLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54533BB757908E07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetColliderLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetColliderLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCOLLIDERLAYER_METHOD_3_54533BB757908E07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCD2EEC32B6CD459(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetColliderLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetColliderLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCOLLIDERLAYER_METHOD_3_DCD2EEC32B6CD459_OFFSET))(a1, a2);
		}
	};
}
