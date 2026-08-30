#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_10.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/RogueNousSurfaceTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueDLCAeonDiceSurfaceRow; }
namespace RPG::GameCore { class RogueNousDiceSurfaceRow; }
namespace System { class String; }

#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1CB3B540)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1CB3B5D0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB3B3A0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x1CB3B880)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICEACTIVESTAGE_OFFSET UNITYSDK_OFFSET(0x1CB3BA80)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1CB3BAE0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACEDESC_OFFSET UNITYSDK_OFFSET(0x1CB3B800)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACEICON_OFFSET UNITYSDK_OFFSET(0x1CB3B6D0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACENAME_OFFSET UNITYSDK_OFFSET(0x1CB3B780)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_EXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0x1CB3B950)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_ICONNEEDSETCOLOR_OFFSET UNITYSDK_OFFSET(0x1CB3B730)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1CB3B8F0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SORT_OFFSET UNITYSDK_OFFSET(0x1CB3BA20)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x1CB3B670)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SURFACETAGS_OFFSET UNITYSDK_OFFSET(0x1CB3B9C0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB3B660)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceSurfaceDisplayData_TypeDefinitionIndex = 66948;

	class ChessRogueDiceSurfaceDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueNousDiceSurfaceRow* _NousRow; // 0x10
		::RPG::GameCore::RogueDLCAeonDiceSurfaceRow* _AeonRow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChessRogueDiceSurfaceDisplayData* Create(::Enum_3_ED790DAC948A65A9_10 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::Enum_3_ED790DAC948A65A9_10, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChessRogueDiceSurfaceDisplayData* Create_1(::RPG::GameCore::RogueDLCAeonDiceSurfaceRow* a1)
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::ChessRogueDiceSurfaceDisplayData* Create_2(::RPG::GameCore::RogueNousDiceSurfaceRow* a1)
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::RPG::GameCore::RogueNousDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_2_OFFSET))(a1);
		}

		::System::UInt32 get_SurfaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SURFACEID_OFFSET))(this);
		}

		::System::String* get_DiceSurfaceIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACEICON_OFFSET))(this);
		}

		::System::Boolean get_IconNeedSetColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_ICONNEEDSETCOLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_DiceSurfaceName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_DiceSurfaceDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACEDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParam()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DESCPARAM_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_RARITY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffect()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_EXTRAEFFECT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueNousSurfaceTag>* get_SurfaceTags()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueNousSurfaceTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SURFACETAGS_OFFSET))(this);
		}

		::System::UInt32 get_Sort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SORT_OFFSET))(this);
		}

		::System::UInt32 get_DiceActiveStage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICEACTIVESTAGE_OFFSET))(this);
		}

		::RPG::GameCore::ModifierEffectType get_DiceEffectType()
		{
			return ((::RPG::GameCore::ModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICEEFFECTTYPE_OFFSET))(this);
		}
	};
}
