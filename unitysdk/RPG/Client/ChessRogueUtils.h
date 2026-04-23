#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace RPG::GameCore { class RogueNousAeonCrossRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEUTILS_GETAEONCROSSROW_OFFSET UNITYSDK_OFFSET(0x9FF34D0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDENDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x9FF27F0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDGUIDEMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9FF2A40)
#define RPG_CLIENT_CHESSROGUEUTILS_GETGUIDEONEAREAID_OFFSET UNITYSDK_OFFSET(0x9FF24C0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETGUIDETWOAREAID_OFFSET UNITYSDK_OFFSET(0x9FF25B0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSBUFF_OFFSET UNITYSDK_OFFSET(0x9FF37F0)
#define RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSROW_OFFSET UNITYSDK_OFFSET(0x9FF3660)
#define RPG_CLIENT_CHESSROGUEUTILS_ISACTIVITYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9FE65C0)
#define RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEFINISHED_OFFSET UNITYSDK_OFFSET(0x9FF22E0)
#define RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9FF2110)
#define RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0x9FE6760)
#define RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEONEFINISHED_OFFSET UNITYSDK_OFFSET(0x9FF1D50)
#define RPG_CLIENT_CHESSROGUEUTILS_ISGUIDETWOFINISHED_OFFSET UNITYSDK_OFFSET(0x9FF1F30)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINANYGUIDE_OFFSET UNITYSDK_OFFSET(0x9FF1D00)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINFINALGUIDE_OFFSET UNITYSDK_OFFSET(0x9FF1B30)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDEONE_OFFSET UNITYSDK_OFFSET(0x9FF1790)
#define RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDETWO_OFFSET UNITYSDK_OFFSET(0x9FF1960)
#define RPG_CLIENT_CHESSROGUEUTILS_ISPROPAGATIONAEONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9FF26A0)
#define RPG_CLIENT_CHESSROGUEUTILS_SETCABINETSEEN_OFFSET UNITYSDK_OFFSET(0x9FF2F30)
#define RPG_CLIENT_CHESSROGUEUTILS_SETDIMENSIONUNLOCKEDTALENTSEEN_OFFSET UNITYSDK_OFFSET(0x9FF2C90)
#define RPG_CLIENT_CHESSROGUEUTILS_SETMAINSTORYSEEN_OFFSET UNITYSDK_OFFSET(0x9FF3000)
#define RPG_CLIENT_CHESSROGUEUTILS_SETSUBSTORYSEEN_OFFSET UNITYSDK_OFFSET(0x9FF30D0)
#define RPG_CLIENT_CHESSROGUEUTILS_TELEPORTTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x9FF3280)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueUtils_TypeDefinitionIndex = 61643;

	class ChessRogueUtils : public ::System::Object
	{
	public:
		// static const ::System::String* _ConstKeyDLCUnlockMainMissionID; // 0x0
		// static const ::System::String* _ConstKeyGuideMainMissionID; // 0x0
		// static const ::System::String* _ConstKeyEndMainMissionID; // 0x0
		// static const ::System::String* _ConstKeyPropagationAeonUnlockSubMissionID; // 0x0
		// static const ::System::String* _ConstKeyMapEntranceID; // 0x0
		// static const ::System::String* _ConstKeyMappingInfoID; // 0x0

		static ::System::Boolean IsInGuideOne()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDEONE_OFFSET))();
		}

		static ::System::Boolean IsInGuideTwo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINGUIDETWO_OFFSET))();
		}

		static ::System::Boolean IsInFinalGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINFINALGUIDE_OFFSET))();
		}

		static ::System::Boolean IsInAnyGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISINANYGUIDE_OFFSET))();
		}

		static ::System::Boolean IsGuideOneFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEONEFINISHED_OFFSET))();
		}

		static ::System::Boolean IsGuideTwoFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISGUIDETWOFINISHED_OFFSET))();
		}

		static ::System::Boolean IsFinalGuideUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEUNLOCKED_OFFSET))();
		}

		static ::System::Boolean IsFinalGuideFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISFINALGUIDEFINISHED_OFFSET))();
		}

		static ::System::UInt32 GetGuideOneAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETGUIDEONEAREAID_OFFSET))();
		}

		static ::System::UInt32 GetGuideTwoAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETGUIDETWOAREAID_OFFSET))();
		}

		static ::System::Boolean IsActivityUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISACTIVITYUNLOCKED_OFFSET))();
		}

		static ::System::Boolean IsGuideMissionFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISGUIDEMISSIONFINISHED_OFFSET))();
		}

		static ::System::Boolean IsPropagationAeonUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_ISPROPAGATIONAEONUNLOCKED_OFFSET))();
		}

		static ::RPG::Client::MainMissionData* GetCurStartedEndMainMission()
		{
			return ((::RPG::Client::MainMissionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDENDMAINMISSION_OFFSET))();
		}

		static ::RPG::Client::MainMissionData* GetCurStartedGuideMainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETCURSTARTEDGUIDEMAINMISSIONDATA_OFFSET))();
		}

		static ::System::Void SetDimensionUnlockedTalentSeen(::System::UInt32 aeonID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETDIMENSIONUNLOCKEDTALENTSEEN_OFFSET))(aeonID);
		}

		static ::System::Void SetCabinetSeen(::System::UInt32 cabinetID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETCABINETSEEN_OFFSET))(cabinetID);
		}

		static ::System::Void SetMainStorySeen(::System::UInt32 mainStoryID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETMAINSTORYSEEN_OFFSET))(mainStoryID);
		}

		static ::System::Void SetSubStorySeen(::System::UInt32 subStoryID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_SETSUBSTORYSEEN_OFFSET))(subStoryID);
		}

		static ::System::Boolean TeleportToEntrance(::System::Action* preTeleportCallback)
		{
			return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_TELEPORTTOENTRANCE_OFFSET))(preTeleportCallback);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonCrossRow*>* GetAeonCrossRow(::System::UInt32 aeonID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCAeonCrossRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETAEONCROSSROW_OFFSET))(aeonID);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonCrossRow*>* GetRogueNousAeonCrossRow(::System::UInt32 aeonID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonCrossRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSROW_OFFSET))(aeonID);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>* GetRogueNousAeonCrossBuff(::System::UInt32 aeonID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEUTILS_GETROGUENOUSAEONCROSSBUFF_OFFSET))(aeonID);
		}
	};
}
