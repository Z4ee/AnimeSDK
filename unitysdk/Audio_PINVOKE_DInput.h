#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE_OFFSET UNITYSDK_OFFSET(0x134A94A0)
#define AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE__OFFSET UNITYSDK_OFFSET(0x134A95E0)

inline static constexpr unsigned int Audio_PINVOKE_DInput_TypeDefinitionIndex = 86143;

class Audio_PINVOKE_DInput : public ::System::Object
{
public:
	// static const ::System::Int32 SdkVersion = 0x800; // 0x0

	static ::System::Boolean DirectInput8Create(::System::IntPtr hinst, ::System::IntPtr& ppvOut)
	{
		return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE_OFFSET))(hinst, ppvOut);
	}

	static ::System::Int32 DirectInput8Create_(::System::Void* _hinst, ::System::Int32 _version, ::System::Guid riidltf, ::System::Void* _ppvOut, ::System::Void* _punkOuter)
	{
		return ((::System::Int32(*)(::System::Void*, ::System::Int32, ::System::Guid, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE__OFFSET))(_hinst, _version, riidltf, _ppvOut, _punkOuter);
	}
};
