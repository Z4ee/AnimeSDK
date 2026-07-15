#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_METHOD_4_71A2A566C7B6535E_OFFSET UNITYSDK_OFFSET(0x1A89EA20)
#define RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_METHOD_4_CC3EFC543CCA409A_OFFSET UNITYSDK_OFFSET(0x1A89EA70)
#define RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89EA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueRemainMonsterNum_TypeDefinitionIndex = 20015;

	class ByCompareRogueRemainMonsterNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_71A2A566C7B6535E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRemainMonsterNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRemainMonsterNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_METHOD_4_71A2A566C7B6535E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC3EFC543CCA409A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueRemainMonsterNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueRemainMonsterNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEREMAINMONSTERNUM_METHOD_4_CC3EFC543CCA409A_OFFSET))(a1, a2);
		}
	};
}
