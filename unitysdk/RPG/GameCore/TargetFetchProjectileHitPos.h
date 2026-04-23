#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_8E33552671733EC8_OFFSET UNITYSDK_OFFSET(0x18EE5780)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_976A10E390C1EA5A_OFFSET UNITYSDK_OFFSET(0x18EDF740)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDF6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitPos_TypeDefinitionIndex = 22913;

	class TargetFetchProjectileHitPos : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E33552671733EC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_8E33552671733EC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_976A10E390C1EA5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_976A10E390C1EA5A_OFFSET))(a1, a2);
		}
	};
}
