#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTalentNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTALENTTREE_CLEARUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A5D87E0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_FIRSTARRIVEDNODE_OFFSET UNITYSDK_OFFSET(0x1A5D9080)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_HASTALENTCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A5D9200)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A5D8ED0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A5D8FA0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A5D8FE0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_NODECNT_OFFSET UNITYSDK_OFFSET(0x1A5D8BF0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_TALENTIDS_OFFSET UNITYSDK_OFFSET(0x1A5D8C40)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_TALENTNODES_OFFSET UNITYSDK_OFFSET(0x1A5D8DA0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_UNLOCKCNT_OFFSET UNITYSDK_OFFSET(0x1A5D9360)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE_UPDATEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A5D84E0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D94D0)
#define RPG_CLIENT_GRIDFIGHTTALENTTREE__GET_ISCOMPLETED_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A5D94E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalentTree_TypeDefinitionIndex = 62341;

	class GridFightTalentTree : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTalentNode*>* _TalentNodes; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_NodeCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_NODECNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TalentIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_TALENTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>* get_TalentNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTalentNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_TALENTNODES_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::Client::GridFightTalentNode* get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTalentNode*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTalentNode* get_FirstArrivedNode()
		{
			return ((::RPG::Client::GridFightTalentNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_FIRSTARRIVEDNODE_OFFSET))(this);
		}

		::System::Boolean get_HasTalentCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_HASTALENTCANUNLOCK_OFFSET))(this);
		}

		::System::Int32 get_UnlockCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_GET_UNLOCKCNT_OFFSET))(this);
		}

		::System::Void UpdateUnlock(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_UPDATEUNLOCK_OFFSET))(this, a1);
		}

		::System::Void ClearUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE_CLEARUNLOCK_OFFSET))(this);
		}

		::System::Boolean _get_IsCompleted_b__11_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTALENTTREE__GET_ISCOMPLETED_B__11_0_OFFSET))(this, a1);
		}
	};
}
