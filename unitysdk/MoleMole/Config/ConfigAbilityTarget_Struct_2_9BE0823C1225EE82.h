#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_STRUCT_2_9BE0823C1225EE82_COMPARE_OFFSET UNITYSDK_OFFSET(0x7BF180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_Struct_2_9BE0823C1225EE82_TypeDefinitionIndex = 72637;

	struct alignas(8) ConfigAbilityTarget_Struct_2_9BE0823C1225EE82
	{
		::UnityEngine::Vector3 Field_2_0; // 0x10
		::System::Func_5<::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::System::Int32>* Field_2_1; // 0x20
		::MoleMole::Config::ConfigAbilityTarget* Field_2_2; // 0x28

		::System::Int32 Compare(::Struct_2_FA5F50563E60AFBA a1, ::Struct_2_FA5F50563E60AFBA a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_STRUCT_2_9BE0823C1225EE82_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
