#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatProgressData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C409E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1C40CCC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_GET_PROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x1C40CCE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_GET_SELECTEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1C40CCA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SETGAMEMODE_OFFSET UNITYSDK_OFFSET(0x1C40CBD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SETSELECTEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1C40CC20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1C40CCD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SET_PROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x1C40CCF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SET_SELECTEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1C40CCB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C40CB00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER__INIT_OFFSET UNITYSDK_OFFSET(0x1C40CB60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameFlowDataContainer_TypeDefinitionIndex = 75630;

	class DiceCombatGameFlowDataContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedAvatarList_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatProgressData* _ProgressData_k__BackingField; // 0x18
		::RPG::Client::LittleGameShare::LittleGameClientNetMode _Mode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer* Create()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameFlowDataContainer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_CREATE_OFFSET))();
		}

		::System::Void SetGameMode(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SETGAMEMODE_OFFSET))(this, a1);
		}

		::System::Void SetSelectedAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SETSELECTEDAVATARLIST_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER__INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectedAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_GET_SELECTEDAVATARLIST_OFFSET))(this);
		}

		::System::Void set_SelectedAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SET_SELECTEDAVATARLIST_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::LittleGameClientNetMode get_Mode()
		{
			return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SET_MODE_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatProgressData* get_ProgressData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatProgressData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_GET_PROGRESSDATA_OFFSET))(this);
		}

		::System::Void set_ProgressData(::RPG::Client::DiceCombat::DiceCombatProgressData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatProgressData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOWDATACONTAINER_SET_PROGRESSDATA_OFFSET))(this, a1);
		}
	};
}
