#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_CURSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC7270)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDAC7250)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC7300)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0xDAC7240)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_RECENTENEMIES_OFFSET UNITYSDK_OFFSET(0xDAC7360)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_UNLOCKREQUIREDWINCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC7320)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC72C0)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SETISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDAC7180)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SETRECENTENEMIES_OFFSET UNITYSDK_OFFSET(0xDAC71D0)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SETWINCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC7130)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDAC7260)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xDAC7310)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC70B0)

namespace RPG::Client::PetMarble::Level
{
	inline static constexpr unsigned int PetMarbleLevelMode_TypeDefinitionIndex = 74740;

	class PetMarbleLevelMode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RecentEnemies; // 0x10
		::RPG::Client::PetMarble::Level::PetMarbleLevelModeType _ModeType_k__BackingField; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x1C
		::System::UInt32 _UnlockRequiredWinCount; // 0x20
		::System::UInt32 _MaxStarCount_k__BackingField; // 0x24
		::System::UInt32 _WinCount; // 0x28

		::System::Void _ctor(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetWinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SETWINCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetIsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SETISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void SetRecentEnemies(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SETRECENTENEMIES_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::Level::PetMarbleLevelModeType get_ModeType()
		{
			return ((::RPG::Client::PetMarble::Level::PetMarbleLevelModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_MODETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_CURSTARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_WinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_WINCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxStarCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_SET_MAXSTARCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockRequiredWinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_UNLOCKREQUIREDWINCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_RecentEnemies()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODE_GET_RECENTENEMIES_OFFSET))(this);
		}
	};
}
