#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleModule; }
namespace RPG::Client::PetMarble { class PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0xDAC8610)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAC8880)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDAC9CF0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_TRIGGERTALK_OFFSET UNITYSDK_OFFSET(0xDAC89B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ADDNTFHANDLERS_OFFSET UNITYSDK_OFFSET(0xDAC94B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC86C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__GETORCREATETALKCONFIGBYTALK_OFFSET UNITYSDK_OFFSET(0xDACA4B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__GETORCREATETALKCONFIG_OFFSET UNITYSDK_OFFSET(0xDAC8A30)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xDAC8830)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONMARBLEBATTLETURNUPDATE_OFFSET UNITYSDK_OFFSET(0xDAC9890)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONMARBLESHOWCHARGEUI_OFFSET UNITYSDK_OFFSET(0xDAC96D0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONMARBLETRIGGERLAUNCHUI_OFFSET UNITYSDK_OFFSET(0xDAC97B0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONPETMARBLEBATTLESHOWSPECIALKILL_OFFSET UNITYSDK_OFFSET(0xDACA6A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONPETMARBLESPECIALTALK_OFFSET UNITYSDK_OFFSET(0xDACA5E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONPETMARBLESTARTTALK_OFFSET UNITYSDK_OFFSET(0xDAC9D80)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__PICKSPEAKERENTITYIDFORTALK_OFFSET UNITYSDK_OFFSET(0xDACA0F0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleBattlePetTalkController_TypeDefinitionIndex = 74702;

	class PetMarbleBattlePetTalkController : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _GoldRatioFraction = 0x9E3779B1; // 0x0
		::System::Random* _Random; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PetMarbleTalkTriggerType, ::System::Collections::Generic::List_1<::RPG::Client::PetMarble::PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig*>*>*>* _TalkDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _BondDict; // 0x20
		::System::Nullable_1<::System::Int32> _CurRound; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::PetMarbleBattlePetTalkController* Create()
		{
			return ((::RPG::Client::PetMarble::PetMarbleBattlePetTalkController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void TriggerTalk(::System::UInt32 a1, ::RPG::GameCore::PetMarbleTalkTriggerType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PetMarbleTalkTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_TRIGGERTALK_OFFSET))(this, a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void _AddNtfHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ADDNTFHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMarbleShowChargeUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONMARBLESHOWCHARGEUI_OFFSET))(this, a1);
		}

		::System::Void _OnMarbleTriggerLaunchUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONMARBLETRIGGERLAUNCHUI_OFFSET))(this, a1);
		}

		::System::Void _OnMarbleBattleTurnUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONMARBLEBATTLETURNUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnPetMarbleStartTalk(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONPETMARBLESTARTTALK_OFFSET))(this, a1);
		}

		::System::UInt32 _PickSpeakerEntityIdForTalk(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__PICKSPEAKERENTITYIDFORTALK_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetMarbleSpecialTalk(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONPETMARBLESPECIALTALK_OFFSET))(this, a1);
		}

		::System::Void _OnPetMarbleBattleShowSpecialKill(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__ONPETMARBLEBATTLESHOWSPECIALKILL_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig* _GetOrCreateTalkConfigByTalk(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::PetMarble::PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__GETORCREATETALKCONFIGBYTALK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::PetMarble::PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig* _GetOrCreateTalkConfig(::System::UInt32 a1, ::RPG::GameCore::PetMarbleTalkTriggerType a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::PetMarble::PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PetMarbleTalkTriggerType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER__GETORCREATETALKCONFIG_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::MarbleModule* get__Module()
		{
			return ((::RPG::Client::MarbleModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_GET__MODULE_OFFSET))(this);
		}
	};
}
