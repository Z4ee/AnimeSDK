#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_5F1B96F3F38B38A6_OFFSET UNITYSDK_OFFSET(0x17014FC0)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_D16853805AE457C8_OFFSET UNITYSDK_OFFSET(0x17014EF0)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17014F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueMode_TypeDefinitionIndex = 21269;

	class ByCompareRogueMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::RogueMode RogueMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D16853805AE457C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_D16853805AE457C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F1B96F3F38B38A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_METHOD_4_5F1B96F3F38B38A6_OFFSET))(a1, a2);
		}
	};
}
