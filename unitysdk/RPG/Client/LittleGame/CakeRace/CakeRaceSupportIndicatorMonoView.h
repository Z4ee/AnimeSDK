#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x9989D30)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9989D10)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_SETSUPPORT_OFFSET UNITYSDK_OFFSET(0x9989D90)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_SET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9989D20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9989DF0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceSupportIndicatorMonoView_TypeDefinitionIndex = 63618;

	class CakeRaceSupportIndicatorMonoView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _NormalSupport; // 0x18
		::UnityEngine::Transform* _FullSupport; // 0x20
		::UnityEngine::RectTransform* Arrow; // 0x28
		::UnityEngine::RectTransform* _RectTransform_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_RectTransform(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_SET_RECTTRANSFORM_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void SetSupport(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACESUPPORTINDICATORMONOVIEW_SETSUPPORT_OFFSET))(this, a1);
		}
	};
}
