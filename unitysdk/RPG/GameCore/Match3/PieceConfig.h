#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/PieceType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_PIECECONFIG_METHOD_2_C4895AD839409AFE_OFFSET UNITYSDK_OFFSET(0x18AB9F30)
#define RPG_GAMECORE_MATCH3_PIECECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABA0A0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PieceConfig_TypeDefinitionIndex = 23670;

	class PieceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::Match3::PieceType Type; // 0x14
		::System::UInt32 StyleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_PIECECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C4895AD839409AFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::PieceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::PieceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_PIECECONFIG_METHOD_2_C4895AD839409AFE_OFFSET))(a1, a2);
		}
	};
}
