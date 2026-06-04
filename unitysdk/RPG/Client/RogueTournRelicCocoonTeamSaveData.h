#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BC45DABE355FCCD1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC858800)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0xC858FB0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SAVEDATA_OFFSET UNITYSDK_OFFSET(0xC8588C0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0xC858FC0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET UNITYSDK_OFFSET(0xC8586B0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC858CE0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC858D20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonTeamSaveData_TypeDefinitionIndex = 63398;

	class RogueTournRelicCocoonTeamSaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* AvatarList; // 0x10
		::System::UInt32 _CocoonID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournRelicCocoonTeamSaveData* TryGetSaveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournRelicCocoonTeamSaveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_TRYGETSAVEDATA_OFFSET))(a1);
		}

		static ::System::Void SaveData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SAVEDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournRelicCocoonTeamSaveData* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>* a2)
		{
			return ((::RPG::Client::RogueTournRelicCocoonTeamSaveData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init(::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BC45DABE355FCCD1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA__INIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CocoonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONTEAMSAVEDATA_SET_COCOONID_OFFSET))(this, a1);
		}
	};
}
