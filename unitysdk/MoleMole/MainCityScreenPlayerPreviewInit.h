#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MAINCITYSCREENPLAYERPREVIEWINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x107FB990)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityScreenPlayerPreviewInit_TypeDefinitionIndex = 41504;

	class MainCityScreenPlayerPreviewInit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSCREENPLAYERPREVIEWINIT__CTOR_OFFSET))(this);
		}
	};
}
