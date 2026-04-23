#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_382;
class Class_1_B8FB38F0526A59B0;
class Class_2_897CE1512E86E87A;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IAvatarServantRowWrap; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define RPG_GAMECORE_SERVANTDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB72D860)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_AVATARSERVANTROW_OFFSET UNITYSDK_OFFSET(0xB72DF60)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_CREATEPARAMS_OFFSET UNITYSDK_OFFSET(0xB72DF80)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0xB72DEB0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_SERVANTCONFIG_OFFSET UNITYSDK_OFFSET(0xB72D790)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_SERVANTROWDATA_OFFSET UNITYSDK_OFFSET(0xB72DF50)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xB72D410)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xB72D9E0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_RESETSERVANTPROPERTY_OFFSET UNITYSDK_OFFSET(0xB72DA60)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xB72DEC0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB72DF90)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__INITEVENT_OFFSET UNITYSDK_OFFSET(0xB72D7B0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__ISLIFEBINDINGTARGET_OFFSET UNITYSDK_OFFSET(0xB72DD70)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__ONCHARACTERSTAGESTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB72DE00)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__ONPREABILITYADD_OFFSET UNITYSDK_OFFSET(0xB72DCE0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0xB72D930)
#define RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB72E300)
#define RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0xB72DFA0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0xB72E380)
#define RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xB72E3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantDataComponent_TypeDefinitionIndex = 53161;

	class ServantDataComponent : public ::RPG::GameCore::CharacterDataComponent
	{
	public:
		// static const ::System::String* AvatarServantUnstageReasonKey; // 0x0
		::Class_2_897CE1512E86E87A* _CreateParams; // 0x120
		::RPG::GameCore::ServantRowData* _ServantRowData; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* createParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET))(this, createParam);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, pTurnBasedAbility);
		}

		::System::Void ResetServantProperty(::RPG::GameCore::FixPoint InitSPRatio_Numerator, ::RPG::GameCore::FixPoint InitHPRatio_Denominator)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_RESETSERVANTPROPERTY_OFFSET))(this, InitSPRatio_Numerator, InitHPRatio_Denominator);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _OnPreAbilityAdd(::Class_0_16E4307DCC419505_382* pEvtRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__ONPREABILITYADD_OFFSET))(this, pEvtRef);
		}

		::System::Boolean _IsLifeBindingTarget(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__ISLIFEBINDINGTARGET_OFFSET))(this, entity);
		}

		::System::Void _OnCharacterStageStateChange(::RPG::GameCore::GameEntity* entity, ::System::Boolean state, ::System::String* reasonKey)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__ONCHARACTERSTAGESTATECHANGE_OFFSET))(this, entity, state, reasonKey);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_GET_HASLIFE_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::ICharacterRowData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_SET_ROWDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::ServantRowData* get_ServantRowData()
		{
			return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_GET_SERVANTROWDATA_OFFSET))(this);
		}

		::RPG::GameCore::IAvatarServantRowWrap* get_AvatarServantRow()
		{
			return ((::RPG::GameCore::IAvatarServantRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_GET_AVATARSERVANTROW_OFFSET))(this);
		}

		::RPG::GameCore::ServantConfig* get_ServantConfig()
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_GET_SERVANTCONFIG_OFFSET))(this);
		}

		::Class_2_897CE1512E86E87A* get_CreateParams()
		{
			return ((::Class_2_897CE1512E86E87A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_GET_CREATEPARAMS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_INITBATTLECHARACTERDATA_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_set_RowData(::RPG::GameCore::ICharacterRowData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT___IFIXBASEPROXY_SET_ROWDATA_OFFSET))(this, P0);
		}
	};
}
