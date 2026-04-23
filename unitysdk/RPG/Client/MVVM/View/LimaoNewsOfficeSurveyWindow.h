#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA755CA0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyWindow_TypeDefinitionIndex = 68439;

	class LimaoNewsOfficeSurveyWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYWINDOW__CTOR_OFFSET))(this);
		}
	};
}
