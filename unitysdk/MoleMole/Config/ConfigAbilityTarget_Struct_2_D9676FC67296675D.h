#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_STRUCT_2_D9676FC67296675D_COMPARE_OFFSET UNITYSDK_OFFSET(0x7F6B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_Struct_2_D9676FC67296675D_TypeDefinitionIndex = 76597;

	struct alignas(8) ConfigAbilityTarget_Struct_2_D9676FC67296675D
	{
		::UnityEngine::Vector3 Field_2_0; // 0x10
		::System::Func_5<::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Int32>* Field_2_7; // 0x20
		::MoleMole::Config::ConfigAbilityTarget* Field_2_6; // 0x28

		::System::Int32 Compare(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_STRUCT_2_D9676FC67296675D_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
