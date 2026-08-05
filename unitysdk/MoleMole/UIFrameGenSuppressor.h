#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19F9EAE0)
#define MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19F9EA30)
#define MOLEMOLE_UIFRAMEGENSUPPRESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9EB90)

namespace MoleMole
{
	inline static constexpr unsigned int UIFrameGenSuppressor_TypeDefinitionIndex = 89772;

	class UIFrameGenSuppressor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRAMEGENSUPPRESSOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONDISABLE_OFFSET))(this);
		}
	};
}
