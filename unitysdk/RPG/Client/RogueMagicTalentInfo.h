#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D5608F598A30CAC_36;
namespace RPG::Client { class RogueMagicTalentNodeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA322440)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GETALLTALENTNODES_OFFSET UNITYSDK_OFFSET(0xA332110)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GETCANACTIVETALENTNODE_OFFSET UNITYSDK_OFFSET(0xA332150)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GETTALENTNODEBYLEVEL_OFFSET UNITYSDK_OFFSET(0xA332070)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0xA3323C0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ACTIVATEDNODEPERCENTFLOORED_OFFSET UNITYSDK_OFFSET(0xA332430)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ALLNODECOUNT_OFFSET UNITYSDK_OFFSET(0xA3323E0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA321670)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_SET_ACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0xA3323D0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA3254D0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3213D0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO__REFRESHACTIVATEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA331F50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicTalentInfo_TypeDefinitionIndex = 54954;

	class RogueMagicTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicTalentNodeData*>* _TalentID2Nodes; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicTalentNodeData*>* _TalentNodes; // 0x18
		::System::UInt32 _ActivatedNodeCount_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9D5608F598A30CAC_36* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D5608F598A30CAC_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::RogueMagicTalentNodeData* GetTalentNodeByLevel(::System::UInt32 level)
		{
			return ((::RPG::Client::RogueMagicTalentNodeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_GETTALENTNODEBYLEVEL_OFFSET))(this, level);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicTalentNodeData*>* GetAllTalentNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicTalentNodeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_GETALLTALENTNODES_OFFSET))(this);
		}

		::RPG::Client::RogueMagicTalentNodeData* GetCanActiveTalentNode()
		{
			return ((::RPG::Client::RogueMagicTalentNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_GETCANACTIVETALENTNODE_OFFSET))(this);
		}

		::System::Void _RefreshActivatedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO__REFRESHACTIVATEDCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ActivatedNodeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ACTIVATEDNODECOUNT_OFFSET))(this);
		}

		::System::Void set_ActivatedNodeCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_SET_ACTIVATEDNODECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AllNodeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ALLNODECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ActivatedNodePercentFloored()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ACTIVATEDNODEPERCENTFLOORED_OFFSET))(this);
		}
	};
}
