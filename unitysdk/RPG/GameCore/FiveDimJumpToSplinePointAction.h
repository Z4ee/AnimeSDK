#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_3_1B30BD581D8577EC_OFFSET UNITYSDK_OFFSET(0x1BA9C2F0)
#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_3_E95B95F28F7531A9_OFFSET UNITYSDK_OFFSET(0x1BA9C3B0)
#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9C3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimJumpToSplinePointAction_TypeDefinitionIndex = 18022;

	class FiveDimJumpToSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PointAlias; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B30BD581D8577EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_3_1B30BD581D8577EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E95B95F28F7531A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_3_E95B95F28F7531A9_OFFSET))(a1, a2);
		}
	};
}
