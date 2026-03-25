#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F8AB4CD8CD203268;
namespace RPG::Client { class SwitchHandCoinContainer; }
namespace RPG::Client { class SwitchHandMazePuzzleRowWrapper; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4FDBF0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_1_OFFSET UNITYSDK_OFFSET(0xA4FDD10)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_OFFSET UNITYSDK_OFFSET(0xA4FD1C0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xA4FDE20)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0xA4FDF40)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETROWWRAPPERLIST_OFFSET UNITYSDK_OFFSET(0xA4FD550)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA4FD8F0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_SYNCCOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xA4FE060)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_TRYFIRECOINCOLLECTFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xA4FE0C0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CALCULATEPUZZLECOINCOLLECTCNT_OFFSET UNITYSDK_OFFSET(0xA4FE250)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4FE8C0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITCOINCONTAINER_OFFSET UNITYSDK_OFFSET(0xA4FDB00)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITMAZEPUZZLEROW_OFFSET UNITYSDK_OFFSET(0xA4FD940)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__ISCHESTHIDDEN_OFFSET UNITYSDK_OFFSET(0xA4FE790)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandMazePuzzleDataManager_TypeDefinitionIndex = 55496;

	class SwitchHandMazePuzzleDataManager : public ::System::Object
	{
	public:
		::RPG::Client::SwitchHandCoinContainer* _CoinContainer; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>* _RowList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>* GetRowWrapperList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETROWWRAPPERLIST_OFFSET))(this);
		}

		::RPG::Client::SwitchHandMazePuzzleRowWrapper* GetMazePuzzleRowWrapper(::System::UInt32 switchID)
		{
			return ((::RPG::Client::SwitchHandMazePuzzleRowWrapper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_OFFSET))(this, switchID);
		}

		::RPG::Client::SwitchHandMazePuzzleRowWrapper* GetMazePuzzleRowWrapper_1(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoInstanceID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::RPG::Client::SwitchHandMazePuzzleRowWrapper*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_1_OFFSET))(this, mappingInfoGroupID, mappingInfoInstanceID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoPropID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, mappingInfoGroupID, mappingInfoPropID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoPropID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLETOTALCOINCNT_OFFSET))(this, mappingInfoGroupID, mappingInfoPropID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::Void SyncCollectCoinCnt(::Class_1_F8AB4CD8CD203268* handData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F8AB4CD8CD203268*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_SYNCCOLLECTCOINCNT_OFFSET))(this, handData);
		}

		::System::Void TryFireCoinCollectFinishEvent(::System::UInt32 puzzleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_TRYFIRECOINCOLLECTFINISHEVENT_OFFSET))(this, puzzleID);
		}

		::System::Boolean _IsChestHidden(::System::UInt32 chestGroupID, ::System::UInt32 chestInstanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__ISCHESTHIDDEN_OFFSET))(this, chestGroupID, chestInstanceID);
		}

		::System::Void _InitMazePuzzleRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITMAZEPUZZLEROW_OFFSET))(this);
		}

		::System::UInt32 _CalculatePuzzleCoinCollectCnt(::System::UInt32 puzzleID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CALCULATEPUZZLECOINCOLLECTCNT_OFFSET))(this, puzzleID);
		}

		::System::Void _InitCoinContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITCOINCONTAINER_OFFSET))(this);
		}
	};
}
