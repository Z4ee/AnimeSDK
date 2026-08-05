#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/FrameTiming.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FRAMETIMINGRECORDER_ENDPROFILING_OFFSET UNITYSDK_OFFSET(0x11EB1B80)
#define FRAMETIMINGRECORDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x11EB1830)
#define FRAMETIMINGRECORDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11EB2040)
#define FRAMETIMINGRECORDER_STARTPROFILING_OFFSET UNITYSDK_OFFSET(0x11EB1A60)
#define FRAMETIMINGRECORDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11EB1FA0)
#define FRAMETIMINGRECORDER_WRITETOFILE_OFFSET UNITYSDK_OFFSET(0x11EB1C50)
#define FRAMETIMINGRECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB2090)

inline static constexpr unsigned int FrameTimingRecorder_TypeDefinitionIndex = 90533;

class FrameTimingRecorder : public ::UnityEngine::MonoBehaviour
{
public:
	static ::FrameTimingRecorder** StaticGet__instance()
	{
		return (::FrameTimingRecorder**)Il2CppClass::FromTypeDefinitionIndex(FrameTimingRecorder_TypeDefinitionIndex)->GetStaticField(0x49F00);
	}
	::System::String* _filePath; // 0x18
	::System::Boolean _isRecording; // 0x20
	::System::Collections::Generic::List_1<::System::Double>* _frameCpuTimes; // 0x28
	::Il2CppArray<::UnityEngine::FrameTiming>* _frameTimings; // 0x30
	::System::Single _lastFrameTime; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMETIMINGRECORDER__CTOR_OFFSET))(this);
	}

	static ::FrameTimingRecorder* get_Instance()
	{
		return ((::FrameTimingRecorder*(*)())((::PBYTE)hIl2Cpp + FRAMETIMINGRECORDER_GET_INSTANCE_OFFSET))();
	}

	::System::Void StartProfiling(::System::String* filePath)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FRAMETIMINGRECORDER_STARTPROFILING_OFFSET))(this, filePath);
	}

	::System::Void EndProfiling()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMETIMINGRECORDER_ENDPROFILING_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMETIMINGRECORDER_UPDATE_OFFSET))(this);
	}

	::System::Void WriteToFile()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMETIMINGRECORDER_WRITETOFILE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMETIMINGRECORDER_ONDESTROY_OFFSET))(this);
	}
};
