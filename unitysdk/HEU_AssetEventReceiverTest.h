#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_BakedEventData; }
namespace HoudiniEngineUnity { class HEU_CookedEventData; }
namespace HoudiniEngineUnity { class HEU_ReloadEventData; }

#define HEU_ASSETEVENTRECEIVERTEST_BAKEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3B79E0)
#define HEU_ASSETEVENTRECEIVERTEST_COOKEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3B77A0)
#define HEU_ASSETEVENTRECEIVERTEST_RELOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3B7560)
#define HEU_ASSETEVENTRECEIVERTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B7C20)

inline static constexpr unsigned int HEU_AssetEventReceiverTest_TypeDefinitionIndex = 39057;

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
