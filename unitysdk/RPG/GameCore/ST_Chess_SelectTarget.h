#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessSelectTargetStrategy.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_CHESS_SELECTTARGET_METHOD_4_45591992B244ADA2_OFFSET UNITYSDK_OFFSET(0x17681390)
#define RPG_GAMECORE_ST_CHESS_SELECTTARGET_METHOD_4_FC36566CB369A2C8_OFFSET UNITYSDK_OFFSET(0x176959F0)
#define RPG_GAMECORE_ST_CHESS_SELECTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17681340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_SelectTarget_TypeDefinitionIndex = 22007;

	class ST_Chess_SelectTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ChessSelectTargetStrategy Strategy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_SELECTTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FC36566CB369A2C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_SelectTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_SelectTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_SELECTTARGET_METHOD_4_FC36566CB369A2C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_45591992B244ADA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_SelectTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_SelectTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_SELECTTARGET_METHOD_4_45591992B244ADA2_OFFSET))(a1, a2);
		}
	};
}
