#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RotatableRegionLoadingState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_44EA1B6300EFA1ED_OFFSET UNITYSDK_OFFSET(0x1952DA40)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_C90460320E50CEE4_OFFSET UNITYSDK_OFFSET(0x1952D9C0)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_CCB8B5B5406629EA_OFFSET UNITYSDK_OFFSET(0x1952D7A0)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_FD8D75E4F21B545C_OFFSET UNITYSDK_OFFSET(0x1952D6D0)
#define RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1952D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRotatableRegionLoadingState_TypeDefinitionIndex = 19768;

	class ByCompareRotatableRegionLoadingState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RegionIndex; // 0x20
		::RPG::GameCore::RotatableRegionLoadingState CompareState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FD8D75E4F21B545C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_FD8D75E4F21B545C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCB8B5B5406629EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_CCB8B5B5406629EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C90460320E50CEE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_C90460320E50CEE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_44EA1B6300EFA1ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROTATABLEREGIONLOADINGSTATE_METHOD_4_44EA1B6300EFA1ED_OFFSET))(a1, a2);
		}
	};
}
