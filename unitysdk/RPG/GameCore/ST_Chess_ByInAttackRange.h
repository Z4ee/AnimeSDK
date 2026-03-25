#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ST_CHESS_BYINATTACKRANGE_METHOD_4_4CB97EE7D6A2667E_OFFSET UNITYSDK_OFFSET(0x176956A0)
#define RPG_GAMECORE_ST_CHESS_BYINATTACKRANGE_METHOD_4_8C74B41CAF221880_OFFSET UNITYSDK_OFFSET(0x17695770)
#define RPG_GAMECORE_ST_CHESS_BYINATTACKRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17695720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_ByInAttackRange_TypeDefinitionIndex = 22003;

	class ST_Chess_ByInAttackRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYINATTACKRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4CB97EE7D6A2667E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByInAttackRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByInAttackRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYINATTACKRANGE_METHOD_4_4CB97EE7D6A2667E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C74B41CAF221880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYINATTACKRANGE_METHOD_4_8C74B41CAF221880_OFFSET))(a1, a2);
		}
	};
}
