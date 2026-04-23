#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_2915B6D09CB1D176_OFFSET UNITYSDK_OFFSET(0x18725560)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_FA2F1F8F8F8FE276_OFFSET UNITYSDK_OFFSET(0x18725490)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18725510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTimelineEntityState_TypeDefinitionIndex = 19606;

	class ByCheckTimelineEntityState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::DynamicString* StateName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FA2F1F8F8F8FE276(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimelineEntityState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimelineEntityState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_FA2F1F8F8F8FE276_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2915B6D09CB1D176(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_2915B6D09CB1D176_OFFSET))(a1, a2);
		}
	};
}
