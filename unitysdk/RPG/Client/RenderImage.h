#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_A6CB7EFE0F92316C;
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class RawImage; }

#define RPG_CLIENT_RENDERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0xAFB9DA0)
#define RPG_CLIENT_RENDERIMAGE_INIT_OFFSET UNITYSDK_OFFSET(0xAFB9F50)
#define RPG_CLIENT_RENDERIMAGE_METHOD_5_527C5DFCBC152C0E_OFFSET UNITYSDK_OFFSET(0xAFBA130)
#define RPG_CLIENT_RENDERIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAFB9EB0)
#define RPG_CLIENT_RENDERIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBA3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderImage_TypeDefinitionIndex = 66930;

	class RenderImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* RenderTextureName; // 0x18
		::UnityEngine::UI::RawImage* Field_5_1; // 0x20
		::Class_1_A6CB7EFE0F92316C* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_INIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int Method_5_527C5DFCBC152C0E()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_METHOD_5_527C5DFCBC152C0E_OFFSET))(this);
		}
	};
}
