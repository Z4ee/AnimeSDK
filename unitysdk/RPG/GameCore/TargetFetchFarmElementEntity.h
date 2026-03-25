#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8307BD6EF40BB23F_OFFSET UNITYSDK_OFFSET(0x177B5750)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8895C50C92BA7DE1_OFFSET UNITYSDK_OFFSET(0x177BEAA0)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177B5700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFarmElementEntity_TypeDefinitionIndex = 22242;

	class TargetFetchFarmElementEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8895C50C92BA7DE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8895C50C92BA7DE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8307BD6EF40BB23F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8307BD6EF40BB23F_OFFSET))(a1, a2);
		}
	};
}
