#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x14EDB250)
#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EDB2D0)
#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x14EDB2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentPageContext_TypeDefinitionIndex = 82938;

	class UIForbiddenAreaTalentPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 forceNewbie; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
