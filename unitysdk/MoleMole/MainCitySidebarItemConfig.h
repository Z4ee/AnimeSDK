#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MAINCITYSIDEBARITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E84850)

namespace MoleMole
{
	inline static constexpr unsigned int MainCitySidebarItemConfig_TypeDefinitionIndex = 45514;

	class MainCitySidebarItemConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* Light; // 0x18
		::UnityEngine::UI::Image* Select; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARITEMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
