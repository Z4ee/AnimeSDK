#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonPlatformSettings.h"

class AkBasePlatformSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkWwiseInitializationSettings_PlatformSettings;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKWWISEINITIALIZATIONSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EF53560)
#define AKWWISEINITIALIZATIONSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EF535A0)
#define AKWWISEINITIALIZATIONSETTINGS_GETPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EF53760)
#define AKWWISEINITIALIZATIONSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EF53520)
#define AKWWISEINITIALIZATIONSETTINGS_GET_ACTIVEPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EF53A10)
#define AKWWISEINITIALIZATIONSETTINGS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EF534D0)
#define AKWWISEINITIALIZATIONSETTINGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1EF535E0)
#define AKWWISEINITIALIZATIONSETTINGS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EF53460)
#define AKWWISEINITIALIZATIONSETTINGS_INITIALIZESOUNDENGINE_OFFSET UNITYSDK_OFFSET(0x1EF53D70)
#define AKWWISEINITIALIZATIONSETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EF53BB0)
#define AKWWISEINITIALIZATIONSETTINGS_RESETSOUNDENGINE_OFFSET UNITYSDK_OFFSET(0x1EF54E10)
#define AKWWISEINITIALIZATIONSETTINGS_SLEEPFORMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1EF55770)
#define AKWWISEINITIALIZATIONSETTINGS_TERMINATESOUNDENGINE_OFFSET UNITYSDK_OFFSET(0x1EF55160)
#define AKWWISEINITIALIZATIONSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF55AC0)
#define AKWWISEINITIALIZATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF55A40)

inline static constexpr unsigned int AkWwiseInitializationSettings_TypeDefinitionIndex = 43665;

class AkWwiseInitializationSettings : public ::AkCommonPlatformSettings
{
public:
	static ::AkBasePlatformSettings** StaticGet_m_ActivePlatformSettings()
	{
		return (::AkBasePlatformSettings**)Il2CppClass::FromTypeDefinitionIndex(AkWwiseInitializationSettings_TypeDefinitionIndex)->GetStaticField(0x16D70);
	}
	static ::AkWwiseInitializationSettings** StaticGet_m_Instance()
	{
		return (::AkWwiseInitializationSettings**)Il2CppClass::FromTypeDefinitionIndex(AkWwiseInitializationSettings_TypeDefinitionIndex)->GetStaticField(0x16D78);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_AllGlobalValues()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AkWwiseInitializationSettings_TypeDefinitionIndex)->GetStaticField(0x16D80);
	}
	::System::Collections::Generic::List_1<::System::String*>* PlatformSettingsNameList; // 0x18
	::System::Collections::Generic::List_1<::AkWwiseInitializationSettings_PlatformSettings*>* PlatformSettingsList; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* InvalidReferencePlatforms; // 0x28
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkCommonAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS__CCTOR_OFFSET))();
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GET_ISVALID_OFFSET))(this);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GET_COUNT_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}

	static ::AkWwiseInitializationSettings* get_Instance()
	{
		return ((::AkWwiseInitializationSettings*(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GET_INSTANCE_OFFSET))();
	}

	static ::AkBasePlatformSettings* GetPlatformSettings(::System::String* a1)
	{
		return ((::AkBasePlatformSettings*(*)(::System::String*))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GETPLATFORMSETTINGS_OFFSET))(a1);
	}

	static ::AkBasePlatformSettings* get_ActivePlatformSettings()
	{
		return ((::AkBasePlatformSettings*(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_GET_ACTIVEPLATFORMSETTINGS_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_ONENABLE_OFFSET))(this);
	}

	static ::System::Boolean InitializeSoundEngine()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_INITIALIZESOUNDENGINE_OFFSET))();
	}

	static ::System::Boolean ResetSoundEngine(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_RESETSOUNDENGINE_OFFSET))(a1);
	}

	static ::System::Void TerminateSoundEngine()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_TERMINATESOUNDENGINE_OFFSET))();
	}

	static ::System::Void SleepForMilliseconds(::System::Double a1)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_SLEEPFORMILLISECONDS_OFFSET))(a1);
	}
};
