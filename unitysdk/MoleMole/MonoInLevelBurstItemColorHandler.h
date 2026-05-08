#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15E4D360)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x15E4D500)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_67C978A17F4AADBB_OFFSET UNITYSDK_OFFSET(0x15E4D9D0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0x15E4D9C0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15E4D4B0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4D830)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15E4D8A0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15E4D930)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBurstItemColorHandler_TypeDefinitionIndex = 70683;

	class MonoInLevelBurstItemColorHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::Color _greyColor; // 0x18
		::UnityEngine::Color _goldColor; // 0x28
		::UnityEngine::Color _fadeOutColor; // 0x38
		::System::Single _colorLerp; // 0x48
		::System::Single _fadeLerp; // 0x4C
		::UnityEngine::UI::Image* Field_6_5; // 0x50
		::UnityEngine::UI::Text* Field_6_6; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void Method_6_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_1DE6433C25680F9D_OFFSET))(this);
		}

		::UnityEngine::UI::Image* Method_6_9CC926D36F34DBFF()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_9CC926D36F34DBFF_OFFSET))(this);
		}

		::UnityEngine::UI::Text* Method_6_67C978A17F4AADBB()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_METHOD_6_67C978A17F4AADBB_OFFSET))(this);
		}
	};
}
