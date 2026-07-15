#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindSpecularMatStyle.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_METHOD_3_411DE49520BC0562_OFFSET UNITYSDK_OFFSET(0x1BB09570)
#define RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_METHOD_3_A9CF965C699433DF_OFFSET UNITYSDK_OFFSET(0x1BB09530)
#define RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB09560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideTimeRewindSpecularMatStyle_TypeDefinitionIndex = 19878;

	class OverrideTimeRewindSpecularMatStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::TimeRewindSpecularMatStyle Style; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A9CF965C699433DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_METHOD_3_A9CF965C699433DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_411DE49520BC0562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideTimeRewindSpecularMatStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDETIMEREWINDSPECULARMATSTYLE_METHOD_3_411DE49520BC0562_OFFSET))(a1, a2);
		}
	};
}
