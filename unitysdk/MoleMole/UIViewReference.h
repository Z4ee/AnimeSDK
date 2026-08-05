#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIExportCollection.h"
#include "unitysdk/MoleMole/UIViewReference_UIViewType.h"

namespace System { class String; }

#define MOLEMOLE_UIVIEWREFERENCE_SHOWEXPORTDIR_OFFSET UNITYSDK_OFFSET(0x15ED1070)
#define MOLEMOLE_UIVIEWREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED10C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIViewReference_TypeDefinitionIndex = 84360;

	class UIViewReference : public ::MoleMole::UIExportCollection
	{
	public:
		::System::String* _viewName; // 0x80
		::MoleMole::UIViewReference_UIViewType _viewType; // 0x88
		::System::Boolean extraExport; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Boolean ShowExportDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWREFERENCE_SHOWEXPORTDIR_OFFSET))(this);
		}
	};
}
