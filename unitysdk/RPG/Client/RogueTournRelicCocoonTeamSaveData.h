#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BC45DABE355FCCD1;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB105280)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0xB105890)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xB105340)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0xB1058A0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET UNITYSDK_OFFSET(0xB105130)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB105650)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__INIT_OFFSET UNITYSDK_OFFSET(0xB105690)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonTeamSaveData_TypeDefinitionIndex = 62465;

	class RogueTournRelicCocoonTeamSaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* AvatarList; // 0x10
		::System::UInt32 _CocoonID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 cocoonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__CTOR_OFFSET))(this, cocoonID);
		}

		static ::RPG::Client::RogueTournRelicCocoonTeamSaveData* TryGetSaveData(::System::UInt32 cocoonID)
		{
			return ((::RPG::Client::RogueTournRelicCocoonTeamSaveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET))(cocoonID);
		}

		static ::System::Void SaveData(::System::UInt32 cocoonID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatarList1)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SAVEDATA_OFFSET))(cocoonID, avatarList1);
		}

		static ::RPG::Client::RogueTournRelicCocoonTeamSaveData* Create(::System::UInt32 cocoonID, ::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>* avatarSaveList)
		{
			return ((::RPG::Client::RogueTournRelicCocoonTeamSaveData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_CREATE_OFFSET))(cocoonID, avatarSaveList);
		}

		::System::Void _Init(::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>* avatarSaveList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__INIT_OFFSET))(this, avatarSaveList);
		}

		::System::UInt32 get_CocoonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SET_COCOONID_OFFSET))(this, value);
		}
	};
}
