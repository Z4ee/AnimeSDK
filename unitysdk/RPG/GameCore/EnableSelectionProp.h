#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_24E9F680A9D09A60_OFFSET UNITYSDK_OFFSET(0x1D7BEE60)
#define RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_BDA4EF74477F2470_OFFSET UNITYSDK_OFFSET(0x1D7BEEE0)
#define RPG_GAMECORE_ENABLESELECTIONPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BEEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSelectionProp_TypeDefinitionIndex = 21777;

	class EnableSelectionProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_24E9F680A9D09A60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSelectionProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSelectionProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_24E9F680A9D09A60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDA4EF74477F2470(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSelectionProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSelectionProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_BDA4EF74477F2470_OFFSET))(a1, a2);
		}
	};
}
