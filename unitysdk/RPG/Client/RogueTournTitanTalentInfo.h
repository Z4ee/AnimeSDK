#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueTournTitanTalentNodeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1137C0)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GETNEXTUNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0xB1138A0)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GETNODEDATABYTITANTYPE_OFFSET UNITYSDK_OFFSET(0xB1139F0)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xB113A70)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GET_TALENTCOINICONPATH_OFFSET UNITYSDK_OFFSET(0xB113DC0)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GET__TALENTCOINITEMDATA_OFFSET UNITYSDK_OFFSET(0xB113D30)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GET__TALENTCOINITEMID_OFFSET UNITYSDK_OFFSET(0xB113C50)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB112C60)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB112B60)
#define RPG_CLIENT_ROGUETOURNTITANTALENTINFO__GENERATETALENTUNLOCKSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB113330)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanTalentInfo_TypeDefinitionIndex = 62553;

	class RogueTournTitanTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanTalentNodeData*>* _OrderedTalentNodes; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournTitanTalentNodeData*>* _TalentID2Nodes; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTitanType, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanTalentNodeData*>*>* _TitanType2TalentNodes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanTalentNodeData* GetNextUnlockTalent()
		{
			return ((::RPG::Client::RogueTournTitanTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GETNEXTUNLOCKTALENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanTalentNodeData*>* GetNodeDataByTitanType(::RPG::GameCore::RogueTitanType titanType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanTalentNodeData*>*(*)(::PVOID, ::RPG::GameCore::RogueTitanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GETNODEDATABYTITANTYPE_OFFSET))(this, titanType);
		}

		::System::Void GetTalentUnlockedProgressInfo(::System::UInt32& unlockedCnt, ::System::UInt32& totalCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GETTALENTUNLOCKEDPROGRESSINFO_OFFSET))(this, unlockedCnt, totalCnt);
		}

		::System::Void _GenerateTalentUnlockSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO__GENERATETALENTUNLOCKSEQUENCE_OFFSET))(this);
		}

		static ::System::UInt32 get__TalentCoinItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GET__TALENTCOINITEMID_OFFSET))();
		}

		static ::RPG::Client::ItemData* get__TalentCoinItemData()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GET__TALENTCOINITEMDATA_OFFSET))();
		}

		static ::System::String* get_TalentCoinIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANTALENTINFO_GET_TALENTCOINICONPATH_OFFSET))();
		}
	};
}
