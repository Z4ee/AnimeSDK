#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/AnimationPlayableAsset.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_METHOD_5_C50A2293958CA940_1_OFFSET UNITYSDK_OFFSET(0x16072050)
#define MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_METHOD_5_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x16071FD0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x16071E30)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAnimationPlayableAsset_TypeDefinitionIndex = 73605;

	class ZNetAnimationPlayableAsset : public ::UnityEngine::Timeline::AnimationPlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>* clipList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_C50A2293958CA940(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_METHOD_5_C50A2293958CA940_OFFSET))(this, a1);
		}

		::System::Void Method_5_C50A2293958CA940_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETANIMATIONPLAYABLEASSET_METHOD_5_C50A2293958CA940_1_OFFSET))(this, a1);
		}
	};
}
