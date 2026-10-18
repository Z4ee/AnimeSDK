#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELBODY_OFFSET UNITYSDK_OFFSET(0xDC53200)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELHORN_OFFSET UNITYSDK_OFFSET(0xDC53220)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELITEMMATOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDC53280)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELTAIL_OFFSET UNITYSDK_OFFSET(0xDC53260)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELWING_OFFSET UNITYSDK_OFFSET(0xDC53240)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELBODY_OFFSET UNITYSDK_OFFSET(0xDC53210)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELHORN_OFFSET UNITYSDK_OFFSET(0xDC53230)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELITEMMATOVERRIDE_OFFSET UNITYSDK_OFFSET(0xDC53290)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELTAIL_OFFSET UNITYSDK_OFFSET(0xDC53270)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELWING_OFFSET UNITYSDK_OFFSET(0xDC53250)
#define RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDC52850)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelChimeraModelView_PartsConfig_TypeDefinitionIndex = 78326;

	class ChimeraDuelChimeraModelView_PartsConfig : public ::System::Object
	{
	public:
		::System::String* _ModelItemMatOverride_k__BackingField; // 0x10
		::RPG::GameCore::ChimeraWingsPartType _ModelWing_k__BackingField; // 0x18
		::RPG::GameCore::ChimeraTailPartType _ModelTail_k__BackingField; // 0x1C
		::RPG::GameCore::ChimeraHornsPartType _ModelHorn_k__BackingField; // 0x20
		::RPG::GameCore::ChimeraMaterialType _ModelBody_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraMaterialType get_ModelBody()
		{
			return ((::RPG::GameCore::ChimeraMaterialType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELBODY_OFFSET))(this);
		}

		::System::Void set_ModelBody(::RPG::GameCore::ChimeraMaterialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraMaterialType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELBODY_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraHornsPartType get_ModelHorn()
		{
			return ((::RPG::GameCore::ChimeraHornsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELHORN_OFFSET))(this);
		}

		::System::Void set_ModelHorn(::RPG::GameCore::ChimeraHornsPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraHornsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELHORN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraWingsPartType get_ModelWing()
		{
			return ((::RPG::GameCore::ChimeraWingsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELWING_OFFSET))(this);
		}

		::System::Void set_ModelWing(::RPG::GameCore::ChimeraWingsPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWingsPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELWING_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraTailPartType get_ModelTail()
		{
			return ((::RPG::GameCore::ChimeraTailPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELTAIL_OFFSET))(this);
		}

		::System::Void set_ModelTail(::RPG::GameCore::ChimeraTailPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTailPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELTAIL_OFFSET))(this, a1);
		}

		::System::String* get_ModelItemMatOverride()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_GET_MODELITEMMATOVERRIDE_OFFSET))(this);
		}

		::System::Void set_ModelItemMatOverride(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELCHIMERAMODELVIEW_PARTSCONFIG_SET_MODELITEMMATOVERRIDE_OFFSET))(this, a1);
		}
	};
}
