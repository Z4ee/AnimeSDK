#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIColorTweakerTargetGroup; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUICOLORTWEAKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16060440)
#define MOLEMOLE_MONOUICOLORTWEAKER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x160604E0)
#define MOLEMOLE_MONOUICOLORTWEAKER_SETGROUPTARGETCOLOR_OFFSET UNITYSDK_OFFSET(0x160602A0)
#define MOLEMOLE_MONOUICOLORTWEAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x16060720)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIColorTweaker_TypeDefinitionIndex = 54318;

	class MonoUIColorTweaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::UIColorTweakerTargetGroup*>* groups; // 0x18
		::Il2CppArray<::UnityEngine::Animation*>* watchAnims; // 0x20
		::UnityEngine::Transform* rootNode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER__CTOR_OFFSET))(this);
		}

		::System::Void SetGroupTargetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER_SETGROUPTARGETCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICOLORTWEAKER_LATEUPDATE_OFFSET))(this);
		}
	};
}
