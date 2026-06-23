#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/AntiFlickerMode.h"
#include "unitysdk/PostProcess/MKGlow/DebugView.h"
#include "unitysdk/PostProcess/MKGlow/GlareStyle.h"
#include "unitysdk/PostProcess/MKGlow/LensFlareStyle.h"
#include "unitysdk/PostProcess/MKGlow/MinMaxRange.h"
#include "unitysdk/PostProcess/MKGlow/Quality.h"
#include "unitysdk/PostProcess/MKGlow/RenderPriority.h"
#include "unitysdk/PostProcess/MKGlow/Workflow.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace PostProcess::MKGlow { class MKGlowResources; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int ISettings_TypeDefinitionIndex = 26786;

	class ISettings
	{
	public:
	};
}
