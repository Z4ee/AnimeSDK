#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ILoader; }

#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A23C00)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_1__STARTLOADGAMECONFIGASSETSBYLOADER_B__1_OFFSET UNITYSDK_OFFSET(0x17A23C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIResourceLoadWidgetController___c__DisplayClass42_1_TypeDefinitionIndex = 75089;

	class UIResourceLoadWidgetController___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::Foundation::ILoader* loader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _StartLoadGameConfigAssetsByLoader_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS42_1__STARTLOADGAMECONFIGASSETSBYLOADER_B__1_OFFSET))(this);
		}
	};
}
