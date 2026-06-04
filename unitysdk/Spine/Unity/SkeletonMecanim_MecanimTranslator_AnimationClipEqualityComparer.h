#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class AnimationClip; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ACCE6A0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ACCE730)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACCE790)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCE780)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_AnimationClipEqualityComparer_TypeDefinitionIndex = 41422;

	class SkeletonMecanim_MecanimTranslator_AnimationClipEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::AnimationClip*>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::AnimationClip*>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonMecanim_MecanimTranslator_AnimationClipEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x62310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::AnimationClip* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
