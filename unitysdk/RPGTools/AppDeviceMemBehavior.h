#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/AppMemoryLevel.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B758F20)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1B758EE0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1B758FA0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_RESETTAG_OFFSET UNITYSDK_OFFSET(0x1B7592A0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_SETUPUI_OFFSET UNITYSDK_OFFSET(0x1B757FA0)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0x1B757F90)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_SWITHBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1B759380)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_TAGBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1B759230)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATECRITICALIMAGESTATE_OFFSET UNITYSDK_OFFSET(0x1B758F60)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B758780)
#define RPGTOOLS_APPDEVICEMEMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7593F0)

namespace RPGTools
{
	inline static constexpr unsigned int AppDeviceMemBehavior_TypeDefinitionIndex = 45147;

	class AppDeviceMemBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Single updateInterval; // 0x1C
		::System::Int32 MemNormal; // 0x20
		::System::Int32 MemWarning; // 0x24
		::System::Int32 MemUrgent; // 0x28
		::System::Int32 MemCritical; // 0x2C
		::System::Int32 _currentMemoryInMB; // 0x30
		::System::Single _updateTimer; // 0x34
		::UnityEngine::UI::Text* _textAppTotalMem; // 0x38
		::UnityEngine::UI::Image* _imageCritical; // 0x40
		::UnityEngine::Color _disableColor; // 0x48
		::Il2CppArray<::UnityEngine::Color>* _memLevelColor; // 0x58
		::System::Int32 _maxMemoryInMB; // 0x60
		::System::Int32 _minMemoryInMB; // 0x64
		::System::Int32 _tagTotalMemoryInMB; // 0x68
		::System::Int32 _tagMemoryFlag; // 0x6C
		::UnityEngine::UI::Text* _textTagMemInfo; // 0x70
		::UnityEngine::UI::InputField* _inputUpdateInterval; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATE_OFFSET))(this);
		}

		::System::Void SetupUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_SETUPUI_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void TagBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_TAGBTNCLICK_OFFSET))(this);
		}

		::System::Void ResetTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_RESETTAG_OFFSET))(this);
		}

		::System::Void SwithBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_SWITHBTNCLICK_OFFSET))(this);
		}

		::RPGTools::AppMemoryLevel GetCurrentLevel(::System::Int32 a1)
		{
			return ((::RPGTools::AppMemoryLevel(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTLEVEL_OFFSET))(this, a1);
		}

		::System::Void UpdateCriticalImageState(::RPGTools::AppMemoryLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::AppMemoryLevel))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_UPDATECRITICALIMAGESTATE_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetCurrentColor(::RPGTools::AppMemoryLevel a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::RPGTools::AppMemoryLevel))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEMEMBEHAVIOR_GETCURRENTCOLOR_OFFSET))(this, a1);
		}
	};
}
