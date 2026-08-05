#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/MonoMatTextureOffSetUpdater_ModifyOffsetKind.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/MonoMatTextureOffSetUpdater_UpdateOffsetMethod.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_AWAKE_OFFSET UNITYSDK_OFFSET(0x118E2DE0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x118E3760)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_TRANSITIONSPEED_OFFSET UNITYSDK_OFFSET(0x118E36A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_TWEENTARGETSPEED_OFFSET UNITYSDK_OFFSET(0x118E3570)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_UPDATEBYTIME_OFFSET UNITYSDK_OFFSET(0x118E30A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x118E33E0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x118E3830)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoMatTextureOffSetUpdater_TypeDefinitionIndex = 60155;

	class MonoMatTextureOffSetUpdater : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ModifyTextureList; // 0x58
		::MoleMole::MiniGame::TartarusHounds::MonoMatTextureOffSetUpdater_ModifyOffsetKind modifyKind; // 0x60
		::MoleMole::MiniGame::TartarusHounds::MonoMatTextureOffSetUpdater_UpdateOffsetMethod method; // 0x64
		::System::Single speed; // 0x68
		::UnityEngine::Material* modifyMat; // 0x70
		::System::Single time; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* originOffsetList; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* textureProptyIdList; // 0x88
		::UnityEngine::Coroutine* transitionSpeedCo; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateByTime(::System::Single dt, ::MoleMole::MiniGame::TartarusHounds::MonoMatTextureOffSetUpdater_ModifyOffsetKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::MiniGame::TartarusHounds::MonoMatTextureOffSetUpdater_ModifyOffsetKind))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_UPDATEBYTIME_OFFSET))(this, dt, kind);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_UPDATE_OFFSET))(this);
		}

		::System::Void TweentargetSpeed(::System::Single target, ::System::Single tweenTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_TWEENTARGETSPEED_OFFSET))(this, target, tweenTime);
		}

		::System::Collections::IEnumerator* TransitionSpeed(::System::Single start, ::System::Single target, ::System::Single waitTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_TRANSITIONSPEED_OFFSET))(this, start, target, waitTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER_ONDESTROY_OFFSET))(this);
		}
	};
}
