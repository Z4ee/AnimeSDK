#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SKILLBUTTONCONTAINER_SETBUTTONABILITYS_OFFSET UNITYSDK_OFFSET(0x17387870)
#define MOLEMOLE_SKILLBUTTONCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x173878B0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillButtonContainer_TypeDefinitionIndex = 48117;

	class SkillButtonContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void SetButtonAbilitys()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLBUTTONCONTAINER_SETBUTTONABILITYS_OFFSET))(this);
		}
	};
}
