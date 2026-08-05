#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x19387800)
#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19387880)
#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x193878D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentPageContext_TypeDefinitionIndex = 63885;

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
