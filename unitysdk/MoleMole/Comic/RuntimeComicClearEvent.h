#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/RuntimeComicLogicEventBase.h"

namespace MoleMole::Comic { class MonoComicEventBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class ComicClearEvent; }
namespace UnityEngine::Timeline { class LogicEventBase; }

#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_CLEAREVENTSWITHTAG_OFFSET UNITYSDK_OFFSET(0x12D22070)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x12D21EB0)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x12D21B10)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x12D21C60)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x12D21F10)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12D22370)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x12D22440)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x12D224D0)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x12D22580)
#define MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x12D22610)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int RuntimeComicClearEvent_TypeDefinitionIndex = 80554;

	class RuntimeComicClearEvent : public ::MoleMole::Comic::RuntimeComicLogicEventBase
	{
	public:
		::UnityEngine::Timeline::ComicClearEvent* Field_7_0; // 0x58
		::System::Int32 Field_7_1; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* Field_7_2; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::LogicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_ENDPLAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* ClearEventsWithTag(::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT_CLEAREVENTSWITHTAG_OFFSET))(this, a1);
		}

		::System::Void __base_EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_ENDPLAY_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::LogicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICCLEAREVENT___BASE_UPDATETIME_OFFSET))(this, a1);
		}
	};
}
