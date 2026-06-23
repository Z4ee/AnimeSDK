#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_UICONTROLLEROPTIONSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x175C3E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIControllerOptionSetting_TypeDefinitionIndex = 86543;

	class UIControllerOptionSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* loopAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLEROPTIONSETTING__CTOR_OFFSET))(this);
		}
	};
}
