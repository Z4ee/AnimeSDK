#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB509960)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5098C0)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB5099B0)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xB509910)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB509870)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB509A00)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GET_MODIFYSOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xB509A40)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_GET_USEBIGCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xB509A30)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB5097A0)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_SET_CHANGEPARAMS_OFFSET UNITYSDK_OFFSET(0xB509A20)
#define RPG_GAMECORE_ABILITYANYHPCHANGE_SET_MODIFYSOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xB509A50)
#define RPG_GAMECORE_ABILITYANYHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB509A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityAnyHPChange_TypeDefinitionIndex = 52119;

	class AbilityAnyHPChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* _ModifySourceEntity_k__BackingField; // 0x18
		::Struct_2_5909FD7779934CCA _ChangeParams_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _ChangeValue; // 0x150
		::RPG::GameCore::FixPoint _OriginModifyValue; // 0x158
		::System::UInt32 _EntityRuntimeID; // 0x160
		::RPG::GameCore::FixPoint _NegativeHPChangeValue; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityAnyHPChange* Init(::RPG::GameCore::GameEntity* ModifyEntity, ::RPG::GameCore::FixPoint OriginModifyValue, ::RPG::GameCore::FixPoint ChangeValue, ::Struct_2_5909FD7779934CCA pChangeParams, ::RPG::GameCore::FixPoint negativeHPChange)
		{
			return ((::RPG::GameCore::AbilityAnyHPChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_INIT_OFFSET))(this, ModifyEntity, OriginModifyValue, ChangeValue, pChangeParams, negativeHPChange);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetOriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETORIGINMODIFYVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetNegativeHPChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GETNEGATIVEHPCHANGEVALUE_OFFSET))(this);
		}

		::Struct_2_5909FD7779934CCA get_ChangeParams()
		{
			return ((::Struct_2_5909FD7779934CCA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GET_CHANGEPARAMS_OFFSET))(this);
		}

		::System::Void set_ChangeParams(::Struct_2_5909FD7779934CCA value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_SET_CHANGEPARAMS_OFFSET))(this, value);
		}

		::System::Boolean get_UseBigChangeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GET_USEBIGCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ModifySourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_GET_MODIFYSOURCEENTITY_OFFSET))(this);
		}

		::System::Void set_ModifySourceEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYANYHPCHANGE_SET_MODIFYSOURCEENTITY_OFFSET))(this, value);
		}
	};
}
