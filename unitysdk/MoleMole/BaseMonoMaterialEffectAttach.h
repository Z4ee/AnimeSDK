#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach_Enum_3_C24CB208F631818F.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_210;

#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_GET_CURRENTSETUPSTATE_OFFSET UNITYSDK_OFFSET(0x17428680)
#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17428690)
#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_PROCESSTORENDERERS_OFFSET UNITYSDK_OFFSET(0x174286D0)
#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH__CTOR_OFFSET UNITYSDK_OFFSET(0x17428710)

namespace MoleMole
{
	inline static constexpr unsigned int BaseMonoMaterialEffectAttach_TypeDefinitionIndex = 50146;

	class BaseMonoMaterialEffectAttach : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::BaseMonoMaterialEffectAttach_Enum_3_C24CB208F631818F Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMONOMATERIALEFFECTATTACH__CTOR_OFFSET))(this);
		}

		::MoleMole::BaseMonoMaterialEffectAttach_Enum_3_C24CB208F631818F get_CurrentSetupState()
		{
			return ((::MoleMole::BaseMonoMaterialEffectAttach_Enum_3_C24CB208F631818F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_GET_CURRENTSETUPSTATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ProcessToRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_PROCESSTORENDERERS_OFFSET))(this);
		}
	};
}
