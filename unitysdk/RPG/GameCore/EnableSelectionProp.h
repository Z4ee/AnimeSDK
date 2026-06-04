#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_33A7BE17688EDE56_OFFSET UNITYSDK_OFFSET(0x196E5CC0)
#define RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_BDA4EF74477F2470_OFFSET UNITYSDK_OFFSET(0x196E5E10)
#define RPG_GAMECORE_ENABLESELECTIONPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x196E5D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSelectionProp_TypeDefinitionIndex = 20802;

	class EnableSelectionProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33A7BE17688EDE56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSelectionProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSelectionProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_33A7BE17688EDE56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDA4EF74477F2470(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSelectionProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSelectionProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESELECTIONPROP_METHOD_3_BDA4EF74477F2470_OFFSET))(a1, a2);
		}
	};
}
