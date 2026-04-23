#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVGROUPENTERCOMBAT_METHOD_3_B77887AE21F691A2_OFFSET UNITYSDK_OFFSET(0x186530D0)
#define RPG_GAMECORE_ADVGROUPENTERCOMBAT_METHOD_3_C590CCD336BA8855_OFFSET UNITYSDK_OFFSET(0x18653050)
#define RPG_GAMECORE_ADVGROUPENTERCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x186530A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupEnterCombat_TypeDefinitionIndex = 19525;

	class AdvGroupEnterCombat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPENTERCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C590CCD336BA8855(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupEnterCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupEnterCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPENTERCOMBAT_METHOD_3_C590CCD336BA8855_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B77887AE21F691A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupEnterCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPENTERCOMBAT_METHOD_3_B77887AE21F691A2_OFFSET))(a1, a2);
		}
	};
}
