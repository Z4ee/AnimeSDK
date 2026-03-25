#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_METHOD_3_4089FBFBD0EB76FD_OFFSET UNITYSDK_OFFSET(0x1704CD90)
#define RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_METHOD_3_ED3F8D49DF52D131_OFFSET UNITYSDK_OFFSET(0x170481F0)
#define RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170481E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceIsLockingTargetPredicateConfig_TypeDefinitionIndex = 16878;

	class CakeRaceIsLockingTargetPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4089FBFBD0EB76FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_METHOD_3_4089FBFBD0EB76FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED3F8D49DF52D131(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_METHOD_3_ED3F8D49DF52D131_OFFSET))(a1, a2);
		}
	};
}
