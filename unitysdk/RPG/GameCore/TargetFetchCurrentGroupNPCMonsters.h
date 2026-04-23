#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_25760FD1A0312A66_OFFSET UNITYSDK_OFFSET(0x18EDC520)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_56BAB6EF1577BFA4_OFFSET UNITYSDK_OFFSET(0x18EE3CC0)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDC4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentGroupNPCMonsters_TypeDefinitionIndex = 22851;

	class TargetFetchCurrentGroupNPCMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_56BAB6EF1577BFA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_56BAB6EF1577BFA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25760FD1A0312A66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_25760FD1A0312A66_OFFSET))(a1, a2);
		}
	};
}
