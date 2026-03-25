#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_7.h"
#include "unitysdk/RPG/Client/ChenLingBattle/SoldierPropertyChangeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_FORMAT_OFFSET UNITYSDK_OFFSET(0x9347FC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_CHANGEDVALUE_OFFSET UNITYSDK_OFFSET(0x9347F30)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9347F50)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_ISUP_OFFSET UNITYSDK_OFFSET(0x9347F70)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9347F10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_SOLDIER_OFFSET UNITYSDK_OFFSET(0x9347EF0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_CHANGEDVALUE_OFFSET UNITYSDK_OFFSET(0x9347F40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x9347F60)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9347F20)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_SOLDIER_OFFSET UNITYSDK_OFFSET(0x9347F00)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9347ED0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPropertyChangeData_TypeDefinitionIndex = 62006;

	class SoldierPropertyChangeData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Soldier* _Soldier_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _ChangedValue_k__BackingField; // 0x18
		::Enum_3_71AA90D596A09AC8_7 _PropertyType_k__BackingField; // 0x20
		::RPG::Client::ChenLingBattle::SoldierPropertyChangeType _ChangeType_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::ChenLingBattle::Soldier* soldier, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType changeType, ::Enum_3_71AA90D596A09AC8_7 propertyType, ::RPG::GameCore::FixPoint changedValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType, ::Enum_3_71AA90D596A09AC8_7, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA__CTOR_OFFSET))(this, soldier, changeType, propertyType, changedValue);
		}

		::RPG::Client::ChenLingBattle::Soldier* get_Soldier()
		{
			return ((::RPG::Client::ChenLingBattle::Soldier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_SOLDIER_OFFSET))(this);
		}

		::System::Void set_Soldier(::RPG::Client::ChenLingBattle::Soldier* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_SOLDIER_OFFSET))(this, value);
		}

		::Enum_3_71AA90D596A09AC8_7 get_PropertyType()
		{
			return ((::Enum_3_71AA90D596A09AC8_7(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::Enum_3_71AA90D596A09AC8_7 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_7))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTYCHANGEDATA_SET_PROPERTYTYPE_OFFSET))(this, value);
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
