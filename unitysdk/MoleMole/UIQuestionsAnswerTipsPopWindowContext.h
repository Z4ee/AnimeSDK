#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIQUESTIONSANSWERTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152A8130)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerTipsPopWindowContext_TypeDefinitionIndex = 65069;

	class UIQuestionsAnswerTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 StageId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
