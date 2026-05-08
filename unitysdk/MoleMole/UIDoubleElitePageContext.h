#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIDOUBLEELITEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1517E3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleElitePageContext_TypeDefinitionIndex = 38157;

	class UIDoubleElitePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 initChapterId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
