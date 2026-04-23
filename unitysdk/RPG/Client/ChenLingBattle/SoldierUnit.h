#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3E4B25FED7ED0D42;
namespace RPG::Client { class ChenLingBattleSoldierUnitConfig; }
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_CREATE_OFFSET UNITYSDK_OFFSET(0x9FB38F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FB6170)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9FB6350)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9FB6380)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_PROPERTYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9FB6370)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x9FB6530)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_UNITCONFIG_OFFSET UNITYSDK_OFFSET(0x9FB6480)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9FB6360)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9FB6030)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB6160)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierUnit_TypeDefinitionIndex = 70140;

	class SoldierUnit : public ::System::Object
	{
	public:
		::Class_1_3E4B25FED7ED0D42* _PropertyComponent_k__BackingField; // 0x10
		::System::UInt32 _ConfigID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_1_OFFSET))(this, configID);
		}

		static ::RPG::Client::ChenLingBattle::SoldierUnit* Create(::System::UInt32 configID)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierUnit*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_CREATE_OFFSET))(configID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>* GetAllDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GETALLDISPLAYPROPERTIES_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_SET_CONFIGID_OFFSET))(this, value);
		}

		::Class_1_3E4B25FED7ED0D42* get_PropertyComponent()
		{
			return ((::Class_1_3E4B25FED7ED0D42*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_PROPERTYCOMPONENT_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_MODELPATH_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_SCALE_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleSoldierUnitConfig* get_UnitConfig()
		{
			return ((::RPG::Client::ChenLingBattleSoldierUnitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_UNITCONFIG_OFFSET))(this);
		}
	};
}
