#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonopolyMapMoveType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYMAPCELLUNIT_METHOD_2_16C8E00BD3E926DB_OFFSET UNITYSDK_OFFSET(0x199624A0)
#define RPG_GAMECORE_MONOPOLYMAPCELLUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19962700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCellUnit_TypeDefinitionIndex = 15429;

	class MonopolyMapCellUnit : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MapID; // 0x10
		::System::UInt32 CellID; // 0x14
		::System::Boolean CanJump; // 0x18
		::RPG::GameCore::MonopolyMapMoveType MoveType; // 0x1C
		::System::String* MoveAnimName; // 0x20
		::System::Single NextCellRotateAngle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_16C8E00BD3E926DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapCellUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapCellUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLUNIT_METHOD_2_16C8E00BD3E926DB_OFFSET))(a1, a2);
		}
	};
}
