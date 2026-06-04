#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkWwiseInitializationSettings;

#define AKINITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B43BB90)
#define AKINITIALIZER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B43BB80)
#define AKINITIALIZER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B43C180)
#define AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B43C040)
#define AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B43BF20)
#define AKINITIALIZER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1B43C090)
#define AKINITIALIZER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B43BE90)
#define AKINITIALIZER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B43BD90)
#define AKINITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B43BC90)
#define AKINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43C270)

inline static constexpr unsigned int AkInitializer_TypeDefinitionIndex = 41317;

class AkInitializer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkInitializer** StaticGet_ms_Instance()
	{
		return (::AkInitializer**)Il2CppClass::FromTypeDefinitionIndex(AkInitializer_TypeDefinitionIndex)->GetStaticField(0x5FC20);
	}
	::AkWwiseInitializationSettings* InitializationSettings; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::AkInitializer* get_Instance()
	{
		return ((::AkInitializer*(*)())((::PBYTE)hIl2Cpp + AKINITIALIZER_GET_INSTANCE_OFFSET))();
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

	::System::Void OnApplicationPause(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
	}

	::System::Void OnApplicationFocus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
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
