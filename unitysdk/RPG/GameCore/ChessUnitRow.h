#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHESSUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1708F000)
#define RPG_GAMECORE_CHESSUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1708F680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessUnitRow_TypeDefinitionIndex = 16187;

	class ChessUnitRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* Name; // 0x18
		::System::String* ConfigPath; // 0x20
		::System::String* HeadIconPath; // 0x28
		::System::String* ModelPath; // 0x30
		::System::String* AIConfigPath; // 0x38
		::RPG::GameCore::FixPoint HitBoxRadius; // 0x40
		::RPG::GameCore::FixPoint AttackRange; // 0x48
		::RPG::GameCore::FixPoint AlertRange; // 0x50
		::RPG::GameCore::FixPoint HP; // 0x58
		::RPG::GameCore::FixPoint AttackPoint; // 0x60
		::RPG::GameCore::FixPoint AttackSpeed; // 0x68
		::RPG::GameCore::FixPoint MoveSpeed; // 0x70
		::RPG::GameCore::FixPoint RotSpeed; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChessUnitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSUNITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
