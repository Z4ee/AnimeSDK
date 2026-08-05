#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MainCitySidebarPrefabIconConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_DEFAULTICONWIDGETPREFAB_OFFSET UNITYSDK_OFFSET(0x1790A260)
#define MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_GATHERPREFAB_OFFSET UNITYSDK_OFFSET(0x1790A220)
#define MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_PARENTFOLDER_OFFSET UNITYSDK_OFFSET(0x1790A1A0)
#define MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_TITLEPREFAB_OFFSET UNITYSDK_OFFSET(0x1790A1E0)
#define MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1790A2A0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCitySidebarPrefabConfig_TypeDefinitionIndex = 59341;

	class MainCitySidebarPrefabConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _parentFolder; // 0x18
		::System::String* _titlePrefab; // 0x20
		::System::String* _gatherPrefab; // 0x28
		::System::String* _defaultIconWidgetPrefab; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::MainCitySidebarPrefabIconConfig*>* SpecialIconPrefabs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_ParentFolder()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_PARENTFOLDER_OFFSET))(this);
		}

		::System::String* get_TitlePrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_TITLEPREFAB_OFFSET))(this);
		}

		::System::String* get_GatherPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_GATHERPREFAB_OFFSET))(this);
		}

		::System::String* get_DefaultIconWidgetPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYSIDEBARPREFABCONFIG_GET_DEFAULTICONWIDGETPREFAB_OFFSET))(this);
		}
	};
}
