#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKCALLBACKMANAGER_INITIALIZATIONSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D58BD80)
#define AKCALLBACKMANAGER_INITIALIZATIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5875E0)

inline static constexpr unsigned int AkCallbackManager_InitializationSettings_TypeDefinitionIndex = 43638;

class AkCallbackManager_InitializationSettings : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_DefaultIsLoggingEnabled()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_InitializationSettings_TypeDefinitionIndex)->GetStaticField(0x72B0);
	}
	static ::System::Int32* StaticGet_DefaultBufferSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_InitializationSettings_TypeDefinitionIndex)->GetStaticField(0x72B4);
	}
	::System::Boolean IsLoggingEnabled; // 0x10
	::System::Int32 BufferSize; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INITIALIZATIONSETTINGS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INITIALIZATIONSETTINGS__CCTOR_OFFSET))();
	}
};
