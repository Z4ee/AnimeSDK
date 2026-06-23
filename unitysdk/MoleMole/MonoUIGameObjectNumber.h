#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIGameObjectNumber_NumberAnimation.h"
#include "unitysdk/MoleMole/MonoUIGameObjectNumber_NumberUnits.h"
#include "unitysdk/MoleMole/MonoUIGameObjectNumber_SpecOffsetConfig.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1264A8F0)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x12649360)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1264AAC0)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__DISABLEALLPARTS_OFFSET UNITYSDK_OFFSET(0x12649AA0)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__EFF_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1264A650)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__HASZEROSHOWOPT_OFFSET UNITYSDK_OFFSET(0x12649270)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__SETOFFSET_OFFSET UNITYSDK_OFFSET(0x12649D20)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__SETPARTS_OFFSET UNITYSDK_OFFSET(0x12649720)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__TRYPLAYNUMBANIMATION_OFFSET UNITYSDK_OFFSET(0x1264A3C0)
#define MOLEMOLE_MONOUIGAMEOBJECTNUMBER__TRYSETANIMAPAUSE_OFFSET UNITYSDK_OFFSET(0x1264A770)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGameObjectNumber_TypeDefinitionIndex = 81313;

	class MonoUIGameObjectNumber : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		// static const ::System::String* KEY_SPEC_SET; // 0x0
		// static const ::System::String* KEY_ANIM_SET; // 0x0
		// static const ::System::String* KEY_OFFSET; // 0x0
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>*>* numbers; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Boolean>* numberOpenZero; // 0x60
		::System::Int32 curNumber; // 0x68
		::System::Boolean _isRunning; // 0x6C
		::MoleMole::MonoUIGameObjectNumber_NumberAnimation LAnimation; // 0x70
		::MoleMole::MonoUIGameObjectNumber_NumberAnimation RAnimation; // 0x80
		::UnityEngine::GameObject* L; // 0x90
		::UnityEngine::GameObject* R; // 0x98
		::MoleMole::MonoUIGameObjectNumber_SpecOffsetConfig unitsOffset; // 0xA0
		::MoleMole::MonoUIGameObjectNumber_SpecOffsetConfig tensOffset; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUIGameObjectNumber_SpecOffsetConfig>* SpecDigitOffsetConfigs; // 0xD0
		::System::String* audioRTPC; // 0xD8
		::System::String* audioEvent; // 0xE0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Animation*, ::System::String*>* _lastAnimation; // 0xE8
		::System::Single _LSpeed; // 0xF0
		::System::Single _RSpeed; // 0xF4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasZeroShowOpt(::MoleMole::MonoUIGameObjectNumber_NumberUnits t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber_NumberUnits))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__HASZEROSHOWOPT_OFFSET))(this, t);
		}

		::System::Void SetNumber(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_SETNUMBER_OFFSET))(this, i);
		}

		::System::Void _SetParts(::MoleMole::MonoUIGameObjectNumber_NumberUnits parts, ::System::Int32 t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber_NumberUnits, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__SETPARTS_OFFSET))(this, parts, t);
		}

		::System::Void _DisableAllParts(::MoleMole::MonoUIGameObjectNumber_NumberUnits parts)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIGameObjectNumber_NumberUnits))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__DISABLEALLPARTS_OFFSET))(this, parts);
		}

		::System::Void _SetOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__SETOFFSET_OFFSET))(this);
		}

		::System::Void _Eff_PlayAnimation(::UnityEngine::Animation* animation, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__EFF_PLAYANIMATION_OFFSET))(this, animation, name);
		}

		::System::Void _TryPlayNumbAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__TRYPLAYNUMBANIMATION_OFFSET))(this);
		}

		::System::Void _TrySetAnimaPause(::UnityEngine::Animation* animation, ::System::Boolean isPause, ::System::Single& speed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER__TRYSETANIMAPAUSE_OFFSET))(this, animation, isPause, speed);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGAMEOBJECTNUMBER_LATEUPDATE_OFFSET))(this);
		}
	};
}
