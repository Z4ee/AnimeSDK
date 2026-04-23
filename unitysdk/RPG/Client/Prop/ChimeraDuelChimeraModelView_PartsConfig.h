#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELBODY_OFFSET UNITYSDK_OFFSET(0xADC4060)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELHORN_OFFSET UNITYSDK_OFFSET(0xADC4080)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELITEMMATOVERRIDE_OFFSET UNITYSDK_OFFSET(0xADC40E0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELTAIL_OFFSET UNITYSDK_OFFSET(0xADC40C0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELWING_OFFSET UNITYSDK_OFFSET(0xADC40A0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELBODY_OFFSET UNITYSDK_OFFSET(0xADC4070)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELHORN_OFFSET UNITYSDK_OFFSET(0xADC4090)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELITEMMATOVERRIDE_OFFSET UNITYSDK_OFFSET(0xADC40F0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELTAIL_OFFSET UNITYSDK_OFFSET(0xADC40D0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELWING_OFFSET UNITYSDK_OFFSET(0xADC40B0)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xADC3600)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraModelView_PartsConfig_TypeDefinitionIndex = 71823;

	class ChimeraDuelChimeraModelView_PartsConfig : public ::System::Object
	{
	public:
		::System::String* _ModelItemMatOverride_k__BackingField; // 0x10
		::RPG::GameCore::ChimeraTailPartType _ModelTail_k__BackingField; // 0x18
		::RPG::GameCore::ChimeraHornsPartType _ModelHorn_k__BackingField; // 0x1C
		::RPG::GameCore::ChimeraWingsPartType _ModelWing_k__BackingField; // 0x20
		::RPG::GameCore::ChimeraMaterialType _ModelBody_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraMaterialType get_ModelBody()
		{
			return ((::RPG::GameCore::ChimeraMaterialType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELBODY_OFFSET))(this);
		}

		::System::Void set_ModelBody(::RPG::GameCore::ChimeraMaterialType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELBODY_OFFSET))(this, value);
		}

		::RPG::GameCore::ChimeraHornsPartType get_ModelHorn()
		{
			return ((::RPG::GameCore::ChimeraHornsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELHORN_OFFSET))(this);
		}

		::System::Void set_ModelHorn(::RPG::GameCore::ChimeraHornsPartType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraHornsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELHORN_OFFSET))(this, value);
		}

		::RPG::GameCore::ChimeraWingsPartType get_ModelWing()
		{
			return ((::RPG::GameCore::ChimeraWingsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELWING_OFFSET))(this);
		}

		::System::Void set_ModelWing(::RPG::GameCore::ChimeraWingsPartType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWingsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELWING_OFFSET))(this, value);
		}

		::RPG::GameCore::ChimeraTailPartType get_ModelTail()
		{
			return ((::RPG::GameCore::ChimeraTailPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELTAIL_OFFSET))(this);
		}

		::System::Void set_ModelTail(::RPG::GameCore::ChimeraTailPartType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTailPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELTAIL_OFFSET))(this, value);
		}

		::System::String* get_ModelItemMatOverride()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELITEMMATOVERRIDE_OFFSET))(this);
		}

		::System::Void set_ModelItemMatOverride(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELITEMMATOVERRIDE_OFFSET))(this, value);
		}
	};
}
