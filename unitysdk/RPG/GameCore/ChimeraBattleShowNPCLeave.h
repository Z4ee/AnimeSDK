#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_METHOD_3_1BD8C90BAE326220_OFFSET UNITYSDK_OFFSET(0x187F2A30)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_METHOD_3_CAC3313AEB560082_OFFSET UNITYSDK_OFFSET(0x187F3B50)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x187F2A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowNPCLeave_TypeDefinitionIndex = 15037;

	class ChimeraBattleShowNPCLeave : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* NPCPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CAC3313AEB560082(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCLeave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCLeave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_METHOD_3_CAC3313AEB560082_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1BD8C90BAE326220(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCLeave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_METHOD_3_1BD8C90BAE326220_OFFSET))(a1, a2);
		}
	};
}
