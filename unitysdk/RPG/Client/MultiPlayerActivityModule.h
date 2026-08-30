#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class MultiPlayerActivityInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_COLLECTREQUIREDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD8DDD10)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETAVAILABLEMULTIPLAYERACTIVITYINFOS_OFFSET UNITYSDK_OFFSET(0xD8DE6D0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETMULTIPLAYERACTIVITYINFOS_OFFSET UNITYSDK_OFFSET(0xD8DE690)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD8DE0B0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD8DDAD0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_ISMULTIPLAYERACTIVITYNEW_OFFSET UNITYSDK_OFFSET(0xD8DE450)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_REFRESHLASTSEENMULTIPLAYERACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD8DE200)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xD8DDFC0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD8DE8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPlayerActivityModule_TypeDefinitionIndex = 61891;

	class MultiPlayerActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>* _MultiPlayerActivityInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void CollectRequiredMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_COLLECTREQUIREDMISSIONDATA_OFFSET))(this);
		}

		::System::Void TransferToMultiPlayerActivityEntrancePage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurMultiPlayerActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET))(this);
		}

		::System::Void RefreshLastSeenMultiPlayerActivityID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_REFRESHLASTSEENMULTIPLAYERACTIVITYID_OFFSET))(this);
		}

		::System::Boolean IsMultiPlayerActivityNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_ISMULTIPLAYERACTIVITYNEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>* GetMultiPlayerActivityInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETMULTIPLAYERACTIVITYINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>* GetAvailableMultiPlayerActivityInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETAVAILABLEMULTIPLAYERACTIVITYINFOS_OFFSET))(this);
		}
	};
}
