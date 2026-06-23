#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D80D6A1CD3EC8E42;
namespace System { class Action; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x17387D50)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_CREATESPINERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x17388080)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17388920)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_METHOD_5_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x17388840)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_METHOD_5_DFFF3EBEA7DBE379_OFFSET UNITYSDK_OFFSET(0x17388240)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17387DF0)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_RELEASESPINERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x17388010)
#define MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x173881E0)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonRenderTextureBase_TypeDefinitionIndex = 71614;

	class SpineSkeletonRenderTextureBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 maxRenderTextureSize; // 0x18
		::UnityEngine::GameObject* quad; // 0x20
		::System::Boolean useDeviceSize; // 0x28
		::UnityEngine::Mesh* Field_5_3; // 0x30
		::Class_1_D80D6A1CD3EC8E42* spineRTUnit; // 0x38
		::UnityEngine::RenderTexture* renderTexture; // 0x40
		::UnityEngine::Camera* targetCamera; // 0x48
		::UnityEngine::Rendering::CommandBuffer* Field_5_7; // 0x50
		::MoleMole::Vector2Int Field_5_8; // 0x58
		::MoleMole::Vector2Int Field_5_9; // 0x60
		::MoleMole::Vector2Int Field_5_10; // 0x68
		::UnityEngine::Vector2 Field_5_11; // 0x70
		::UnityEngine::Vector3 Field_5_12; // 0x78
		::UnityEngine::Vector3 Field_5_13; // 0x84
		::UnityEngine::Vector3 Field_5_14; // 0x90
		::UnityEngine::Vector3 Field_5_15; // 0x9C
		::UnityEngine::Vector2 Field_5_16; // 0xA8
		::UnityEngine::Vector2 Field_5_17; // 0xB0
		::UnityEngine::Vector2 Field_5_18; // 0xB8
		::UnityEngine::Vector2 Field_5_19; // 0xC0
		::System::Action* OnSpineRTCreated; // 0xC8
		::System::Action* OnSpineRTReleased; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void CreateSpineRenderTexture(::MoleMole::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_CREATESPINERENDERTEXTURE_OFFSET))(this, a1);
		}

		::System::Void ReleaseSpineRenderTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_RELEASESPINERENDERTEXTURE_OFFSET))(this);
		}

		::System::Void Method_5_DFFF3EBEA7DBE379(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_METHOD_5_DFFF3EBEA7DBE379_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_5_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_METHOD_5_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONRENDERTEXTUREBASE_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
		}
	};
}
