#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/RuntimeComicLogicEventBase.h"

class Class_1_F59E313BD7302AC0;
namespace MoleMole { class ConfigComicShakeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Timeline { class ComicShakeEvent; }
namespace UnityEngine::Timeline { class LogicEventBase; }

#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xFAF37F0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITSHAKEITEMLIST_OFFSET UNITYSDK_OFFSET(0xFAF36D0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0xFAF34D0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xFAF3720)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xFAF3860)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xFAF3A30)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF3B20)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xFAF3B70)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0xFAF3C00)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xFAF3CB0)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0xFAF3D50)
#define MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xFAF3DE0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int RuntimeComicShakeEvent_TypeDefinitionIndex = 63891;

	class RuntimeComicShakeEvent : public ::MoleMole::Comic::RuntimeComicLogicEventBase
	{
	public:
		::UnityEngine::Timeline::ComicShakeEvent* Field_7_0; // 0x58
		::MoleMole::ConfigComicShakeData* Field_7_1; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_7_2; // 0x68
		::Class_1_F59E313BD7302AC0* Field_7_3; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::LogicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void InitShakeItemList(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_INITSHAKEITEMLIST_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_STARTPLAY_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_UPDATETIME_OFFSET))(this, a1);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT_ENDPLAY_OFFSET))(this);
		}

		::System::Void __base_EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_ENDPLAY_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::LogicEventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_INITWITHBASE_OFFSET))(this, a1);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void __base_StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_STARTPLAY_OFFSET))(this);
		}

		::System::Void __base_UpdateTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICSHAKEEVENT___BASE_UPDATETIME_OFFSET))(this, a1);
		}
	};
}
