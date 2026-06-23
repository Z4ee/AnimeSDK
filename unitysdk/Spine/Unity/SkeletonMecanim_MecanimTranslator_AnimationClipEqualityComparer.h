#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class AnimationClip; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AD3A060)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AD3A0A0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD3A0D0)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3A0C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_AnimationClipEqualityComparer_TypeDefinitionIndex = 39465;

	class SkeletonMecanim_MecanimTranslator_AnimationClipEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::AnimationClip*>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::AnimationClip*>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonMecanim_MecanimTranslator_AnimationClipEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x2B080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::AnimationClip* x, ::UnityEngine::AnimationClip* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::UnityEngine::AnimationClip* o)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_ANIMATIONCLIPEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, o);
		}
	};
}
