#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UICONTROLCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECAB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIControlComponent_TypeDefinitionIndex = 67790;

	class UIControlComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
