#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_215;

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PERSONALLINEROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17451CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController_PersonalLineRowData_TypeDefinitionIndex = 84557;

	class UIMainStoryPageController_PersonalLineRowData : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_215* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PERSONALLINEROWDATA__CTOR_OFFSET))(this);
		}
	};
}
