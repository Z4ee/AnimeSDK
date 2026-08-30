#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_911FE722F91DCE30;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_WATERWHEEL_DEBUGINIT_OFFSET UNITYSDK_OFFSET(0xE41BA50)
#define RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTONTO_OFFSET UNITYSDK_OFFSET(0xE41BB40)
#define RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTON_OFFSET UNITYSDK_OFFSET(0xE41BAD0)
#define RPG_CLIENT_WATERWHEEL_DEBUG_STOPBUTTON_OFFSET UNITYSDK_OFFSET(0xE41BBB0)
#define RPG_CLIENT_WATERWHEEL_ONARTLOAD_OFFSET UNITYSDK_OFFSET(0xE41BC10)
#define RPG_CLIENT_WATERWHEEL_ONARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xE41BC60)
#define RPG_CLIENT_WATERWHEEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE41BCB0)
#define RPG_CLIENT_WATERWHEEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE41BD00)

namespace RPG::Client
{
	inline static constexpr unsigned int WaterWheel_TypeDefinitionIndex = 68776;

	class WaterWheel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single RotateZ; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DockPoints; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* DockPointsRotateDegree; // 0x28
		::System::Collections::Generic::List_1<::System::Single>* StopPointsRotateDegree; // 0x30
		::UnityEngine::GameObject* RotateRootPoint; // 0x38
		::System::Single RotateSpeed; // 0x40
		::UnityEngine::AnimationCurve* StartRotateAcc; // 0x48
		::UnityEngine::AnimationCurve* StopRotateAcc; // 0x50
		::UnityEngine::Vector3 RotateDirection; // 0x58
		::Class_2_911FE722F91DCE30* EIGCKKONNIO; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL__CTOR_OFFSET))(this);
		}

		::System::Void DebugInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUGINIT_OFFSET))(this);
		}

		::System::Void Debug_StartButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTON_OFFSET))(this);
		}

		::System::Void Debug_StartButtonTo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUG_STARTBUTTONTO_OFFSET))(this);
		}

		::System::Void Debug_StopButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_DEBUG_STOPBUTTON_OFFSET))(this);
		}

		::System::Void OnArtLoad(::Class_2_911FE722F91DCE30* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_911FE722F91DCE30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_ONARTLOAD_OFFSET))(this, a1);
		}

		::System::Void OnArtUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_ONARTUNLOAD_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WATERWHEEL_ONDESTROY_OFFSET))(this);
		}
	};
}
