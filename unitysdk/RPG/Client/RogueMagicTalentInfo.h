#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455CA3FD2409BEB7_14;
namespace RPG::Client { class RogueMagicTalentNodeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICTALENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7A69E0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GETALLTALENTNODES_OFFSET UNITYSDK_OFFSET(0xC7B6870)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GETCANACTIVETALENTNODE_OFFSET UNITYSDK_OFFSET(0xC7B68B0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GETTALENTNODEBYLEVEL_OFFSET UNITYSDK_OFFSET(0xC7B67E0)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0xC7B6B00)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ACTIVATEDNODEPERCENTFLOORED_OFFSET UNITYSDK_OFFSET(0xC7B6B70)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_GET_ALLNODECOUNT_OFFSET UNITYSDK_OFFSET(0xC7B6B20)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC7A5F20)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_SET_ACTIVATEDNODECOUNT_OFFSET UNITYSDK_OFFSET(0xC7B6B10)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC7A9F80)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A5C80)
#define RPG_CLIENT_ROGUEMAGICTALENTINFO__REFRESHACTIVATEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7B66E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicTalentInfo_TypeDefinitionIndex = 63075;

	class RogueMagicTalentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicTalentNodeData*>* _TalentNodes; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicTalentNodeData*>* _TalentID2Nodes; // 0x18
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

		::System::Void Sync(::Class_1_455CA3FD2409BEB7_14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicTalentNodeData* GetTalentNodeByLevel(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMagicTalentNodeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_GETTALENTNODEBYLEVEL_OFFSET))(this, a1);
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

		::System::Void set_ActivatedNodeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICTALENTINFO_SET_ACTIVATEDNODECOUNT_OFFSET))(this, a1);
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
