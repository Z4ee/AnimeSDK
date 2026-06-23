#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIInterKnotV3PageContext_MissionFocusItemStyle.h"

#define MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x146B79B0)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x146B79F0)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x146B7A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotV3PageContext_TypeDefinitionIndex = 85853;

	class UIInterKnotV3PageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		// static const ::System::Int32 HomeTab = 0x1; // 0x0
		// static const ::System::Int32 SocialTab = 0x2; // 0x0
		// static const ::System::Int32 MissionTab = 0x3; // 0x0
		// static const ::System::Int32 NewsTab = 0x5; // 0x0
		::System::Boolean FromActivity; // 0x28
		::MoleMole::UIInterKnotV3PageContext_MissionFocusItemStyle JumpMissionFocusItemStyle; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
