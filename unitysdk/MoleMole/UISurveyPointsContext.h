#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UISURVEYPOINTSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16187920)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsContext_TypeDefinitionIndex = 44049;

	class UISurveyPointsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* subTitle; // 0x28
		::System::String* title; // 0x30
		::System::String* content; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
