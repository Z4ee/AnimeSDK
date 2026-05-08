#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIForbiddenAreaTalentPointWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFORBIDDENAREATALENTPOINTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1579A6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentPointWidgetContext_TypeDefinitionIndex = 51730;

	class UIForbiddenAreaTalentPointWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::MoleMole::UIForbiddenAreaTalentPointWidgetController*, ::System::Boolean>* OnClickAction; // 0x28
		::System::Int32 TalentID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPOINTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
