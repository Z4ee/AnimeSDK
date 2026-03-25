#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_METHOD_3_5F0096CD591C1E03_OFFSET UNITYSDK_OFFSET(0x17094750)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_METHOD_3_710E99850A513409_OFFSET UNITYSDK_OFFSET(0x170935B0)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x170935A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowNPCDither_TypeDefinitionIndex = 14568;

	class ChimeraBattleShowNPCDither : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* NPCPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F0096CD591C1E03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCDither*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCDither*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_METHOD_3_5F0096CD591C1E03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_710E99850A513409(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCDither* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_METHOD_3_710E99850A513409_OFFSET))(a1, a2);
		}
	};
}
