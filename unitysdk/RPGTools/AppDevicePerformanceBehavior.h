#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_CLEARRECORD_OFFSET UNITYSDK_OFFSET(0xA245130)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_FPSBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA244550)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_GETCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xA244C00)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_MEMBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA243EC0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_ONDETAILBTNCLICK_OFFSET UNITYSDK_OFFSET(0xA243E80)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA2447B0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_ONLOWMEMORY_OFFSET UNITYSDK_OFFSET(0xA245280)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_RECORDREALTIMEMEM_OFFSET UNITYSDK_OFFSET(0xA2440F0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_SETUPUI_OFFSET UNITYSDK_OFFSET(0xA2425F0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_START_OFFSET UNITYSDK_OFFSET(0xA2425D0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_TRACKCURMEM_OFFSET UNITYSDK_OFFSET(0xA245230)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_UPDATEFPS_OFFSET UNITYSDK_OFFSET(0xA243CC0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_UPDATEMEM_OFFSET UNITYSDK_OFFSET(0xA243810)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA2433E0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA245290)

namespace RPGTools
{
	inline static constexpr unsigned int AppDevicePerformanceBehavior_TypeDefinitionIndex = 44279;

	class AppDevicePerformanceBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* RECORDING; // 0x0
		// static const ::System::String* MEM_START; // 0x0
		// static const ::System::String* FPS_START; // 0x0
		::UnityEngine::UI::Text* _fpsText; // 0x18
		::UnityEngine::UI::Button* _fpsBtn; // 0x20
		::UnityEngine::UI::InputField* _fpsTitle; // 0x28
		::UnityEngine::GameObject* _detailPanel; // 0x30
		::UnityEngine::UI::Text* _memText; // 0x38
		::UnityEngine::UI::Button* _memBtn; // 0x40
		::UnityEngine::UI::InputField* _memTitle; // 0x48
		::System::Single _memUpdateInterval; // 0x50
		::System::Boolean _memTagFlag; // 0x54
		::System::Single _memUpdateTimer; // 0x58
		::System::Int32 _currentMemoryInMB; // 0x5C
		::System::Int32 _maxMemoryInMB; // 0x60
		::System::Int32 _minMemoryInMB; // 0x64
		::System::Int32 _avgMemoryInMB; // 0x68
		::System::Int32 _tagTotalMemoryInMB; // 0x6C
		::System::Int32 _tagMemoryFlag; // 0x70
		::Il2CppArray<::UnityEngine::Color>* _memLevelColor; // 0x78
		::System::Single _fpsUpdateInterval; // 0x80
		::System::Boolean _fpsTagFlag; // 0x84
		::System::Single fpsMin; // 0x88
		::System::Single fpsMax; // 0x8C
		::System::Single fpsAvg; // 0x90
		::System::Single fpsCur; // 0x94
		::System::Collections::Generic::List_1<::System::String*>* _fpsDataList; // 0x98
		::System::Single _time; // 0xA0
		::System::Int32 _frames; // 0xA4
		::System::Int32 _totalFrames; // 0xA8
		::System::Single _timeleft; // 0xAC
		::System::Boolean isTracking; // 0xB0
		::System::Single _trackingUpdateInterval; // 0xB4
		::System::Single _trackingUpdateTimer; // 0xB8
		::System::Collections::Generic::List_1<::System::String*>* trackingMemList; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* fpsDataDict; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* continuousMemDict; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* realTimeMemList; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_UPDATE_OFFSET))(this);
		}

		::System::Void SetupUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_SETUPUI_OFFSET))(this);
		}

		::System::Void OnDetailBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_ONDETAILBTNCLICK_OFFSET))(this);
		}

		::System::Void MemBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_MEMBTNCLICK_OFFSET))(this);
		}

		::System::Void RecordRealTimeMem(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_RECORDREALTIMEMEM_OFFSET))(this, a1);
		}

		::System::Void FpsBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_FPSBTNCLICK_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_ONDRAG_OFFSET))(this, a1);
		}

		::System::Int32 GetCurrentLevel(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_GETCURRENTLEVEL_OFFSET))(this, a1);
		}

		::System::Void ClearRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_CLEARRECORD_OFFSET))(this);
		}

		::System::Void TrackCurMem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_TRACKCURMEM_OFFSET))(this, a1);
		}

		::System::Void updateMem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_UPDATEMEM_OFFSET))(this);
		}

		::System::Void updateFps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_UPDATEFPS_OFFSET))(this);
		}

		::System::Void onLowMemory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR_ONLOWMEMORY_OFFSET))(this);
		}
	};
}
