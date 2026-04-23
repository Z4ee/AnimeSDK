#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_53302C24C51CF703_OFFSET UNITYSDK_OFFSET(0x18ED7C10)
#define RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_85F0DD8309BB75B5_OFFSET UNITYSDK_OFFSET(0x18EE1620)
#define RPG_GAMECORE_TARGETFETCHABILITYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED7BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityGroup_TypeDefinitionIndex = 22902;

	class TargetFetchAbilityGroup : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_85F0DD8309BB75B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_85F0DD8309BB75B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53302C24C51CF703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYGROUP_METHOD_4_53302C24C51CF703_OFFSET))(a1, a2);
		}
	};
}
