#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_BGMCallback;

#define AKCALLBACKMANAGER_BGMCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9A040)

inline static constexpr unsigned int AkCallbackManager_BGMCallbackPackage_TypeDefinitionIndex = 34565;

class AkCallbackManager_BGMCallbackPackage : public ::System::Object
{
public:
	::AkCallbackManager_BGMCallback* m_Callback; // 0x10
	::System::Object* m_Cookie; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACKPACKAGE__CTOR_OFFSET))(this);
	}
};
