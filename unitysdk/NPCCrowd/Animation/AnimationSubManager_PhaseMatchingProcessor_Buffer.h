#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/PhaseSection.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_ENSURECURVECOUNT_OFFSET UNITYSDK_OFFSET(0x58BEC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_ENSURESECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x58BED0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_CURVECOUNT_OFFSET UNITYSDK_OFFSET(0x58BE50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_CURVETIMEPTR_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_CURVEVALUEPTR_OFFSET UNITYSDK_OFFSET(0x381840)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_SECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x2EF960)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_SECTIONPTR_OFFSET UNITYSDK_OFFSET(0x3AA080)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_NEW_OFFSET UNITYSDK_OFFSET(0xD2515C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_SLICESECTION_OFFSET UNITYSDK_OFFSET(0x58BFE0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PhaseMatchingProcessor_Buffer_TypeDefinitionIndex = 70499;

	struct alignas(8) AnimationSubManager_PhaseMatchingProcessor_Buffer
	{
		::Unity::Collections::NativeArray_1<::System::Single> _curveTime; // 0x10
		::Unity::Collections::NativeArray_1<::System::Single> _curveValue; // 0x20
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::PhaseSection> _sections; // 0x30

		::System::Single* get_CurveTimePtr()
		{
			return ((::System::Single*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_CURVETIMEPTR_OFFSET))(this);
		}

		::System::Int32 get_CurveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_CURVECOUNT_OFFSET))(this);
		}

		::System::Single* get_CurveValuePtr()
		{
			return ((::System::Single*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_CURVEVALUEPTR_OFFSET))(this);
		}

		::NPCCrowd::Animation::PhaseSection* get_SectionPtr()
		{
			return ((::NPCCrowd::Animation::PhaseSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_SECTIONPTR_OFFSET))(this);
		}

		::System::Int32 get_SectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_GET_SECTIONCOUNT_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer New()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_NEW_OFFSET))();
		}

		::System::Void EnsureCurveCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_ENSURECURVECOUNT_OFFSET))(this, count);
		}

		::System::Void EnsureSectionCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_ENSURESECTIONCOUNT_OFFSET))(this, count);
		}

		/*
		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection> SliceSection(::System::Int32 start, ::System::Int32 count)
		{
			return ((::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_BUFFER_SLICESECTION_OFFSET))(this, start, count);
		}
		*/
	};
}
