#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_4D1B1009D34E8A43;
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class RawImage; }

#define RPG_CLIENT_RENDERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x17963530)
#define RPG_CLIENT_RENDERIMAGE_INIT_OFFSET UNITYSDK_OFFSET(0x179636D0)
#define RPG_CLIENT_RENDERIMAGE_METHOD_5_41A63971A1741915_OFFSET UNITYSDK_OFFSET(0x17963910)
#define RPG_CLIENT_RENDERIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17963630)
#define RPG_CLIENT_RENDERIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17963BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderImage_TypeDefinitionIndex = 72564;

	class RenderImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* RenderTextureName; // 0x18
		::UnityEngine::UI::RawImage* JLNJJGLNDHI; // 0x20
		::Class_1_4D1B1009D34E8A43* AMLPJLDKLEL; // 0x28

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

		::UnityEngine::Vector2Int Method_5_41A63971A1741915()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_METHOD_5_41A63971A1741915_OFFSET))(this);
		}
	};
}
