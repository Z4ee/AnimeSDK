#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_METHOD_3_6C493AE19846876F_OFFSET UNITYSDK_OFFSET(0x18DD56C0)
#define RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_METHOD_3_A43DEE9BFA5ACB9E_OFFSET UNITYSDK_OFFSET(0x18DD5740)
#define RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD5710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtRemoveStageAbilityByName_TypeDefinitionIndex = 23073;

	class RtRemoveStageAbilityByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StageAbilityName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C493AE19846876F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtRemoveStageAbilityByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtRemoveStageAbilityByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_METHOD_3_6C493AE19846876F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A43DEE9BFA5ACB9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtRemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtRemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_METHOD_3_A43DEE9BFA5ACB9E_OFFSET))(a1, a2);
		}
	};
}
