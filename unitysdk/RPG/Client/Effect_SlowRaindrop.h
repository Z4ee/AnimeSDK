#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_SLOWRAINDROP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE166E0)
#define RPG_CLIENT_EFFECT_SLOWRAINDROP_METHOD_5_C7AA0B5353D21688_OFFSET UNITYSDK_OFFSET(0xCE16670)
#define RPG_CLIENT_EFFECT_SLOWRAINDROP__CTOR_OFFSET UNITYSDK_OFFSET(0xCE16EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SlowRaindrop_TypeDefinitionIndex = 70517;

	class Effect_SlowRaindrop : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds DrawBounds; // 0x18
		::System::Single RainAreaLength; // 0x30
		::System::Single RainAreaWidth; // 0x34
		::System::Single RainAreaHeight; // 0x38
		::System::Int32 RainAmount; // 0x3C
		::UnityEngine::Mesh* RaindropMesh; // 0x40
		::UnityEngine::Material* RainMaterial; // 0x48
		::System::Single RainStartTime; // 0x50
		::System::Single RainEndime; // 0x54
		::System::Single RainSliceTime; // 0x58
		::System::Boolean RainSlice; // 0x5C
		::System::Single RainTime; // 0x60
		::System::Single RainSpeed; // 0x64
		::System::Single RainAniTime; // 0x68
		::System::Boolean EnableAttract; // 0x6C
		::System::Single AttractStart; // 0x70
		::System::Single AttractEnd; // 0x74
		::System::Single AttractOffsetMax; // 0x78
		::System::Single AttractOffsetMin; // 0x7C
		::UnityEngine::Transform* AttractTarget; // 0x80
		::UnityEngine::Vector3 AttractPos; // 0x88
		::UnityEngine::Vector4 Fresnel; // 0x94
		::System::Single RainNoiseIntensity; // 0xA4
		::System::Single RainNoiseMove; // 0xA8
		::UnityEngine::Color FresnelColor; // 0xAC
		::UnityEngine::Color FresnelColor2; // 0xBC
		::UnityEngine::Color MatCapColor; // 0xCC
		::System::Single MatCapLerp; // 0xDC
		::System::Boolean BBOMCPCHIJP; // 0xE0
		::System::Boolean GFJJHNCNAOL; // 0xE1
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0xE8
		::UnityEngine::MaterialPropertyBlock* OBIJMKMHMOH; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _WorldMatrixArray; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GJEDLNKCPLD; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _DummyMatrix; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _ScaleByTime; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* MEPBLDIFPGP; // 0x118
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _SliceOffsetMatrix; // 0x120
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GFCPJGEBLKK; // 0x128
		::System::Collections::Generic::List_1<::System::Single>* _AniOffsetList; // 0x130
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _AttraCenter; // 0x138
		::UnityEngine::Matrix4x4 CNPPOPEOLHC; // 0x140
		::UnityEngine::Vector3 CPKEFMBLLNC; // 0x180
		::UnityEngine::Vector4 CGOEEPFMOHD; // 0x18C
		::UnityEngine::Vector4 PBNNFDBHNIL; // 0x19C
		::UnityEngine::Vector3 DHCOJGNIKKD; // 0x1AC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SLOWRAINDROP__CTOR_OFFSET))(this);
		}

		::System::Single Method_5_C7AA0B5353D21688()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SLOWRAINDROP_METHOD_5_C7AA0B5353D21688_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SLOWRAINDROP_LATEUPDATE_OFFSET))(this);
		}
	};
}
