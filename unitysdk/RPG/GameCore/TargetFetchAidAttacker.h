#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_5064AA45E7DA9AA7_OFFSET UNITYSDK_OFFSET(0x177BCAD0)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_F29601CF457A7449_OFFSET UNITYSDK_OFFSET(0x177B1EA0)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x177B1E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidAttacker_TypeDefinitionIndex = 22282;

	class TargetFetchAidAttacker : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5064AA45E7DA9AA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_5064AA45E7DA9AA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F29601CF457A7449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_F29601CF457A7449_OFFSET))(a1, a2);
		}
	};
}
