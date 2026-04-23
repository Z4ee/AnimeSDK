#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_METHOD_4_CAC4DDCF92FE006A_OFFSET UNITYSDK_OFFSET(0x18EE5BD0)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_METHOD_4_FE0028A85C2F1498_OFFSET UNITYSDK_OFFSET(0x18EDFFF0)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDFFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSummonMonsters_TypeDefinitionIndex = 22934;

	class TargetFetchSummonMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CAC4DDCF92FE006A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchSummonMonsters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchSummonMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_METHOD_4_CAC4DDCF92FE006A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE0028A85C2F1498(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchSummonMonsters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_METHOD_4_FE0028A85C2F1498_OFFSET))(a1, a2);
		}
	};
}
