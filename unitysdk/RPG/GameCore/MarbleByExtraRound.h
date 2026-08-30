#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_14457676981201E0_OFFSET UNITYSDK_OFFSET(0x1D230720)
#define RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_4A59D33D54F7B019_OFFSET UNITYSDK_OFFSET(0x1D2306C0)
#define RPG_GAMECORE_MARBLEBYEXTRAROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D230710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByExtraRound_TypeDefinitionIndex = 16702;

	class MarbleByExtraRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A59D33D54F7B019(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByExtraRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByExtraRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_4A59D33D54F7B019_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14457676981201E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByExtraRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByExtraRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYEXTRAROUND_METHOD_4_14457676981201E0_OFFSET))(a1, a2);
		}
	};
}
