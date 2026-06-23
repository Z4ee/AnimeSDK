#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_1069;

#define MOLEMOLE_UIACHIEVEMENTTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1610F2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementTabContext_TypeDefinitionIndex = 64111;

	class UIAchievementTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_1069* Config; // 0x28
		::System::Boolean Selected; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
