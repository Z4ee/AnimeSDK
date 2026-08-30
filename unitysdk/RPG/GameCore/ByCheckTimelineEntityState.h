#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_2915B6D09CB1D176_OFFSET UNITYSDK_OFFSET(0x1C3046D0)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_350893B1DC52EBF7_OFFSET UNITYSDK_OFFSET(0x1C304690)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_588AB0A949BBE14E_OFFSET UNITYSDK_OFFSET(0x1C3048A0)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_D25E117193D7A480_OFFSET UNITYSDK_OFFSET(0x1C304870)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3046C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTimelineEntityState_TypeDefinitionIndex = 20397;

	class ByCheckTimelineEntityState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::DynamicString* StateName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_350893B1DC52EBF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimelineEntityState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimelineEntityState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_350893B1DC52EBF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2915B6D09CB1D176(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_2915B6D09CB1D176_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D25E117193D7A480(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_D25E117193D7A480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_588AB0A949BBE14E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_METHOD_4_588AB0A949BBE14E_OFFSET))(a1, a2);
		}
	};
}
