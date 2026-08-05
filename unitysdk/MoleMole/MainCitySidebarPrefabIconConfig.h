#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MAINCITYSIDEBARPREFABICONCONFIG_GET_ICONWIDGETPREFAB_OFFSET UNITYSDK_OFFSET(0x1908DBA0)
#define MOLEMOLE_MAINCITYSIDEBARPREFABICONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1908DBE0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCitySidebarPrefabIconConfig_TypeDefinitionIndex = 89836;

	class MainCitySidebarPrefabIconConfig : public ::System::Object
	{
	public:
		::System::Int32 SidebarId; // 0x10
		::System::String* _iconWidgetPrefab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARPREFABICONCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_IconWidgetPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARPREFABICONCONFIG_GET_ICONWIDGETPREFAB_OFFSET))(this);
		}
	};
}
