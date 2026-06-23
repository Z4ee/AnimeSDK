#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIPROPERTYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17899E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPropertyType_TypeDefinitionIndex = 84552;

	class UIPropertyType : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 PropertyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPROPERTYTYPE__CTOR_OFFSET))(this);
		}
	};
}
