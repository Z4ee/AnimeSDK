#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIQUESTIONSANSWERV2VIDEOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D31370)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV2VideoContext_TypeDefinitionIndex = 64468;

	class UIQuestionsAnswerV2VideoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 VideoId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2VIDEOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
