#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginFade_Enum_3_561546332FD90492.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOEFFECTPLUGINFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCF800)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginFade_TypeDefinitionIndex = 43399;

	class MonoEffectPluginFade : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::System::Byte testByte; // 0x18
		::System::Boolean UseFadeInCurve; // 0x19
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x20
		::System::Single FadeInTime; // 0x28
		::System::Single HoldTime; // 0x2C
		::System::Boolean UseFadeOutCurve; // 0x30
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x38
		::System::Single FadeOutTime; // 0x40
		::System::Boolean IsDetachFollowWhenFade; // 0x44
		::System::Collections::Generic::List_1<::System::String*>* fadeOutEffectList; // 0x48
		::MoleMole::MonoEffectPluginFade_Enum_3_561546332FD90492 FadeKind; // 0x50
		::System::Boolean AffectByOwnerCollider; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINFADE__CTOR_OFFSET))(this);
		}
	};
}
