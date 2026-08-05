#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_STRUCT_2_AB79962F241E0778_COMPARE_OFFSET UNITYSDK_OFFSET(0x8C56C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_Struct_2_AB79962F241E0778_TypeDefinitionIndex = 76596;

	struct alignas(8) ConfigAbilityTarget_Struct_2_AB79962F241E0778
	{
		::UnityEngine::Vector3 Field_2_2; // 0x10
		::System::Func_5<::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*, ::System::Int32>* Field_2_1; // 0x20
		::MoleMole::Config::ConfigAbilityTarget* Field_2_0; // 0x28

		::System::Int32 Compare(::Class_1_CB7F0487F7A6164A* a1, ::Class_1_CB7F0487F7A6164A* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_STRUCT_2_AB79962F241E0778_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
