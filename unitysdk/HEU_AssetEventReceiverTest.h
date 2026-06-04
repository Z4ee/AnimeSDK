#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_BakedEventData; }
namespace HoudiniEngineUnity { class HEU_CookedEventData; }
namespace HoudiniEngineUnity { class HEU_ReloadEventData; }

#define HEU_ASSETEVENTRECEIVERTEST_BAKEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E9A380)
#define HEU_ASSETEVENTRECEIVERTEST_COOKEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E9A1A0)
#define HEU_ASSETEVENTRECEIVERTEST_RELOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E99FC0)
#define HEU_ASSETEVENTRECEIVERTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9A560)

inline static constexpr unsigned int HEU_AssetEventReceiverTest_TypeDefinitionIndex = 37390;

class HEU_AssetEventReceiverTest : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST__CTOR_OFFSET))(this);
	}

	::System::Void ReloadCallback(::HoudiniEngineUnity::HEU_ReloadEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ReloadEventData*))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST_RELOADCALLBACK_OFFSET))(this, a1);
	}

	::System::Void CookedCallback(::HoudiniEngineUnity::HEU_CookedEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_CookedEventData*))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST_COOKEDCALLBACK_OFFSET))(this, a1);
	}

	::System::Void BakedCallback(::HoudiniEngineUnity::HEU_BakedEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_BakedEventData*))((::PBYTE)hIl2Cpp + HEU_ASSETEVENTRECEIVERTEST_BAKEDCALLBACK_OFFSET))(this, a1);
	}
};
