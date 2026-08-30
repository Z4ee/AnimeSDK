#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xDC24B60)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_25CD86BF8626C8D9_1_OFFSET UNITYSDK_OFFSET(0xDC24D00)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xDC24BD0)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_306FF05D4DB1C493_OFFSET UNITYSDK_OFFSET(0xDC25050)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xDC24B70)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_E11FB2B3A67852DB_OFFSET UNITYSDK_OFFSET(0xDC24E80)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDC24AF0)
#define RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW__DITHEROUT_B__10_0_OFFSET UNITYSDK_OFFSET(0xDC25120)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelNpcModelView_TypeDefinitionIndex = 77865;

	class ChimeraDuelNpcModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* _Animator; // 0x18
		::RPG::Client::BaseShaderPropertyTransition* _DitherCtrl; // 0x20
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* _VfxPlayer; // 0x28
		::UnityEngine::Transform* TalkAnchor; // 0x30
		::UnityEngine::Transform* LookAtTarget; // 0x38
		::UnityEngine::AnimationClip* TurnClip; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void Method_5_B3A88D7849969A71(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_B3A88D7849969A71_OFFSET))(this, a1);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_25CD86BF8626C8D9_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_25CD86BF8626C8D9_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_E11FB2B3A67852DB(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_E11FB2B3A67852DB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_306FF05D4DB1C493(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW_METHOD_5_306FF05D4DB1C493_OFFSET))(this, a1);
		}

		::System::Void _DitherOut_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELNPCMODELVIEW__DITHEROUT_B__10_0_OFFSET))(this);
		}
	};
}
