#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIITEMVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1482AB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemVariable_TypeDefinitionIndex = 57339;

	class UIItemVariable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMVARIABLE__CTOR_OFFSET))(this);
		}
	};
}
