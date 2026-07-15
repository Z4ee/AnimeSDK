#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterDataComponent.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_425;
class Class_1_B8FB38F0526A59B0;
class Class_2_897CE1512E86E87A;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IAvatarServantRowWrap; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define RPG_GAMECORE_SERVANTDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127D5D30)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_AVATARSERVANTROW_OFFSET UNITYSDK_OFFSET(0x127D6490)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_CREATEPARAMS_OFFSET UNITYSDK_OFFSET(0x127D64B0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_HASLIFE_OFFSET UNITYSDK_OFFSET(0x127D63E0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_SERVANTCONFIG_OFFSET UNITYSDK_OFFSET(0x127D5C00)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_GET_SERVANTROWDATA_OFFSET UNITYSDK_OFFSET(0x127D6480)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x127D5720)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET UNITYSDK_OFFSET(0x127D5F50)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_RESETSERVANTPROPERTY_OFFSET UNITYSDK_OFFSET(0x127D5FD0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0x127D63F0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x127D64C0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__INITEVENT_OFFSET UNITYSDK_OFFSET(0x127D5C30)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__ISLIFEBINDINGTARGET_OFFSET UNITYSDK_OFFSET(0x127D62A0)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__ONCHARACTERSTAGESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x127D6330)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__ONPREABILITYADD_OFFSET UNITYSDK_OFFSET(0x127D6200)
#define RPG_GAMECORE_SERVANTDATACOMPONENT__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0x127D5E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantDataComponent_TypeDefinitionIndex = 55093;

	class ServantDataComponent : public ::RPG::GameCore::CharacterDataComponent
	{
	public:
		// static const ::System::String* AvatarServantUnstageReasonKey; // 0x0
		::Class_2_897CE1512E86E87A* _CreateParams; // 0x140
		::RPG::GameCore::ServantRowData* _ServantRowData; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitBattleCharacterData(::Class_1_B8FB38F0526A59B0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8FB38F0526A59B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_INITBATTLECHARACTERDATA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnAbilityCharacterInitialized(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_ONABILITYCHARACTERINITIALIZED_OFFSET))(this, a1);
		}

		::System::Void ResetServantProperty(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_RESETSERVANTPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _OnPreAbilityAdd(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__ONPREABILITYADD_OFFSET))(this, a1);
		}

		::System::Boolean _IsLifeBindingTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__ISLIFEBINDINGTARGET_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterStageStateChange(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT__ONCHARACTERSTAGESTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_HasLife()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_GET_HASLIFE_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::ICharacterRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ICharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTDATACOMPONENT_SET_ROWDATA_OFFSET))(this, a1);
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
	};
}
