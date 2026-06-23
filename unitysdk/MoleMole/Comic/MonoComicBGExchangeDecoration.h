#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicDecorateEventBase.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class ImageExchangeEvent; }
namespace UnityEngine::Timeline { class ImageExchangeEventZoneVer; }

#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITBGNODES_OFFSET UNITYSDK_OFFSET(0x12B987F0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x12B982D0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_METHOD_7_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x12B98B20)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12B99230)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x12B98EC0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x12B98F20)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x12B990D0)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION__CTOR_OFFSET UNITYSDK_OFFSET(0x12B99310)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x12B99360)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x12B99370)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x12B99400)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x12B99410)
#define MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x12B994A0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBGExchangeDecoration_TypeDefinitionIndex = 61015;

	class MonoComicBGExchangeDecoration : public ::MoleMole::Comic::MonoComicDecorateEventBase
	{
	public:
		::UnityEngine::Timeline::ImageExchangeEvent* Field_7_0; // 0x80
		::UnityEngine::Timeline::ImageExchangeEventZoneVer* Field_7_1; // 0x88
		::UnityEngine::Sprite* Field_7_2; // 0x90
		::System::Single Field_7_3; // 0x98
		::UnityEngine::AnimationCurve* Field_7_4; // 0xA0
		::UnityEngine::Transform* Field_7_5; // 0xA8
		::UnityEngine::CanvasGroup* Field_7_6; // 0xB0
		::UnityEngine::Transform* Field_7_7; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void InitBGNodes(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_INITBGNODES_OFFSET))(this, a1, a2);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_METHOD_7_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::ComicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void __base_JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION___BASE_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void Method_7_071850D2764E9D4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBGEXCHANGEDECORATION_METHOD_7_071850D2764E9D4C_OFFSET))(this);
		}
	};
}
