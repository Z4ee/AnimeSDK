#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3E4B25FED7ED0D42;
namespace RPG::Client { class ChenLingBattleSoldierUnitConfig; }
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_CREATE_OFFSET UNITYSDK_OFFSET(0xCB16110)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0xCB19B00)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCB19D80)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xCB19DB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_PROPERTYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB19DA0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xCB19FB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_UNITCONFIG_OFFSET UNITYSDK_OFFSET(0xCB19E60)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCB19D90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCB19A40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB19AF0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierUnit_TypeDefinitionIndex = 75902;

	class SoldierUnit : public ::System::Object
	{
	public:
		::Class_1_3E4B25FED7ED0D42* _PropertyComponent_k__BackingField; // 0x10
		::System::UInt32 _ConfigID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::SoldierUnit* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierUnit*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>* GetAllDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GETALLDISPLAYPROPERTIES_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERUNIT_SET_CONFIGID_OFFSET))(this, a1);
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
