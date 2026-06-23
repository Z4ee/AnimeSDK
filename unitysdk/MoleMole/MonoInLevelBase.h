#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOINLEVELBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x12642FD0)
#define MOLEMOLE_MONOINLEVELBASE_LOADSPRITEASYNC_OFFSET UNITYSDK_OFFSET(0x12643900)
#define MOLEMOLE_MONOINLEVELBASE_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x126435E0)
#define MOLEMOLE_MONOINLEVELBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12643070)
#define MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_1_OFFSET UNITYSDK_OFFSET(0x12643850)
#define MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_OFFSET UNITYSDK_OFFSET(0x12643260)
#define MOLEMOLE_MONOINLEVELBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x12643A00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBase_TypeDefinitionIndex = 66172;

	class MonoInLevelBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetupImageSprite(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_OFFSET))(this, a1, a2);
		}

		::System::Void SetupImageSprite_1(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Sprite* LoadSprite(::System::String* a1)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_LOADSPRITE_OFFSET))(this, a1);
		}

		::System::Void LoadSpriteAsync(::System::String* a1, ::System::Action_1<::UnityEngine::Sprite*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_LOADSPRITEASYNC_OFFSET))(this, a1, a2);
		}
	};
}
