#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/AnimationStateData_AnimationPair.h"
#include "unitysdk/System/Object.h"

#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC4D650)
#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AC4D670)
#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC4D6C0)
#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4D6B0)

namespace Spine
{
	inline static constexpr unsigned int AnimationStateData_AnimationPairComparer_TypeDefinitionIndex = 36702;

	class AnimationStateData_AnimationPairComparer : public ::System::Object
	{
	public:
		static ::Spine::AnimationStateData_AnimationPairComparer** StaticGet_Instance()
		{
			return (::Spine::AnimationStateData_AnimationPairComparer**)Il2CppClass::FromTypeDefinitionIndex(AnimationStateData_AnimationPairComparer_TypeDefinitionIndex)->GetStaticField(0x22C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean System_Collections_Generic_IEqualityComparer_Spine_AnimationStateData_AnimationPair__Equals(::Spine::AnimationStateData_AnimationPair a1, ::Spine::AnimationStateData_AnimationPair a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::AnimationStateData_AnimationPair, ::Spine::AnimationStateData_AnimationPair))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_IEqualityComparer_Spine_AnimationStateData_AnimationPair__GetHashCode(::Spine::AnimationStateData_AnimationPair a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::AnimationStateData_AnimationPair))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
