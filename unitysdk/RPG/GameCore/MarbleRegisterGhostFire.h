#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_104B2E1B9BCE2757_OFFSET UNITYSDK_OFFSET(0x1D23AE40)
#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_92C7395BD48FE4AB_OFFSET UNITYSDK_OFFSET(0x1D23ADE0)
#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D23AE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRegisterGhostFire_TypeDefinitionIndex = 16669;

	class MarbleRegisterGhostFire : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 GhostFireCount; // 0x10
		::System::Single GhostFireRadius; // 0x14
		::System::UInt32 GhostFireSkill; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92C7395BD48FE4AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRegisterGhostFire*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRegisterGhostFire*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_92C7395BD48FE4AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_104B2E1B9BCE2757(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRegisterGhostFire* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRegisterGhostFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_104B2E1B9BCE2757_OFFSET))(a1, a2);
		}
	};
}
