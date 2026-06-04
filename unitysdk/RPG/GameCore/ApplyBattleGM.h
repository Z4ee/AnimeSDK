#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_APPLYBATTLEGM_METHOD_3_1CD2B66E083ECEF5_OFFSET UNITYSDK_OFFSET(0x1947C770)
#define RPG_GAMECORE_APPLYBATTLEGM_METHOD_3_C963822C35859261_OFFSET UNITYSDK_OFFSET(0x1947C660)
#define RPG_GAMECORE_APPLYBATTLEGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1947C740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyBattleGM_TypeDefinitionIndex = 22144;

	class ApplyBattleGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYBATTLEGM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C963822C35859261(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyBattleGM*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyBattleGM*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYBATTLEGM_METHOD_3_C963822C35859261_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CD2B66E083ECEF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyBattleGM* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyBattleGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYBATTLEGM_METHOD_3_1CD2B66E083ECEF5_OFFSET))(a1, a2);
		}
	};
}
