#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_3044E2B5E20AD379_OFFSET UNITYSDK_OFFSET(0x18EE56C0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_65D53F1DC92F7257_OFFSET UNITYSDK_OFFSET(0x18EDF5D0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDF580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitEntity_TypeDefinitionIndex = 22912;

	class TargetFetchProjectileHitEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3044E2B5E20AD379(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_3044E2B5E20AD379_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65D53F1DC92F7257(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_65D53F1DC92F7257_OFFSET))(a1, a2);
		}
	};
}
