#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_1212C47FC4BC6471;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_OFFERINGMODULE_GETOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xC2F0000)
#define RPG_CLIENT_OFFERINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC2EFE50)
#define RPG_CLIENT_OFFERINGMODULE_ISLONGTAILREWARD_OFFSET UNITYSDK_OFFSET(0xC2F0090)
#define RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xC2F00F0)
#define RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0xC2F0280)
#define RPG_CLIENT_OFFERINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2F0350)
#define RPG_CLIENT_OFFERINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2F11A0)
#define RPG_CLIENT_OFFERINGMODULE__GETOFFERINGINFO_OFFSET UNITYSDK_OFFSET(0xC2F0EB0)
#define RPG_CLIENT_OFFERINGMODULE__ONGETOFFERINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC2F0610)
#define RPG_CLIENT_OFFERINGMODULE__ONOFFERINGINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC2F0E30)
#define RPG_CLIENT_OFFERINGMODULE__ONSUBMITOFFERINGITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xC2F0C10)
#define RPG_CLIENT_OFFERINGMODULE__ONTAKEOFFERINGREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xC2F0D70)
#define RPG_CLIENT_OFFERINGMODULE__REFRESHREWARDDATA_OFFSET UNITYSDK_OFFSET(0xC2F0C90)
#define RPG_CLIENT_OFFERINGMODULE__TRYINITREWARDDATA_OFFSET UNITYSDK_OFFSET(0xC2F0890)
#define RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC2F11C0)
#define RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2F1240)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingModule_TypeDefinitionIndex = 62072;

	class OfferingModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OfferingRewardData*>* _AllOfferingRewardDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_INIT_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetOfferingRewardData(::System::UInt32 a1)
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_GETOFFERINGREWARDDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsLongTailReward(::RPG::GameCore::OfferingLevelConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfferingLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_ISLONGTAILREWARD_OFFSET))(this, a1);
		}

		::System::Boolean ShouldShowMapShortCutHint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET))(this, a1);
		}

		::System::Boolean ShouldShowUpgradeHint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWUPGRADEHINT_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetOfferingInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONGETOFFERINGINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSubmitOfferingItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONSUBMITOFFERINGITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeOfferingRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONTAKEOFFERINGREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnOfferingInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONOFFERINGINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _GetOfferingInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__GETOFFERINGINFO_OFFSET))(this);
		}

		::System::Void _RefreshRewardData(::Class_1_1212C47FC4BC6471* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1212C47FC4BC6471*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__REFRESHREWARDDATA_OFFSET))(this, a1);
		}

		::System::Void _TryInitRewardData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__TRYINITREWARDDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
