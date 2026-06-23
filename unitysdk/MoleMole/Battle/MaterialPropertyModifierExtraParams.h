#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyModifierExtraParamsType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_20D7905B25F5F2FF;
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_CREATEFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x12C4C680)
#define MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_EQUALS_OFFSET UNITYSDK_OFFSET(0x79C500)
#define MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79C610)
#define MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12C4C230)
#define MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12C4C320)
#define MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x79C620)
#define MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79C690)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MaterialPropertyModifierExtraParams_TypeDefinitionIndex = 63766;

	struct alignas(8) MaterialPropertyModifierExtraParams
	{
		::MoleMole::Config::MaterialPropertyModifierExtraParamsType ParamsType; // 0x10
		::System::String* FollowAttachPoint; // 0x18
		::System::String* EffectName; // 0x20
		::System::String* EffectChildPath; // 0x28

		static ::System::Boolean op_Equality(::MoleMole::Battle::MaterialPropertyModifierExtraParams lhs, ::MoleMole::Battle::MaterialPropertyModifierExtraParams rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::MaterialPropertyModifierExtraParams, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MoleMole::Battle::MaterialPropertyModifierExtraParams lhs, ::MoleMole::Battle::MaterialPropertyModifierExtraParams rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::MaterialPropertyModifierExtraParams, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_GETHASHCODE_OFFSET))(this);
		}

		static ::MoleMole::Battle::MaterialPropertyModifierExtraParams CreateFromConfig(::Class_1_20D7905B25F5F2FF* config)
		{
			return ((::MoleMole::Battle::MaterialPropertyModifierExtraParams(*)(::Class_1_20D7905B25F5F2FF*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS_CREATEFROMCONFIG_OFFSET))(config);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MATERIALPROPERTYMODIFIEREXTRAPARAMS___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
