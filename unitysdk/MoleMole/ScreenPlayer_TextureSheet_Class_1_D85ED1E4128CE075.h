#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_D85ED1E4128CE075_METHOD_1_FE35A114C8230DE1_OFFSET UNITYSDK_OFFSET(0x17387060)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_D85ED1E4128CE075__CTOR_OFFSET UNITYSDK_OFFSET(0x17387050)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_Class_1_D85ED1E4128CE075_TypeDefinitionIndex = 67511;

	class ScreenPlayer_TextureSheet_Class_1_D85ED1E4128CE075 : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_D85ED1E4128CE075__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_FE35A114C8230DE1(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_D85ED1E4128CE075_METHOD_1_FE35A114C8230DE1_OFFSET))(this, a1, a2);
		}
	};
}
