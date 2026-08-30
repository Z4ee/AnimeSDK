#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueAeonDisplayRow; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace RPG::GameCore { class RogueDLCAeonRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB274B0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GETAEONCROSSBUFF_OFFSET UNITYSDK_OFFSET(0x1CB276A0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GETAEONCROSSROW_OFFSET UNITYSDK_OFFSET(0x1CB27970)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_AEONDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1CB282E0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_AEONID_OFFSET UNITYSDK_OFFSET(0x1CB27650)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_BATTLEEVENTBUFFGROUP_OFFSET UNITYSDK_OFFSET(0x1CB28240)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_BATTLEEVENTENHANCEBUFFGROUP_OFFSET UNITYSDK_OFFSET(0x1CB28290)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_CANSELECTEDONENTRANCE_OFFSET UNITYSDK_OFFSET(0x1CB28390)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_DICEEFFECTS_OFFSET UNITYSDK_OFFSET(0x1CB27DB0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_DICEID_OFFSET UNITYSDK_OFFSET(0x1CB27D60)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_EFFECTMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x1CB285E0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_EFFECTTYPE3_OFFSET UNITYSDK_OFFSET(0x1CB281A0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_EXTRAEFFECT_OFFSET UNITYSDK_OFFSET(0x1CB28680)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_PLAYERSHORTDESC_OFFSET UNITYSDK_OFFSET(0x1CB27CA0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_ROGUEAEONDISPLAYID_OFFSET UNITYSDK_OFFSET(0x1CB27D10)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_ROGUEBUFFTYPEID_OFFSET UNITYSDK_OFFSET(0x1CB281F0)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1CB27C50)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_UNLOCKCONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x1CB28520)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM_ISVALIDINGUIDE_OFFSET UNITYSDK_OFFSET(0x1CB27520)
#define RPG_CLIENT_CHESSROGUEAEONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB274A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAeonDataItem_TypeDefinitionIndex = 66898;

	class ChessRogueAeonDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _DiceEffects; // 0x10
		::RPG::GameCore::RogueDLCAeonRow* _AeonRow; // 0x18

		::System::Void _ctor(::RPG::GameCore::RogueDLCAeonRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsValidInGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_ISVALIDINGUIDE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>* GetAeonCrossBuff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GETAEONCROSSBUFF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonCrossRow*>* GetAeonCrossRow()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonCrossRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GETAEONCROSSROW_OFFSET))(this);
		}

		::System::UInt32 get_AeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_AEONID_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_SORTWEIGHT_OFFSET))(this);
		}

		::RPG::Client::TextID get_PlayerShortDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_PLAYERSHORTDESC_OFFSET))(this);
		}

		::System::UInt32 get_RogueAeonDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_ROGUEAEONDISPLAYID_OFFSET))(this);
		}

		::System::UInt32 get_DiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_DICEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_DiceEffects()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_DICEEFFECTS_OFFSET))(this);
		}

		::RPG::GameCore::ModifierEffectType get_EffectType3()
		{
			return ((::RPG::GameCore::ModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_EFFECTTYPE3_OFFSET))(this);
		}

		::System::UInt32 get_RogueBuffTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_ROGUEBUFFTYPEID_OFFSET))(this);
		}

		::System::UInt32 get_BattleEventBuffGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_BATTLEEVENTBUFFGROUP_OFFSET))(this);
		}

		::System::UInt32 get_BattleEventEnhanceBuffGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_BATTLEEVENTENHANCEBUFFGROUP_OFFSET))(this);
		}

		::RPG::GameCore::RogueAeonDisplayRow* get_AeonDisplayRow()
		{
			return ((::RPG::GameCore::RogueAeonDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_AEONDISPLAYROW_OFFSET))(this);
		}

		::System::Boolean get_CanSelectedOnEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_CANSELECTEDONENTRANCE_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockConditionDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_UNLOCKCONDITIONDESC_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_EffectMazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_EFFECTMAZEBUFFROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffect()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAEONDATAITEM_GET_EXTRAEFFECT_OFFSET))(this);
		}
	};
}
