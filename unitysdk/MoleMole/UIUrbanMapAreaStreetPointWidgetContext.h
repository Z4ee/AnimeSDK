#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"

class Class_1_2C44CDE0C4BF8569;
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0x15A718E0)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0x15A719B0)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A71860)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0x15A71B00)
#define MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0x15A71B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapAreaStreetPointWidgetContext_TypeDefinitionIndex = 81180;

	class UIUrbanMapAreaStreetPointWidgetContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::Class_1_2C44CDE0C4BF8569* AreaStreetData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET))(this);
		}

		::System::String* GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET))(this);
		}

		::Foundation::AssetPath __base_GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEICON_OFFSET))(this);
		}

		::System::String* __base_GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPAREASTREETPOINTWIDGETCONTEXT___BASE_GETTITLEKEY_OFFSET))(this);
		}
	};
}
