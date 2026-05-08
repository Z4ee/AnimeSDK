#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7679BF924C438A9.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class ScreenPlayData;
namespace MoleMole { class ScreenPlayer_TextureSheet; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_93546DF530444D19_METHOD_1_30A9AB8399E97DC7_OFFSET UNITYSDK_OFFSET(0x11DEDA90)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_93546DF530444D19_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0x11DEDD10)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_93546DF530444D19__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEDA80)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_Class_1_93546DF530444D19_TypeDefinitionIndex = 48052;

	class ScreenPlayer_TextureSheet_Class_1_93546DF530444D19 : public ::System::Object
	{
	public:
		::MoleMole::ScreenPlayer_TextureSheet* Field_1_0; // 0x10
		::System::Action_1<::System::Boolean>* Field_1_4; // 0x18
		::UnityEngine::Events::UnityAction* Field_1_5; // 0x20
		::System::Action_1<::System::Boolean>* Field_1_1; // 0x28
		::ScreenPlayData* Field_1_3; // 0x30
		::Enum_3_B7679BF924C438A9 Field_1_2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_93546DF530444D19__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_30A9AB8399E97DC7(::UnityEngine::Texture2D* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_93546DF530444D19_METHOD_1_30A9AB8399E97DC7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_6D8B8CD47CD59618()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_CLASS_1_93546DF530444D19_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
		}
	};
}
