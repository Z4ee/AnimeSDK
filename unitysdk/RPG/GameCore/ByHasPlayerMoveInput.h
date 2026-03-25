#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_2428D18D8B2FC900_OFFSET UNITYSDK_OFFSET(0x17024530)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_BEC3E6BB528B93AA_OFFSET UNITYSDK_OFFSET(0x17024600)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x170245B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasPlayerMoveInput_TypeDefinitionIndex = 18538;

	class ByHasPlayerMoveInput : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2428D18D8B2FC900(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_2428D18D8B2FC900_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BEC3E6BB528B93AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_BEC3E6BB528B93AA_OFFSET))(a1, a2);
		}
	};
}
