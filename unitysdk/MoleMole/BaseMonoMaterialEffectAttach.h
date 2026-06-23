#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach_Enum_3_1AF220FD518C01B1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_389;

#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_GET_CURRENTSETUPSTATE_OFFSET UNITYSDK_OFFSET(0x17023450)
#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17023460)
#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_PROCESSTORENDERERS_OFFSET UNITYSDK_OFFSET(0x170234A0)
#define MOLEMOLE_BASEMONOMATERIALEFFECTATTACH__CTOR_OFFSET UNITYSDK_OFFSET(0x170234E0)

namespace MoleMole
{
	inline static constexpr unsigned int BaseMonoMaterialEffectAttach_TypeDefinitionIndex = 46965;

	class BaseMonoMaterialEffectAttach : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::BaseMonoMaterialEffectAttach_Enum_3_1AF220FD518C01B1 Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMONOMATERIALEFFECTATTACH__CTOR_OFFSET))(this);
		}

		::MoleMole::BaseMonoMaterialEffectAttach_Enum_3_1AF220FD518C01B1 get_CurrentSetupState()
		{
			return ((::MoleMole::BaseMonoMaterialEffectAttach_Enum_3_1AF220FD518C01B1(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEMONOMATERIALEFFECTATTACH_GET_CURRENTSETUPSTATE_OFFSET))(this);
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
