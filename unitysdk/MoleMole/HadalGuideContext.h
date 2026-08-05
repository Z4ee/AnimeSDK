#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_HADALGUIDECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x149EDD30)

namespace MoleMole
{
	inline static constexpr unsigned int HadalGuideContext_TypeDefinitionIndex = 54829;

	class HadalGuideContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::UI::Extension::UITimeWidget* Timer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALGUIDECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
