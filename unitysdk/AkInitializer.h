#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkWwiseInitializationSettings;

#define AKINITIALIZER_AUTOCREATEIFNOTEXIST_OFFSET UNITYSDK_OFFSET(0x1F9D6DF0)
#define AKINITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F9D7010)
#define AKINITIALIZER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9D7990)
#define AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1F9D76C0)
#define AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1F9D75C0)
#define AKINITIALIZER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1F9D7770)
#define AKINITIALIZER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F9D7540)
#define AKINITIALIZER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F9D74B0)
#define AKINITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F9D7220)
#define AKINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9D7A30)

inline static constexpr unsigned int AkInitializer_TypeDefinitionIndex = 33793;

class AkInitializer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkInitializer** StaticGet_ms_Instance()
	{
		return (::AkInitializer**)Il2CppClass::FromTypeDefinitionIndex(AkInitializer_TypeDefinitionIndex)->GetStaticField(0x28BA0);
	}
	::AkWwiseInitializationSettings* InitializationSettings; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::AkInitializer* AutoCreateIfNotExist()
	{
		return ((::AkInitializer*(*)())((::PBYTE)hIl2Cpp + AKINITIALIZER_AUTOCREATEIFNOTEXIST_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnApplicationPause(::System::Boolean pauseStatus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET))(this, pauseStatus);
	}

	::System::Void OnApplicationFocus(::System::Boolean focus)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
	}

	::System::Void OnApplicationQuit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONQUIT_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_LATEUPDATE_OFFSET))(this);
	}
};
