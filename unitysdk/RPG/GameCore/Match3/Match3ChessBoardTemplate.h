#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TemplateEffectType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class Match3ChessBoardGridInfo; }

#define RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE_METHOD_2_630AE32847656A2D_OFFSET UNITYSDK_OFFSET(0x173A74B0)
#define RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x173A7700)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ChessBoardTemplate_TypeDefinitionIndex = 22757;

	class Match3ChessBoardTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::Match3TemplateEffectType EffectType; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>* GridInfos; // 0x18
		::System::UInt32 ScoreBonusStyle; // 0x20
		::System::Boolean Enduring; // 0x24
		::Il2CppArray<::System::UInt32>* EnvIDs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_630AE32847656A2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ChessBoardTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ChessBoardTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CHESSBOARDTEMPLATE_METHOD_2_630AE32847656A2D_OFFSET))(a1, a2);
		}
	};
}
