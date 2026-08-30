#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD477FE0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyWindow_TypeDefinitionIndex = 79047;

	class LimaoNewsOfficeSurveyWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYWINDOW__CTOR_OFFSET))(this);
		}
	};
}
