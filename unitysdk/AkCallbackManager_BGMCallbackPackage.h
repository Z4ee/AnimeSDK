#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_BGMCallback;

#define AKCALLBACKMANAGER_BGMCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D589320)

inline static constexpr unsigned int AkCallbackManager_BGMCallbackPackage_TypeDefinitionIndex = 43637;

class AkCallbackManager_BGMCallbackPackage : public ::System::Object
{
public:
	::System::Object* m_Cookie; // 0x10
	::AkCallbackManager_BGMCallback* m_Callback; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACKPACKAGE__CTOR_OFFSET))(this);
	}
};
