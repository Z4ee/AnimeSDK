#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/BombCreateStyleType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BOMBCREATECONFIG_METHOD_2_5E9910F99817B6EA_OFFSET UNITYSDK_OFFSET(0x173A1520)
#define RPG_GAMECORE_MATCH3_BOMBCREATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173A1720)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BombCreateConfig_TypeDefinitionIndex = 22698;

	class BombCreateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MinRowBreak; // 0x10
		::System::UInt32 MinColumnBreak; // 0x14
		::RPG::GameCore::Match3::BombType BombType; // 0x18
		::RPG::GameCore::Match3::BombCreateStyleType StyleType; // 0x1C
		::System::UInt32 PieceConfigID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BOMBCREATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5E9910F99817B6EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BombCreateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BombCreateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BOMBCREATECONFIG_METHOD_2_5E9910F99817B6EA_OFFSET))(a1, a2);
		}
	};
}
