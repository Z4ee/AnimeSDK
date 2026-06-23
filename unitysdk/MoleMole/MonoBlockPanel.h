#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOBLOCKPANEL_SETTIMESPANTAKEEFFECT_OFFSET UNITYSDK_OFFSET(0x12628EC0)
#define MOLEMOLE_MONOBLOCKPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x12628E20)
#define MOLEMOLE_MONOBLOCKPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x12628F40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBlockPanel_TypeDefinitionIndex = 87352;

	class MonoBlockPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x1C
		::System::Boolean Field_5_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBLOCKPANEL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBLOCKPANEL_UPDATE_OFFSET))(this);
		}

		::System::Void SetTimeSpanTakeEffect(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBLOCKPANEL_SETTIMESPANTAKEEFFECT_OFFSET))(this, a1);
		}
	};
}
