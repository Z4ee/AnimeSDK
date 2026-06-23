#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ILoader; }

#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x153299F0)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_0__STARTLOADGAMECONFIGASSETSBYLOADER_B__0_OFFSET UNITYSDK_OFFSET(0x15329A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIResourceLoadWidgetController___c__DisplayClass42_0_TypeDefinitionIndex = 59152;

	class UIResourceLoadWidgetController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::Foundation::ILoader* loader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartLoadGameConfigAssetsByLoader_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_0__STARTLOADGAMECONFIGASSETSBYLOADER_B__0_OFFSET))(this);
		}
	};
}
