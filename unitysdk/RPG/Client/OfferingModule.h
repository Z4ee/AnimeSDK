#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_070964BB68D18B9F_1;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_OFFERINGMODULE_GETOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD9DD590)
#define RPG_CLIENT_OFFERINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD9DD440)
#define RPG_CLIENT_OFFERINGMODULE_ISLONGTAILREWARD_OFFSET UNITYSDK_OFFSET(0xD9DD620)
#define RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xD9DD680)
#define RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0xD9DD810)
#define RPG_CLIENT_OFFERINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD9DD8E0)
#define RPG_CLIENT_OFFERINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD9DE730)
#define RPG_CLIENT_OFFERINGMODULE__GETOFFERINGINFO_OFFSET UNITYSDK_OFFSET(0xD9DE440)
#define RPG_CLIENT_OFFERINGMODULE__ONGETOFFERINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xD9DDBA0)
#define RPG_CLIENT_OFFERINGMODULE__ONOFFERINGINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD9DE3C0)
#define RPG_CLIENT_OFFERINGMODULE__ONSUBMITOFFERINGITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xD9DE1A0)
#define RPG_CLIENT_OFFERINGMODULE__ONTAKEOFFERINGREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD9DE300)
#define RPG_CLIENT_OFFERINGMODULE__REFRESHREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD9DE220)
#define RPG_CLIENT_OFFERINGMODULE__TRYINITREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD9DDE20)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingModule_TypeDefinitionIndex = 66422;

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

		::System::Void _RefreshRewardData(::Class_1_070964BB68D18B9F_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__REFRESHREWARDDATA_OFFSET))(this, a1);
		}

		::System::Void _TryInitRewardData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__TRYINITREWARDDATA_OFFSET))(this);
		}
	};
}
