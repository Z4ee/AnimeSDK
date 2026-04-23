#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/AnimationStateData_AnimationPair.h"
#include "unitysdk/System/Object.h"

#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__EQUALS_OFFSET UNITYSDK_OFFSET(0x19DD0050)
#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19DD0070)
#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DD00C0)
#define SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD00B0)

namespace Spine
{
	inline static constexpr unsigned int AnimationStateData_AnimationPairComparer_TypeDefinitionIndex = 36402;

	class AnimationStateData_AnimationPairComparer : public ::System::Object
	{
	public:
		static ::Spine::AnimationStateData_AnimationPairComparer** StaticGet_Instance()
		{
			return (::Spine::AnimationStateData_AnimationPairComparer**)Il2CppClass::FromTypeDefinitionIndex(AnimationStateData_AnimationPairComparer_TypeDefinitionIndex)->GetStaticField(0x5220);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean System_Collections_Generic_IEqualityComparer_Spine_AnimationStateData_AnimationPair__Equals(::Spine::AnimationStateData_AnimationPair x, ::Spine::AnimationStateData_AnimationPair y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::AnimationStateData_AnimationPair, ::Spine::AnimationStateData_AnimationPair))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 System_Collections_Generic_IEqualityComparer_Spine_AnimationStateData_AnimationPair__GetHashCode(::Spine::AnimationStateData_AnimationPair obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::AnimationStateData_AnimationPair))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIRCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_ANIMATIONSTATEDATA_ANIMATIONPAIR__GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
