#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SingleHitBoxConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETUPHITBOXGROUP_METHOD_3_097B2A4F7E08FE37_OFFSET UNITYSDK_OFFSET(0x19A98180)
#define RPG_GAMECORE_PROPSETUPHITBOXGROUP_METHOD_3_5207093BA1AB6923_OFFSET UNITYSDK_OFFSET(0x19A98030)
#define RPG_GAMECORE_PROPSETUPHITBOXGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A980F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupHitBoxGroup_TypeDefinitionIndex = 19251;

	class PropSetupHitBoxGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SingleHitBoxConfig*>* HitBoxConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOXGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5207093BA1AB6923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupHitBoxGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupHitBoxGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOXGROUP_METHOD_3_5207093BA1AB6923_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_097B2A4F7E08FE37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupHitBoxGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupHitBoxGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPHITBOXGROUP_METHOD_3_097B2A4F7E08FE37_OFFSET))(a1, a2);
		}
	};
}
