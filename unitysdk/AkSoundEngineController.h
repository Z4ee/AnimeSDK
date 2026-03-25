#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkInitializer;

#define AKSOUNDENGINECONTROLLER_ACTIVATEAUDIO_OFFSET UNITYSDK_OFFSET(0x18BFB8E0)
#define AKSOUNDENGINECONTROLLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BFB0F0)
#define AKSOUNDENGINECONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18BFB070)
#define AKSOUNDENGINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x18BFB2E0)
#define AKSOUNDENGINECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18BFB110)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x18BFBC50)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x18BFB880)
#define AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18BFB5F0)
#define AKSOUNDENGINECONTROLLER_SETMAXPROCESSCOUNTPERFRAME_OFFSET UNITYSDK_OFFSET(0x18BFB7D0)
#define AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x18BFB630)
#define AKSOUNDENGINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFB0E0)

inline static constexpr unsigned int AkSoundEngineController_TypeDefinitionIndex = 34686;

class AkSoundEngineController : public ::System::Object
{
public:
	static ::AkSoundEngineController** StaticGet_ms_Instance()
	{
		return (::AkSoundEngineController**)Il2CppClass::FromTypeDefinitionIndex(AkSoundEngineController_TypeDefinitionIndex)->GetStaticField(0x31610);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER__CTOR_OFFSET))(this);
	}

	static ::AkSoundEngineController* get_Instance()
	{
		return ((::AkSoundEngineController*(*)())((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_FINALIZE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Init(::AkInitializer* akInitializer)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitializer*))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_INIT_OFFSET))(this, akInitializer);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Terminate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET))(this);
	}

	::System::Void SetMaxProcessCountPerFrame(::System::Int32 maxProcessCountPerFrame)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_SETMAXPROCESSCOUNTPERFRAME_OFFSET))(this, maxProcessCountPerFrame);
	}

	::System::Void OnApplicationPause(::System::Boolean pauseStatus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONAPPLICATIONPAUSE_OFFSET))(this, pauseStatus);
	}

	::System::Void OnApplicationFocus(::System::Boolean focus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
	}

	::System::Void ActivateAudio(::System::Boolean activate, ::System::Boolean renderAnyway)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ACTIVATEAUDIO_OFFSET))(this, activate, renderAnyway);
	}
};
