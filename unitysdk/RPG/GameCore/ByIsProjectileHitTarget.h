#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_59977953AECFA14E_OFFSET UNITYSDK_OFFSET(0x18755DA0)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_7F861B3B4A27A120_OFFSET UNITYSDK_OFFSET(0x18755CD0)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18755D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsProjectileHitTarget_TypeDefinitionIndex = 21934;

	class ByIsProjectileHitTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7F861B3B4A27A120(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsProjectileHitTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsProjectileHitTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_7F861B3B4A27A120_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_59977953AECFA14E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_59977953AECFA14E_OFFSET))(a1, a2);
		}
	};
}
