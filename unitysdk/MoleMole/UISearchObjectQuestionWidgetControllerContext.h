#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14800840)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionWidgetControllerContext_TypeDefinitionIndex = 61134;

	class UISearchObjectQuestionWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 DayQuestID; // 0x28
		::System::Int32 QuestionGroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
