#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIQUESTIONSANSWERSCREENSETTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16140B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerScreenSettleContext_TypeDefinitionIndex = 43901;

	class UIQuestionsAnswerScreenSettleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Score; // 0x28
		::System::Int32 StageId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENSETTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
