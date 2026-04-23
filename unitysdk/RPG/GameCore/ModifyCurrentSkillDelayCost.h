#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_METHOD_3_00F9537B5A3E3C65_OFFSET UNITYSDK_OFFSET(0x18B38100)
#define RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_METHOD_3_9B205BA7E02E8B0C_OFFSET UNITYSDK_OFFSET(0x18B38070)
#define RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x18B380D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCurrentSkillDelayCost_TypeDefinitionIndex = 21603;

	class ModifyCurrentSkillDelayCost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NormalizedValue; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B205BA7E02E8B0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCurrentSkillDelayCost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCurrentSkillDelayCost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_METHOD_3_9B205BA7E02E8B0C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00F9537B5A3E3C65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCurrentSkillDelayCost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCurrentSkillDelayCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURRENTSKILLDELAYCOST_METHOD_3_00F9537B5A3E3C65_OFFSET))(a1, a2);
		}
	};
}
