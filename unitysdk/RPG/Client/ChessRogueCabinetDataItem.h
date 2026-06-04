#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueCabinetType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class DimensionIncrementsConfig; }
namespace RPG::GameCore { class RogueDLCAeonCabinetRow; }
namespace System { class String; }

#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_CABINETICONPATH_OFFSET UNITYSDK_OFFSET(0xB650560)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_DIMENSIONINCREMENTSCONFIGARRAY_OFFSET UNITYSDK_OFFSET(0xB650810)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xB650330)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_IPDESC_OFFSET UNITYSDK_OFFSET(0xB650780)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB650BD0)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB650C30)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB650910)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_MISSIONDESCPARAMS_OFFSET UNITYSDK_OFFSET(0xB650700)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_MISSIONDESC_OFFSET UNITYSDK_OFFSET(0xB650670)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0xB6504B0)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xB650430)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_REQUIREDUNLOCKCABINETID_OFFSET UNITYSDK_OFFSET(0xB6503B0)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB650890)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB650340)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_SORTPARAM_OFFSET UNITYSDK_OFFSET(0xB6502B0)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB6505E0)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB650200)
#define RPG_CLIENT_CHESSROGUECABINETDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB650150)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueCabinetDataItem_TypeDefinitionIndex = 62553;

	class ChessRogueCabinetDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueDLCAeonCabinetRow* _Row; // 0x10
		::System::UInt32 _ID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::RogueDLCAeonCabinetRow* get_Row()
		{
			return ((::RPG::GameCore::RogueDLCAeonCabinetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::ChessRogueCabinetType get_Type()
		{
			return ((::RPG::GameCore::ChessRogueCabinetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_TYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RequiredUnlockCabinetID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_REQUIREDUNLOCKCABINETID_OFFSET))(this);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_QUESTID_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_QUESTDATA_OFFSET))(this);
		}

		::System::String* get_CabinetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_CABINETICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MissionDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_MISSIONDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MissionDescParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_MISSIONDESCPARAMS_OFFSET))(this);
		}

		::RPG::Client::TextID get_IPDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_IPDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::DimensionIncrementsConfig*>* get_DimensionIncrementsConfigArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::DimensionIncrementsConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_DIMENSIONINCREMENTSCONFIGARRAY_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_REWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_ISFINISHED_OFFSET))(this);
		}

		::System::UInt32 get_SortParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUECABINETDATAITEM_GET_SORTPARAM_OFFSET))(this);
		}
	};
}
