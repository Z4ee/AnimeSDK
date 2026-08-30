#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_LATETICK_OFFSET UNITYSDK_OFFSET(0xCDDD980)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_METHOD_5_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0xCDDDA70)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_METHOD_5_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0xCDDE3B0)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_METHOD_5_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0xCDDD9E0)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCDDD8F0)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCDDD860)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0xCDDD820)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0xCDDD7E0)
#define RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xCDDE650)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUGlowstickAnimation_TypeDefinitionIndex = 70446;

	class Effect_GPUGlowstickAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* GlowstickGO; // 0x18
		::UnityEngine::Material* StickMaterial; // 0x20
		::System::Int32 layerId; // 0x28
		::System::Single Width; // 0x2C
		::System::Single Height; // 0x30
		::System::Int32 StickNumber; // 0x34
		::System::Single AnimationTime; // 0x38
		::System::Single AnimationSpeed; // 0x3C
		::UnityEngine::Color Color1; // 0x40
		::UnityEngine::Color Color2; // 0x50
		::System::Single ColorRatio; // 0x60
		::System::Single AniTimeOffset; // 0x64
		::UnityEngine::AnimationCurve* WidthDistribution; // 0x68
		::UnityEngine::AnimationCurve* HeightDistribution; // 0x70
		::System::Boolean DBAHJNANIOG; // 0x78
		::System::Boolean OEMHEMIBLMD; // 0x79
		::UnityEngine::Matrix4x4 ALJKADCBJPD; // 0x7C
		::UnityEngine::Matrix4x4 ODJKHDABIIJ; // 0xBC
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* NBCPJLJKEHD; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* DEOMNJNDJLP; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* JOGHPPKKBMD; // 0x110
		::System::Collections::Generic::List_1<::System::Single>* HLBEGNDPKMN; // 0x118
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x120
		::UnityEngine::Mesh* FHFGJNPCACB; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONINVISIBLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_C1E0405EEC95DC65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_METHOD_5_C1E0405EEC95DC65_OFFSET))(this);
		}

		::System::Void Method_5_B29205EE7F7B640C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_METHOD_5_B29205EE7F7B640C_OFFSET))(this);
		}

		::System::Void Method_5_04F02FC65FAA2E0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUGLOWSTICKANIMATION_METHOD_5_04F02FC65FAA2E0C_OFFSET))(this);
		}
	};
}
