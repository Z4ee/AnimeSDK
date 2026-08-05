#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_803;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER_AFFIXGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1165CAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDetailDialogPopWindowController_AffixGroup_TypeDefinitionIndex = 63878;

	class UIZenkovDetailDialogPopWindowController_AffixGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_803*>* Levels; // 0x10
		::System::Int32 KeyTool; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER_AFFIXGROUP__CTOR_OFFSET))(this);
		}
	};
}
