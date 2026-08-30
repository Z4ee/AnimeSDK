#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/Slider_Direction.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOMASKSLIDERDASH_GETRATIO_OFFSET UNITYSDK_OFFSET(0x1ACF6710)
#define RPG_CLIENT_MONOMASKSLIDERDASH_REFRESHANIM_OFFSET UNITYSDK_OFFSET(0x1ACF6780)
#define RPG_CLIENT_MONOMASKSLIDERDASH_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1ACF63A0)
#define RPG_CLIENT_MONOMASKSLIDERDASH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF6860)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaskSliderDash_TypeDefinitionIndex = 72514;

	class MonoMaskSliderDash : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* animName; // 0x0
		::UnityEngine::RectTransform* maskRect; // 0x18
		::UnityEngine::RectTransform* fillRect; // 0x20
		::UnityEngine::RectTransform* dashRect; // 0x28
		::UnityEngine::UI::Slider_Direction dirction; // 0x30
		::System::Single minValue; // 0x34
		::System::Single value; // 0x38
		::System::Single maxValue; // 0x3C
		::System::Action_2<::System::Single, ::System::Single>* onValueChanged; // 0x40
		::UnityEngine::Animation* anim; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDERDASH__CTOR_OFFSET))(this);
		}

		::System::Void UpdateValue(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDERDASH_UPDATEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDERDASH_GETRATIO_OFFSET))(this);
		}

		::System::Void RefreshAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDERDASH_REFRESHANIM_OFFSET))(this);
		}
	};
}
