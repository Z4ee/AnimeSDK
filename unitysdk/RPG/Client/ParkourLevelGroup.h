#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevel; }
namespace RPG::GameCore { class ParkourLevelGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PARKOURLEVELGROUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0xDA3A610)
#define RPG_CLIENT_PARKOURLEVELGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xDA3A310)
#define RPG_CLIENT_PARKOURLEVELGROUP_GETFINISHEDLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0xDA3A440)
#define RPG_CLIENT_PARKOURLEVELGROUP_GETLEVELBYINDEX_OFFSET UNITYSDK_OFFSET(0xDA3A4F0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GETUNLOCKEDBALLID_OFFSET UNITYSDK_OFFSET(0xDA3A580)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xDA39E20)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDA39FA0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0xDA39BC0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ISFINALLEVELGROUP_OFFSET UNITYSDK_OFFSET(0xDA39C10)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ISLONGTAILCHALLENGE_OFFSET UNITYSDK_OFFSET(0xDA38FE0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xDA3A0F0)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDA39E70)
#define RPG_CLIENT_PARKOURLEVELGROUP_GET_RESPATH_OFFSET UNITYSDK_OFFSET(0xDA39CF0)
#define RPG_CLIENT_PARKOURLEVELGROUP_ISFINISHEDALLLEVELS_OFFSET UNITYSDK_OFFSET(0xDA39C90)
#define RPG_CLIENT_PARKOURLEVELGROUP_ISUNLOCKALLLEVELS_OFFSET UNITYSDK_OFFSET(0xDA3A390)
#define RPG_CLIENT_PARKOURLEVELGROUP_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0xDA3A720)
#define RPG_CLIENT_PARKOURLEVELGROUP__CHECKISLONGTAILNEW_OFFSET UNITYSDK_OFFSET(0xDA3A260)
#define RPG_CLIENT_PARKOURLEVELGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xDA3A380)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevelGroup_TypeDefinitionIndex = 61945;

	class ParkourLevelGroup : public ::System::Object
	{
	public:
		// static const ::System::UInt32 FinalLevelGroupID = 0x5; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* _Levels; // 0x10
		::RPG::GameCore::ParkourLevelGroupRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::ParkourLevelGroupRow* a1, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourLevelGroupRow*, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsFinalLevelGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ISFINALLEVELGROUP_OFFSET))(this);
		}

		::System::Boolean get_IsLongTailChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ISLONGTAILCHALLENGE_OFFSET))(this);
		}

		::System::String* get_ResPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_RESPATH_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GET_ISNEW_OFFSET))(this);
		}

		static ::RPG::Client::ParkourLevelGroup* Create(::RPG::GameCore::ParkourLevelGroupRow* a1, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* a2)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::RPG::GameCore::ParkourLevelGroupRow*, ::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean IsUnlockAllLevels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_ISUNLOCKALLLEVELS_OFFSET))(this);
		}

		::System::Boolean IsFinishedAllLevels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_ISFINISHEDALLLEVELS_OFFSET))(this);
		}

		::System::Int32 GetFinishedLevelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GETFINISHEDLEVELCOUNT_OFFSET))(this);
		}

		::RPG::Client::ParkourLevel* GetLevelByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ParkourLevel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GETLEVELBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetUnlockedBallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_GETUNLOCKEDBALLID_OFFSET))(this);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP_MARKHASSEEN_OFFSET))(this);
		}

		::System::Boolean _CheckIsLongTailNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP__CHECKISLONGTAILNEW_OFFSET))(this);
		}
	};
}
