#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3E4B25FED7ED0D42;
namespace RPG::Client { class ChenLingBattleSoldierUnitConfig; }
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_CREATE_OFFSET UNITYSDK_OFFSET(0x9345D80)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9348620)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9348800)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9348830)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_PROPERTYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9348820)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x93489D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_UNITCONFIG_OFFSET UNITYSDK_OFFSET(0x9348930)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9348810)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x93484E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x9348610)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierUnit_TypeDefinitionIndex = 62141;

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
