#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_C25EB7B3DFD3FBB4_OFFSET UNITYSDK_OFFSET(0x198CC2A0)
#define RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_FADEB3170F8C89C1_OFFSET UNITYSDK_OFFSET(0x198CC380)
#define RPG_GAMECORE_MARBLEBYHITLEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x198CC330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByHitLeft_TypeDefinitionIndex = 16029;

	class MarbleByHitLeft : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C25EB7B3DFD3FBB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByHitLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByHitLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_C25EB7B3DFD3FBB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FADEB3170F8C89C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByHitLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByHitLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHITLEFT_METHOD_4_FADEB3170F8C89C1_OFFSET))(a1, a2);
		}
	};
}
