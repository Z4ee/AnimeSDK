#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17F8C720)
#define MOLEMOLE_UIFRAMEGENSUPPRESSOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17F8C670)
#define MOLEMOLE_UIFRAMEGENSUPPRESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFrameGenSuppressor_TypeDefinitionIndex = 84934;

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
