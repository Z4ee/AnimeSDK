#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4DF3292AA5AADAD0_7;
class Class_1_6CBA1E94039E5C83;
class Class_1_FB0633E85BD6CF8E_5;
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightStageNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETNODE_OFFSET UNITYSDK_OFFSET(0x98B26C0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETSTAGENODESBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0x98B5000)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x98B2F30)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CURCHAPTERNODES_OFFSET UNITYSDK_OFFSET(0x98B29E0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET UNITYSDK_OFFSET(0x98B4F60)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTEID_OFFSET UNITYSDK_OFFSET(0x98B16C0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET UNITYSDK_OFFSET(0x98B0F60)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET UNITYSDK_OFFSET(0x98B1C70)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0x98B10B0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x98B04E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute_TypeDefinitionIndex = 52981;

	class GridFightStageRoute : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*>* _StageNodesByChapterID; // 0x10
		::RPG::Client::GridFightStage* _CurStage; // 0x18
		::System::UInt32 _StageRouteID; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightStage* curStage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__CTOR_OFFSET))(this, curStage);
		}

		::System::Void SyncRouteID(::System::UInt32 routeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTEID_OFFSET))(this, routeID);
		}

		::System::Void UpdateNodeInfo(::Class_1_6CBA1E94039E5C83* sttInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CBA1E94039E5C83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET))(this, sttInfo);
		}

		::System::Void SetNodeFrenzy(::System::UInt32 chapterID, ::System::UInt32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET))(this, chapterID, sectionID);
		}

		::System::Void UpdateNodeInfo_1(::Class_1_4DF3292AA5AADAD0_7* stageUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET))(this, stageUpdate);
		}

		::System::Void UpdateNodeInfo_2(::Class_1_FB0633E85BD6CF8E_5* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET))(this, levelInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* get_CurChapterNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CURCHAPTERNODES_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* GetStageNodesByChapterID(::System::UInt32 chapterID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETSTAGENODESBYCHAPTERID_OFFSET))(this, chapterID);
		}

		::RPG::Client::GridFightStageNode* GetNode(::System::UInt32 chapterID, ::System::UInt32 SectionID)
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETNODE_OFFSET))(this, chapterID, SectionID);
		}
	};
}
