#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_31B87651CEDF5B41;
class Class_1_C4B679728AD83B32_8;
class Class_1_D7F3D169C3137F53_1;
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightStageNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA596290)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETNODE_OFFSET UNITYSDK_OFFSET(0xA5952B0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETSTAGENODESBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA598690)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA595B20)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CURCHAPTERNODES_OFFSET UNITYSDK_OFFSET(0xA5955D0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET UNITYSDK_OFFSET(0xA5985F0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTEID_OFFSET UNITYSDK_OFFSET(0xA594290)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET UNITYSDK_OFFSET(0xA593A30)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET UNITYSDK_OFFSET(0xA594840)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0xA593B80)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xA592DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute_TypeDefinitionIndex = 60071;

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

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightStageNode*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void UpdateNodeInfo(::Class_1_31B87651CEDF5B41* sttInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B87651CEDF5B41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET))(this, sttInfo);
		}

		::System::Void SetNodeFrenzy(::System::UInt32 chapterID, ::System::UInt32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET))(this, chapterID, sectionID);
		}

		::System::Void UpdateNodeInfo_1(::Class_1_C4B679728AD83B32_8* stageUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4B679728AD83B32_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET))(this, stageUpdate);
		}

		::System::Void UpdateNodeInfo_2(::Class_1_D7F3D169C3137F53_1* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET))(this, levelInfo);
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
