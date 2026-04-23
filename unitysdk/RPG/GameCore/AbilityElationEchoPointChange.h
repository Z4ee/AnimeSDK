#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB50FE70)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB50FE20)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB50FF00)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50FEE0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xB50FEC0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xB50FF30)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB50FD60)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB50FF20)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB50FEF0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xB50FED0)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xB50FF40)
#define RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB50FF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityElationEchoPointChange_TypeDefinitionIndex = 52146;

	class AbilityElationEchoPointChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x18
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _OriginModifyValue_k__BackingField; // 0x150
		::RPG::GameCore::FixPoint _ChangeValue_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityElationEchoPointChange* Init(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::FixPoint originModifyValue, ::RPG::GameCore::FixPoint changeValue, ::Struct_2_5909FD7779934CCA changeParams)
		{
			return ((::RPG::GameCore::AbilityElationEchoPointChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_INIT_OFFSET))(this, entity, originModifyValue, changeValue, changeParams);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_OriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_ORIGINMODIFYVALUE_OFFSET))(this);
		}

		::System::Void set_OriginModifyValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_ORIGINMODIFYVALUE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_ChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEVALUE_OFFSET))(this, value);
		}

		::Struct_2_5909FD7779934CCA get_ChangeParams()
		{
			return ((::Struct_2_5909FD7779934CCA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_CHANGEPARAMS_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_TargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_GET_TARGETENTITY_OFFSET))(this);
		}

		::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYELATIONECHOPOINTCHANGE_SET_TARGETENTITY_OFFSET))(this, value);
		}
	};
}
