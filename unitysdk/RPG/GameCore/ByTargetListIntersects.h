#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_5D555C30D15ED682_OFFSET UNITYSDK_OFFSET(0x1703D250)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_D977D4831AB3605C_OFFSET UNITYSDK_OFFSET(0x1703D170)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1703D1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListIntersects_TypeDefinitionIndex = 22075;

	class ByTargetListIntersects : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FirstTargetType; // 0x20
		::System::Boolean FirstTargetAliveOnly; // 0x28
		::RPG::GameCore::TargetEvaluator* SecondTargetType; // 0x30
		::System::Boolean SecondTargetAliveOnly; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D977D4831AB3605C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListIntersects*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListIntersects*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_D977D4831AB3605C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D555C30D15ED682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_METHOD_4_5D555C30D15ED682_OFFSET))(a1, a2);
		}
	};
}
