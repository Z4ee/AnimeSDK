#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_PolluxFlowerSeaBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEAMONOPLUGIN_GET_EDITMODE_OFFSET UNITYSDK_OFFSET(0x95786F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEAMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9578700)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PolluxFlowerSeaMonoPlugin_TypeDefinitionIndex = 57764;

	class Effect_PolluxFlowerSeaMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_PolluxFlowerSeaBehavior*>
	{
	public:
		::UnityEngine::Mesh* TargetMesh; // 0x30
		::UnityEngine::Material* TargetMat; // 0x38
		::UnityEngine::Vector4 WindDirection; // 0x40
		::System::Single WindNoiseTile; // 0x50
		::System::Single WindNoiseFrequency; // 0x54
		::System::Single WindNoiseIntensity; // 0x58
		::System::Boolean CustomLighting; // 0x5C
		::UnityEngine::Transform* CustomLightProxy; // 0x60
		::UnityEngine::Color CustomBrightColor; // 0x68
		::UnityEngine::Color CustomDarkColor; // 0x78
		::System::Single CustomLightingOffset; // 0x88
		::System::Single CustomLightingSmoothness; // 0x8C
		::System::Boolean LineGrowDebug; // 0x90
		::UnityEngine::Transform* LineProxy; // 0x98
		::System::Single LineGrowDistance; // 0xA0
		::System::Single LineGrowSmooth; // 0xA4
		::System::Single LineGrowRandom; // 0xA8
		::System::Single LineSideFalloffDistance; // 0xAC
		::System::Single LineSideFalloffSmooth; // 0xB0
		::System::Single LineSideSideFalloff; // 0xB4
		::UnityEngine::Gradient* BaseColorOverLife; // 0xB8
		::UnityEngine::Gradient* AdditionalColorOverLife; // 0xC0
		::System::Int32 DisappearFrame; // 0xC8
		::UnityEngine::Transform* RectProxy; // 0xD0
		::System::Single MaxPoint; // 0xD8
		::UnityEngine::Vector2 RandomSize; // 0xDC
		::System::Int32 RandomSeed; // 0xE4
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* LocalMatrixList; // 0xE8
		::System::Boolean Field_7_28; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEAMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EditMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEAMONOPLUGIN_GET_EDITMODE_OFFSET))(this);
		}
	};
}
