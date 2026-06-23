#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_323;

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PERSONALLINEROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174D98A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController_PersonalLineRowData_TypeDefinitionIndex = 76809;

	class UIMainStoryPageController_PersonalLineRowData : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_323* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PERSONALLINEROWDATA__CTOR_OFFSET))(this);
		}
	};
}
