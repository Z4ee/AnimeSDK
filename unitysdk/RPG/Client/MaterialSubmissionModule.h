#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_EA5D42F627739C39;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MaterialSubmitter; }
namespace RPG::Client { class MaterialSubmitterGroup; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWREWARDTAKENPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA873BC0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWSUBMITPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA873B30)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMEREWARD_OFFSET UNITYSDK_OFFSET(0xA873C10)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMESUBMITTEDSUBMITTERID_OFFSET UNITYSDK_OFFSET(0xA873B70)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTERGROUP_OFFSET UNITYSDK_OFFSET(0xA8727A0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTER_OFFSET UNITYSDK_OFFSET(0xA8735F0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA8732A0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xA872D90)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA8734D0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA873510)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__BUILDMAP_OFFSET UNITYSDK_OFFSET(0xA873330)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8740D0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__GETORCREATESUBMITTERGROUP_OFFSET UNITYSDK_OFFSET(0xA8738C0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONGETMATERIALSUBMITACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA873CB0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONSUBMITMATERIALSUBMITACTIVITYMATERIALSCRSP_OFFSET UNITYSDK_OFFSET(0xA873D60)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONTAKEMATERIALSUBMITACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA873E80)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA8742E0)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA874370)
#define RPG_CLIENT_MATERIALSUBMISSIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA8743D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSubmissionModule_TypeDefinitionIndex = 56994;

	class MaterialSubmissionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitterGroup*>* _SubmitterGroups; // 0x10
		::Class_1_EA5D42F627739C39* _ServerAgent; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>* _Submitters; // 0x20
		::Proto::ItemList* _RewardCahce; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemToGroupMap; // 0x30
		::System::Nullable_1<::System::UInt32> _SubmittedSubmitterIDCache; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitter* GetMaterialSubmitter(::System::UInt32 id)
		{
			return ((::RPG::Client::MaterialSubmitter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTER_OFFSET))(this, id);
		}

		::RPG::Client::MaterialSubmitterGroup* GetMaterialSubmitterGroup(::System::UInt32 id)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_GETMATERIALSUBMITTERGROUP_OFFSET))(this, id);
		}

		::System::Boolean CheckNeedShowSubmitPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWSUBMITPERFORMANCE_OFFSET))(this);
		}

		::System::UInt32 ConsumeSubmittedSubmitterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMESUBMITTEDSUBMITTERID_OFFSET))(this);
		}

		::System::Boolean CheckNeedShowRewardTakenPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CHECKNEEDSHOWREWARDTAKENPERFORMANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ConsumeReward()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE_CONSUMEREWARD_OFFSET))(this);
		}

		::System::Void _OnGetMaterialSubmitActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONGETMATERIALSUBMITACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSubmitMaterialSubmitActivityMaterialScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONSUBMITMATERIALSUBMITACTIVITYMATERIALSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeMaterialSubmitActivityRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__ONTAKEMATERIALSUBMITACTIVITYREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _BuildMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__BUILDMAP_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitterGroup* _GetOrCreateSubmitterGroup(::System::UInt32 id)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE__GETORCREATESUBMITTERGROUP_OFFSET))(this, id);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMISSIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
