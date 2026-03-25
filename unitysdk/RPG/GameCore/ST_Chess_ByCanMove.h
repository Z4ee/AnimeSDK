#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_CHESS_BYCANMOVE_METHOD_4_4D5B13B218CB351C_OFFSET UNITYSDK_OFFSET(0x17694B40)
#define RPG_GAMECORE_ST_CHESS_BYCANMOVE_METHOD_4_B20BEABD76F27D56_OFFSET UNITYSDK_OFFSET(0x17694A70)
#define RPG_GAMECORE_ST_CHESS_BYCANMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17694AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_ByCanMove_TypeDefinitionIndex = 22000;

	class ST_Chess_ByCanMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYCANMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B20BEABD76F27D56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByCanMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByCanMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYCANMOVE_METHOD_4_B20BEABD76F27D56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D5B13B218CB351C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByCanMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYCANMOVE_METHOD_4_4D5B13B218CB351C_OFFSET))(a1, a2);
		}
	};
}
