#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneConfig.h"
#include "unitysdk/MoleMole/Photo/NapAnimationJobConfig_1.h"
#include "unitysdk/Struct_2_2DA85EB68C1A6A6F.h"
#include "unitysdk/Struct_2_477156017493A5B9.h"
#include "unitysdk/Struct_2_4D1ACF3BA3E010AE.h"
#include "unitysdk/Struct_2_85121BFD79A0E193.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_F0CFA50094D8FF32.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class PlayableGraphFloatAttributeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x16062F90)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x16062F80)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITEYES_OFFSET UNITYSDK_OFFSET(0x16064450)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSOLVER_OFFSET UNITYSDK_OFFSET(0x16064670)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSPINES_OFFSET UNITYSDK_OFFSET(0x16064190)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x16064820)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16065070)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationLookAtIKConfig_TypeDefinitionIndex = 75290;

	class AnimationLookAtIKConfig : public ::MoleMole::Photo::NapAnimationJobConfig_1<::Struct_2_2DA85EB68C1A6A6F>
	{
	public:
		// static const ::System::Int32 WeightAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 SolverAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 SpinesAllocIndex = 0x2; // 0x0
		// static const ::System::Int32 EyesAllocIndex = 0x3; // 0x0
		// static const ::System::Int32 EffectorAllocIndex = 0x4; // 0x0
		// static const ::System::Int32 AllocCount = 0x5; // 0x0
		::Il2CppArray<::MoleMole::Photo::LookAtBoneConfig>* spines; // 0x10
		::MoleMole::Photo::LookAtBoneConfig head; // 0x18
		::Il2CppArray<::MoleMole::Photo::LookAtBoneConfig>* eyes; // 0x30
		::System::Single spineWeight; // 0x38
		::System::Single headWeight; // 0x3C
		::System::Single eyeWeight; // 0x40
		::System::Single spineClampWeight; // 0x44
		::System::Single headClampWeight; // 0x48
		::System::Single eyeClampWeight; // 0x4C
		::System::Int32 clampSmoothingIteration; // 0x50
		::UnityEngine::AnimationCurve* spineWeightCurve; // 0x58
		::UnityEngine::Vector3 spineTargetOffset; // 0x60
		::MoleMole::Photo::PlayableGraphFloatAttributeConfig* weight; // 0x70
		::System::Boolean allocateEffector; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_2DA85EB68C1A6A6F CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Struct_2_2DA85EB68C1A6A6F(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}

		::System::Boolean InitSpines(::Foundation::NativeVariableArray_1<::Struct_2_85121BFD79A0E193> spinesVariable, ::Struct_2_F0CFA50094D8FF32 skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeVariableArray_1<::Struct_2_85121BFD79A0E193>, ::Struct_2_F0CFA50094D8FF32))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSPINES_OFFSET))(this, spinesVariable, skeleton);
		}

		::System::Boolean InitEyes(::Foundation::NativeVariableArray_1<::Struct_2_4D1ACF3BA3E010AE> eyesVariable, ::Struct_2_F0CFA50094D8FF32 skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeVariableArray_1<::Struct_2_4D1ACF3BA3E010AE>, ::Struct_2_F0CFA50094D8FF32))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITEYES_OFFSET))(this, eyesVariable, skeleton);
		}

		::System::Boolean InitSolver(::Foundation::NativeVariable_1<::Struct_2_477156017493A5B9> solver, ::Struct_2_F0CFA50094D8FF32 skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeVariable_1<::Struct_2_477156017493A5B9>, ::Struct_2_F0CFA50094D8FF32))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSOLVER_OFFSET))(this, solver, skeleton);
		}
	};
}
