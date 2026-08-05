#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPanelFadeInOutScript_Enum_3_A8AF1F0D9E275B5F.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E8A7000)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEIN_OFFSET UNITYSDK_OFFSET(0x1E8A7470)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEOUT_OFFSET UNITYSDK_OFFSET(0x1E8A7600)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_INIT_OFFSET UNITYSDK_OFFSET(0x1E8A7050)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E8A7820)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E8A7760)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7900)

namespace MoleMole
{
	inline static constexpr unsigned int UIPanelFadeInOutScript_TypeDefinitionIndex = 94840;

	class UIPanelFadeInOutScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* root; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::System::String* Field_5_1; // 0x28
		::System::String* Field_5_0; // 0x30
		::System::Single Field_5_7; // 0x38
		::System::Single Field_5_6; // 0x3C
		::System::Single Field_5_5; // 0x40
		::System::Boolean Field_5_4; // 0x44
		::MoleMole::UIPanelFadeInOutScript_Enum_3_A8AF1F0D9E275B5F Field_5_11; // 0x48
		::System::Boolean Field_5_10; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_AWAKE_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_INIT_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEOUT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_ONDISABLE_OFFSET))(this);
		}
	};
}
