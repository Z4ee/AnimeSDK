#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_PATHFOLLOWCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x667420)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_PATHFOLLOWCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF766740)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityPathFollowFragmentV2_PathFollowComparer_TypeDefinitionIndex = 47698;

	struct alignas(1) FNPCAbilityPathFollowFragmentV2_PathFollowComparer
	{
		static ::System::Collections::Generic::IComparer_1<::System::UInt32>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::IComparer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityPathFollowFragmentV2_PathFollowComparer_TypeDefinitionIndex)->GetStaticField(0x4B1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_PATHFOLLOWCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::UInt32 entitya, ::System::UInt32 entityb)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_PATHFOLLOWCOMPARER_COMPARE_OFFSET))(this, entitya, entityb);
		}
	};
}
