#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define HEU_SCRIPTCALLBACKEXAMPLE_ASSETCALLBACKNOMSG_OFFSET UNITYSDK_OFFSET(0x17E9E010)
#define HEU_SCRIPTCALLBACKEXAMPLE_ASSETCALLBACKWITHMSG_OFFSET UNITYSDK_OFFSET(0x17E9DF60)
#define HEU_SCRIPTCALLBACKEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9E0C0)

inline static constexpr unsigned int HEU_ScriptCallbackExample_TypeDefinitionIndex = 37386;

class HEU_ScriptCallbackExample : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* _msg; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTCALLBACKEXAMPLE__CTOR_OFFSET))(this);
	}

	::System::Void AssetCallbackWithMsg(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEU_SCRIPTCALLBACKEXAMPLE_ASSETCALLBACKWITHMSG_OFFSET))(this, a1);
	}

	::System::Void AssetCallbackNoMsg()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTCALLBACKEXAMPLE_ASSETCALLBACKNOMSG_OFFSET))(this);
	}
};
