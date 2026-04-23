#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CameraClearFlags.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }

#define RPGTOOLS_SCREENRECORDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB88CD40)
#define RPGTOOLS_SCREENRECORDER_ENDRECORD_OFFSET UNITYSDK_OFFSET(0xB88D130)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB88D770)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB88CF50)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_2CEBCCAF54FB984A_OFFSET UNITYSDK_OFFSET(0xB88D1E0)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xB88D0B0)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB88CFB0)
#define RPGTOOLS_SCREENRECORDER_STARTRECORD_OFFSET UNITYSDK_OFFSET(0xB88D180)
#define RPGTOOLS_SCREENRECORDER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB88CD80)
#define RPGTOOLS_SCREENRECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0xB88D840)

namespace RPGTools
{
	inline static constexpr unsigned int ScreenRecorder_TypeDefinitionIndex = 44547;

	class ScreenRecorder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single sizeScale; // 0x18
		::System::String* outputPath; // 0x20
		::System::Single duration; // 0x28
		::System::Boolean characterOnly; // 0x2C
		::UnityEngine::KeyCode startKey; // 0x30
		::UnityEngine::CameraClearFlags Field_5_5; // 0x34
		::UnityEngine::LayerMask Field_5_6; // 0x38
		::System::Int32 frameRate; // 0x3C
		::System::Int32 decimateNumber; // 0x40
		::System::Single updateDeltaTime; // 0x44
		::UnityEngine::Camera* Field_5_10; // 0x48
		::System::Single Field_5_11; // 0x50
		::System::Int32 Field_5_12; // 0x54
		::System::Int32 Field_5_13; // 0x58
		::System::Int32 Field_5_14; // 0x5C
		::System::Single Field_5_15; // 0x60
		::System::Boolean _isRunning; // 0x64
		::System::Boolean Field_5_17; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_UPDATE_OFFSET))(this);
		}

		::System::Void StartRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_STARTRECORD_OFFSET))(this);
		}

		::System::Void EndRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_ENDRECORD_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_2CEBCCAF54FB984A(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_METHOD_5_2CEBCCAF54FB984A_OFFSET))(this, a1);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_SCREENRECORDER_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
