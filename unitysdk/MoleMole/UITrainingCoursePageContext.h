#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRAININGCOURSEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x126A7750)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingCoursePageContext_TypeDefinitionIndex = 50445;

	class UITrainingCoursePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_81A3942BCC6E42B5 FromCtrl; // 0x28
		::System::Int32 LastSpecialID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
