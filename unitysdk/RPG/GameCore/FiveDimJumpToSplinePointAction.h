#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_4_99FF5C07FBA336D8_OFFSET UNITYSDK_OFFSET(0x1D6C53A0)
#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_4_AE4EF7BF24093315_OFFSET UNITYSDK_OFFSET(0x1D6C52E0)
#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimJumpToSplinePointAction_TypeDefinitionIndex = 18755;

	class FiveDimJumpToSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PointAlias; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AE4EF7BF24093315(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_4_AE4EF7BF24093315_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_99FF5C07FBA336D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_METHOD_4_99FF5C07FBA336D8_OFFSET))(a1, a2);
		}
	};
}
