#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CameraClearFlags.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }

#define RPGTOOLS_SCREENRECORDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B5287B0)
#define RPGTOOLS_SCREENRECORDER_ENDRECORD_OFFSET UNITYSDK_OFFSET(0x1B528BA0)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1B529210)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1B5289C0)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_2CEBCCAF54FB984A_OFFSET UNITYSDK_OFFSET(0x1B528C50)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1B528B20)
#define RPGTOOLS_SCREENRECORDER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B528A20)
#define RPGTOOLS_SCREENRECORDER_STARTRECORD_OFFSET UNITYSDK_OFFSET(0x1B528BF0)
#define RPGTOOLS_SCREENRECORDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B5287F0)
#define RPGTOOLS_SCREENRECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5292E0)

namespace RPGTools
{
	inline static constexpr unsigned int ScreenRecorder_TypeDefinitionIndex = 48236;

	class ScreenRecorder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single sizeScale; // 0x18
		::System::String* outputPath; // 0x20
		::System::Single duration; // 0x28
		::System::Boolean characterOnly; // 0x2C
		::UnityEngine::KeyCode startKey; // 0x30
		::UnityEngine::CameraClearFlags BGKOGNIBBOG; // 0x34
		::UnityEngine::LayerMask PMANBKLKBOM; // 0x38
		::System::Int32 frameRate; // 0x3C
		::System::Int32 decimateNumber; // 0x40
		::System::Single updateDeltaTime; // 0x44
		::UnityEngine::Camera* MBILBPGFINO; // 0x48
		::System::Single FBKJKEGOEPN; // 0x50
		::System::Int32 BOCKHIOIMBO; // 0x54
		::System::Int32 JJEMGOJPLFF; // 0x58
		::System::Int32 BBMCBAGNBIC; // 0x5C
		::System::Single KIKIMCMLLKN; // 0x60
		::System::Boolean _isRunning; // 0x64
		::System::Boolean BIPKNLCMINA; // 0x65

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
