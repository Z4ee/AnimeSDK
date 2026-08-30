#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class LightRatioConfig_LightRatioClip;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIGHTRATIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47BE30)

inline static constexpr unsigned int LightRatioConfig_TypeDefinitionIndex = 48021;

class LightRatioConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::LightRatioConfig_LightRatioClip*>* LightRatioClips; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTRATIOCONFIG__CTOR_OFFSET))(this);
	}
};
