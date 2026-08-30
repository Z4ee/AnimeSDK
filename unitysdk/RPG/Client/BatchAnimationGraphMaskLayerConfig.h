#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig; }
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F1F590)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationGraphMaskLayerConfig_TypeDefinitionIndex = 60149;

	class BatchAnimationGraphMaskLayerConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig*>* MaskBoneMaskList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::BatchAnimationClip*>* MaskClips; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig*>* MaskAnimList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
