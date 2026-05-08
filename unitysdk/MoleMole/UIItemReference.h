#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIITEMREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x163C1870)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemReference_TypeDefinitionIndex = 56688;

	class UIItemReference : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
