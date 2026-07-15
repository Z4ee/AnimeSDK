#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointEvaluatorByDistanceConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_POINTDISTANCEEVALUATOR_METHOD_4_9AD68440421D46B6_OFFSET UNITYSDK_OFFSET(0x1BA12C90)
#define RPG_GAMECORE_POINTDISTANCEEVALUATOR_METHOD_4_9DB589771B0AE169_OFFSET UNITYSDK_OFFSET(0x1BA12CE0)
#define RPG_GAMECORE_POINTDISTANCEEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA12CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointDistanceEvaluator_TypeDefinitionIndex = 15022;

	class PointDistanceEvaluator : public ::RPG::GameCore::PointEvaluatorByDistanceConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTDISTANCEEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9AD68440421D46B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointDistanceEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointDistanceEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTDISTANCEEVALUATOR_METHOD_4_9AD68440421D46B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DB589771B0AE169(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointDistanceEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointDistanceEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTDISTANCEEVALUATOR_METHOD_4_9DB589771B0AE169_OFFSET))(a1, a2);
		}
	};
}
