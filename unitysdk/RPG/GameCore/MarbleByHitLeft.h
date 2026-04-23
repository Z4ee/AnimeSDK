#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_6F76C85F504B6F87_OFFSET UNITYSDK_OFFSET(0x18A99210)
#define RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_BB59E34F61C43D52_OFFSET UNITYSDK_OFFSET(0x18A99130)
#define RPG_GAMECORE_MARBLEBYHITLEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A991C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByHitLeft_TypeDefinitionIndex = 15979;

	class MarbleByHitLeft : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BB59E34F61C43D52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByHitLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByHitLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_BB59E34F61C43D52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F76C85F504B6F87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByHitLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByHitLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_6F76C85F504B6F87_OFFSET))(a1, a2);
		}
	};
}
