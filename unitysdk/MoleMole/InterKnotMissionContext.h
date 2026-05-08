#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIInterKnotV3PageContext_MissionFocusItemStyle.h"

class Class_1_74F5947DA19C9A67;
namespace MoleMole { class UIInterKnotPageConfig; }

#define MOLEMOLE_INTERKNOTMISSIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17817040)

namespace MoleMole
{
	inline static constexpr unsigned int InterKnotMissionContext_TypeDefinitionIndex = 38314;

	class InterKnotMissionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_74F5947DA19C9A67* PostProxy; // 0x28
		::MoleMole::UIInterKnotPageConfig* Config; // 0x30
		::MoleMole::UIInterKnotV3PageContext_MissionFocusItemStyle _focusItemStyle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERKNOTMISSIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
