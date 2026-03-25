#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_6.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/RogueNousSurfaceTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueDLCAeonDiceSurfaceRow; }
namespace RPG::GameCore { class RogueNousDiceSurfaceRow; }
namespace System { class String; }

#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9371C20)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x9371CB0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9371A80)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x9371F00)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICEACTIVESTAGE_OFFSET UNITYSDK_OFFSET(0x9372100)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICEEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x9372160)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACEDESC_OFFSET UNITYSDK_OFFSET(0x9371E90)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACEICON_OFFSET UNITYSDK_OFFSET(0x9371DB0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_DICESURFACENAME_OFFSET UNITYSDK_OFFSET(0x9371E20)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_EXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0x9371FD0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_ICONNEEDSETCOLOR_OFFSET UNITYSDK_OFFSET(0x9371E10)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9371F70)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SORT_OFFSET UNITYSDK_OFFSET(0x93720A0)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x9371D50)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_GET_SURFACETAGS_OFFSET UNITYSDK_OFFSET(0x9372040)
#define RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9371D40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueDiceSurfaceDisplayData_TypeDefinitionIndex = 54469;

	class ChessRogueDiceSurfaceDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueDLCAeonDiceSurfaceRow* _AeonRow; // 0x10
		::RPG::GameCore::RogueNousDiceSurfaceRow* _NousRow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChessRogueDiceSurfaceDisplayData* Create(::Enum_3_ED790DAC948A65A9_6 diceType, ::System::UInt32 surfaceID)
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::Enum_3_ED790DAC948A65A9_6, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_OFFSET))(diceType, surfaceID);
		}

		static ::RPG::Client::ChessRogueDiceSurfaceDisplayData* Create_1(::RPG::GameCore::RogueDLCAeonDiceSurfaceRow* aeonDiceSurfaceRow)
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_1_OFFSET))(aeonDiceSurfaceRow);
		}

		static ::RPG::Client::ChessRogueDiceSurfaceDisplayData* Create_2(::RPG::GameCore::RogueNousDiceSurfaceRow* nousDiceSurfaceRow)
		{
			return ((::RPG::Client::ChessRogueDiceSurfaceDisplayData*(*)(::RPG::GameCore::RogueNousDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDICESURFACEDISPLAYDATA_CREATE_2_OFFSET))(nousDiceSurfaceRow);
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
