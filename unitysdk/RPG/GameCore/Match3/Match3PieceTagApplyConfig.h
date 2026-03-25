#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class Match3TagApplyCondition; }
namespace RPG::GameCore::Match3 { class Match3TagApplyPostAction; }

#define RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG_METHOD_2_1E055779CD030458_OFFSET UNITYSDK_OFFSET(0x173AA890)
#define RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173AAB40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3PieceTagApplyConfig_TypeDefinitionIndex = 22773;

	class Match3PieceTagApplyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::PieceTag SourceTag; // 0x10
		::RPG::GameCore::Match3::Match3TagApplyCondition* ApplyCondition; // 0x18
		::RPG::GameCore::Match3::Match3TagApplyPostAction* ApplyPostAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E055779CD030458(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3PieceTagApplyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3PieceTagApplyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3PIECETAGAPPLYCONFIG_METHOD_2_1E055779CD030458_OFFSET))(a1, a2);
		}
	};
}
