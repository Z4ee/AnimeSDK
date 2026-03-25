#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHESSATTACKDATA_METHOD_2_70121D438E6C24D6_OFFSET UNITYSDK_OFFSET(0x1708A6F0)
#define RPG_GAMECORE_CHESSATTACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessAttackData_TypeDefinitionIndex = 21993;

	class ChessAttackData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSATTACKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_70121D438E6C24D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessAttackData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessAttackData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSATTACKDATA_METHOD_2_70121D438E6C24D6_OFFSET))(a1, a2);
		}
	};
}
