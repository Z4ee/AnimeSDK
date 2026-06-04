#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/Match3/StyleGenerateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDGRIDINFO_METHOD_2_4911C675EA4D4ED1_OFFSET UNITYSDK_OFFSET(0x198E61B0)
#define RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDGRIDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x198E6450)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ChessBoardGridInfo_TypeDefinitionIndex = 23564;

	class Match3ChessBoardGridInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Row; // 0x10
		::System::UInt32 Column; // 0x14
		::System::UInt32 StyleID; // 0x18
		::RPG::GameCore::Match3::StyleGenerateType StyleGenerateType; // 0x1C
		::RPG::GameCore::Match3::BombType BombType; // 0x20
		::RPG::GameCore::Match3::PieceTag PieceTag; // 0x24
		::RPG::GameCore::Match3::GridTag GridTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDGRIDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4911C675EA4D4ED1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ChessBoardGridInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ChessBoardGridInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDGRIDINFO_METHOD_2_4911C675EA4D4ED1_OFFSET))(a1, a2);
		}
	};
}
