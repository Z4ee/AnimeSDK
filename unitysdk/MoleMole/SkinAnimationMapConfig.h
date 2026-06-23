#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_SKINANIMATIONMAPCONFIG_ADDCOLLECT_OFFSET UNITYSDK_OFFSET(0x141A5280)
#define MOLEMOLE_SKINANIMATIONMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x141A51F0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinAnimationMapConfig_TypeDefinitionIndex = 81952;

	class SkinAnimationMapConfig : public ::System::Object
	{
	public:
		::System::Int32 skinId; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* AnimationClipMaps; // 0x18

		::System::Void _ctor(::System::Int32 skinId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINANIMATIONMAPCONFIG__CTOR_OFFSET))(this, skinId);
		}

		::System::Void AddCollect(::System::String* skinName, ::UnityEngine::AnimationClip* animationClip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINANIMATIONMAPCONFIG_ADDCOLLECT_OFFSET))(this, skinName, animationClip);
		}
	};
}
