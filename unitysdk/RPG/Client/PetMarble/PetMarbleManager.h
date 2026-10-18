#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_562050CDF90F289F;
namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::PetMarble { class PetMarbleData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDADC410)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETALLPETMARBLELIST_OFFSET UNITYSDK_OFFSET(0xDADCB90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETAVAILABLEMARBLELISTINTERFACE_OFFSET UNITYSDK_OFFSET(0xDADCE40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETAVAILABLEMARBLELIST_OFFSET UNITYSDK_OFFSET(0xDADCBD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETMARBLEBYIDINTERFACE_OFFSET UNITYSDK_OFFSET(0xDADCB40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETMARBLEBYID_OFFSET UNITYSDK_OFFSET(0xDADC4A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETMARBLEBYPETID_OFFSET UNITYSDK_OFFSET(0xDADC730)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GET_ISALLUNLOCKED_OFFSET UNITYSDK_OFFSET(0xDADD1D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xDADC130)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_REFRESHALLPETINFO_OFFSET UNITYSDK_OFFSET(0xDADD0B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_SYNCTIMELIMITEDTRIALPETMARBLES_OFFSET UNITYSDK_OFFSET(0xDADC8E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xDADD320)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER__INITALLPETMARBLES_OFFSET UNITYSDK_OFFSET(0xDADC180)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleManager_TypeDefinitionIndex = 74696;

	class PetMarbleManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PetMarble::PetMarbleData*>* _AllPetMarbleList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarbleData* GetMarbleByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::PetMarbleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETMARBLEBYID_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarbleData* GetMarbleByPetID(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::PetMarbleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETMARBLEBYPETID_OFFSET))(this, a1);
		}

		::System::Void SyncTimeLimitedTrialPetMarbles(::Class_1_562050CDF90F289F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_562050CDF90F289F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_SYNCTIMELIMITEDTRIALPETMARBLES_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* GetMarbleByIDInterface(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETMARBLEBYIDINTERFACE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetMarble::PetMarbleData*>* GetAllPetMarbleList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetMarble::PetMarbleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETALLPETMARBLELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetMarble::PetMarbleData*>* GetAvailableMarbleList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetMarble::PetMarbleData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETAVAILABLEMARBLELIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::ActivityMarble::IMarbleData*>* GetAvailableMarbleListInterface(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::ActivityMarble::IMarbleData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GETAVAILABLEMARBLELISTINTERFACE_OFFSET))(this, a1);
		}

		::System::Void RefreshAllPetInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_REFRESHALLPETINFO_OFFSET))(this);
		}

		::System::Void _InitAllPetMarbles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER__INITALLPETMARBLES_OFFSET))(this);
		}

		::System::Boolean get_IsAllUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMANAGER_GET_ISALLUNLOCKED_OFFSET))(this);
		}
	};
}
