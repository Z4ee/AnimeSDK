#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::MiniGame::TartarusHounds { class MonoMatTextureOffSetUpdater; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x125D49E0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_FADETRAILANIMCO_OFFSET UNITYSDK_OFFSET(0x125D5A50)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x125D5AE0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_PARAMCHECK_OFFSET UNITYSDK_OFFSET(0x125D4AA0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_RESETTOSTART_OFFSET UNITYSDK_OFFSET(0x125D4F90)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_SETGEAR_OFFSET UNITYSDK_OFFSET(0x125D5480)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x125D5BB0)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundBloodBgEffectControl_TypeDefinitionIndex = 48792;

	class MonoHoundBloodBgEffectControl : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* SpeedList; // 0x58
		::UnityEngine::Animation* EffectAnimation; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* EffectAnimationList; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* subTrailList; // 0x70
		::UnityEngine::Animation* TrailAnimation; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* TrailAnimationList; // 0x80
		::System::Int32 currentGear; // 0x88
		::System::Int32 maxGear; // 0x8C
		::System::Boolean paramMatch; // 0x90
		::UnityEngine::Coroutine* fadeTrailCo; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::MonoMatTextureOffSetUpdater*>* offsetUpdaterList; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void ResetToStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_RESETTOSTART_OFFSET))(this);
		}

		::System::Void SetGear(::System::Int32 gear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_SETGEAR_OFFSET))(this, gear);
		}

		::System::Void ParamCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_PARAMCHECK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FadeTrailAnimCo(::System::Single animTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_FADETRAILANIMCO_OFFSET))(this, animTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDBLOODBGEFFECTCONTROL_ONDESTROY_OFFSET))(this);
		}
	};
}
