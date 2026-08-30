#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class BombCreateConfig; }
namespace RPG::GameCore::Match3 { class PieceConfig; }

#define RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG_METHOD_2_6A90AFB6B25939CA_OFFSET UNITYSDK_OFFSET(0x1D240A70)
#define RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D240C10)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ChessBoardConfig_TypeDefinitionIndex = 24587;

	class ChessBoardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::PieceConfig*>* PieceConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::BombCreateConfig*>* BombCreateConfigs; // 0x18
		::System::Single DelayAfterSwap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6A90AFB6B25939CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ChessBoardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ChessBoardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG_METHOD_2_6A90AFB6B25939CA_OFFSET))(a1, a2);
		}
	};
}
