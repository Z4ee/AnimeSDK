#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkInitializer;

#define AKSOUNDENGINECONTROLLER_ACTIVATEAUDIO_OFFSET UNITYSDK_OFFSET(0x1B4820C0)
#define AKSOUNDENGINECONTROLLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4818D0)
#define AKSOUNDENGINECONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B481850)
#define AKSOUNDENGINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1B481AC0)
#define AKSOUNDENGINECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4818F0)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B482430)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B482060)
#define AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B481DD0)
#define AKSOUNDENGINECONTROLLER_SETMAXPROCESSCOUNTPERFRAME_OFFSET UNITYSDK_OFFSET(0x1B481FB0)
#define AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1B481E10)
#define AKSOUNDENGINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4818C0)

inline static constexpr unsigned int AkSoundEngineController_TypeDefinitionIndex = 41332;

class AkSoundEngineController : public ::System::Object
{
public:
	static ::AkSoundEngineController** StaticGet_ms_Instance()
	{
		return (::AkSoundEngineController**)Il2CppClass::FromTypeDefinitionIndex(AkSoundEngineController_TypeDefinitionIndex)->GetStaticField(0x60D60);
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

	::System::Void Init(::AkInitializer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitializer*))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_INIT_OFFSET))(this, a1);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Terminate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET))(this);
	}

	::System::Void SetMaxProcessCountPerFrame(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_SETMAXPROCESSCOUNTPERFRAME_OFFSET))(this, a1);
	}

	::System::Void OnApplicationPause(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
	}

	::System::Void OnApplicationFocus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
	}

	::System::Void ActivateAudio(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ACTIVATEAUDIO_OFFSET))(this, a1, a2);
	}
};
