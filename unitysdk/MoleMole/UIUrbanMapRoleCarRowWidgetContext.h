#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x139A09C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRoleCarRowWidgetContext_TypeDefinitionIndex = 45566;

	class UIUrbanMapRoleCarRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IList_1<::System::String*>* CarIconList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
