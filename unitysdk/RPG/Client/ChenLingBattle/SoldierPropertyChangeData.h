#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_8.h"
#include "unitysdk/RPG/Client/ChenLingBattle/SoldierPropertyChangeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_FORMAT_OFFSET UNITYSDK_OFFSET(0x9FB5B00)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_CHANGEDVALUE_OFFSET UNITYSDK_OFFSET(0x9FB5A70)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9FB5A90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_ISUP_OFFSET UNITYSDK_OFFSET(0x9FB5AB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9FB5A50)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_SOLDIER_OFFSET UNITYSDK_OFFSET(0x9FB5A30)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_CHANGEDVALUE_OFFSET UNITYSDK_OFFSET(0x9FB5A80)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9FB5AA0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9FB5A60)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_SOLDIER_OFFSET UNITYSDK_OFFSET(0x9FB5A40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB5A10)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPropertyChangeData_TypeDefinitionIndex = 70005;

	class SoldierPropertyChangeData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Soldier* _Soldier_k__BackingField; // 0x10
		::Enum_3_71AA90D596A09AC8_8 _PropertyType_k__BackingField; // 0x18
		::RPG::Client::ChenLingBattle::SoldierPropertyChangeType _ChangeType_k__BackingField; // 0x1C
		::RPG::GameCore::FixPoint _ChangedValue_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::ChenLingBattle::Soldier* soldier, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType changeType, ::Enum_3_71AA90D596A09AC8_8 propertyType, ::RPG::GameCore::FixPoint changedValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType, ::Enum_3_71AA90D596A09AC8_8, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA__CTOR_OFFSET))(this, soldier, changeType, propertyType, changedValue);
		}

		::RPG::Client::ChenLingBattle::Soldier* get_Soldier()
		{
			return ((::RPG::Client::ChenLingBattle::Soldier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_SOLDIER_OFFSET))(this);
		}

		::System::Void set_Soldier(::RPG::Client::ChenLingBattle::Soldier* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_SOLDIER_OFFSET))(this, value);
		}

		::Enum_3_71AA90D596A09AC8_8 get_PropertyType()
		{
			return ((::Enum_3_71AA90D596A09AC8_8(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::Enum_3_71AA90D596A09AC8_8 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_PROPERTYTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_ChangedValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_CHANGEDVALUE_OFFSET))(this);
		}

		::System::Void set_ChangedValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_CHANGEDVALUE_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingBattle::SoldierPropertyChangeType get_ChangeType()
		{
			return ((::RPG::Client::ChenLingBattle::SoldierPropertyChangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Void set_ChangeType(::RPG::Client::ChenLingBattle::SoldierPropertyChangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_CHANGETYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_ISUP_OFFSET))(this);
		}

		::System::String* Format()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_FORMAT_OFFSET))(this);
		}
	};
}
