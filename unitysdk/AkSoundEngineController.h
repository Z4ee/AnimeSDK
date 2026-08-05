#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkInitializer;
namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINECONTROLLER_ACTIVATEAUDIO_OFFSET UNITYSDK_OFFSET(0x1FBD97C0)
#define AKSOUNDENGINECONTROLLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FBD90E0)
#define AKSOUNDENGINECONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FBD8FF0)
#define AKSOUNDENGINECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1FBD9350)
#define AKSOUNDENGINECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FBD91C0)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1FBD9A50)
#define AKSOUNDENGINECONTROLLER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1FBD9750)
#define AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FBD96B0)
#define AKSOUNDENGINECONTROLLER_RESETEDITORLISTENER_OFFSET UNITYSDK_OFFSET(0x1FBD96A0)
#define AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1FBD96C0)
#define AKSOUNDENGINECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD9B10)
#define AKSOUNDENGINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD90D0)

inline static constexpr unsigned int AkSoundEngineController_TypeDefinitionIndex = 33808;

class AkSoundEngineController : public ::System::Object
{
public:
	static ::AkSoundEngineController** StaticGet_ms_Instance()
	{
		return (::AkSoundEngineController**)Il2CppClass::FromTypeDefinitionIndex(AkSoundEngineController_TypeDefinitionIndex)->GetStaticField(0x28A50);
	}
	static ::System::Boolean* StaticGet_backGroundShowSound()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkSoundEngineController_TypeDefinitionIndex)->GetStaticField(0x8160);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER__CCTOR_OFFSET))();
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

	::System::Void ResetEditorListener(::UnityEngine::GameObject* gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_RESETEDITORLISTENER_OFFSET))(this, gameObject);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Terminate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINECONTROLLER_TERMINATE_OFFSET))(this);
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
