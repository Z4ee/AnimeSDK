#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RotatableRegionLoadingState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_8A1789E91CA00C3B_OFFSET UNITYSDK_OFFSET(0x1CEF7A90)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_9C9A3D24403A53D5_OFFSET UNITYSDK_OFFSET(0x1CEF7CF0)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_B8BEA7E4BC5A0852_OFFSET UNITYSDK_OFFSET(0x1CEF7D20)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_CCB8B5B5406629EA_OFFSET UNITYSDK_OFFSET(0x1CEF7AD0)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF7AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRotatableRegionLoadingState_TypeDefinitionIndex = 20675;

	class ByCompareRotatableRegionLoadingState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RegionIndex; // 0x20
		::RPG::GameCore::RotatableRegionLoadingState CompareState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A1789E91CA00C3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_8A1789E91CA00C3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCB8B5B5406629EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_CCB8B5B5406629EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C9A3D24403A53D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_9C9A3D24403A53D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8BEA7E4BC5A0852(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_B8BEA7E4BC5A0852_OFFSET))(a1, a2);
		}
	};
}
