#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_UILAYERCONTROLLER_LAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE365FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int UILayerController_LayerInfo_TypeDefinitionIndex = 72979;

	class UILayerController_LayerInfo : public ::System::Object
	{
	public:
		::System::Int32 Layer; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Canvas*>* Canvases; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* Particles; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILAYERCONTROLLER_LAYERINFO__CTOR_OFFSET))(this);
		}
	};
}
