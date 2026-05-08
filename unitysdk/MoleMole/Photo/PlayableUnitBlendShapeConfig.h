#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/MoleMole/Photo/PlayableUnitConfig_1.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Animations/PropertyStreamHandle.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_3A8CBD6A2FB912AF;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_BUILDPROPERTYHANDLES_OFFSET UNITYSDK_OFFSET(0x17038BC0)
#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_CREATEPLAYABLEUNIT_OFFSET UNITYSDK_OFFSET(0x170380D0)
#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_GETBLENDSHAPEPARAMCOUNT_OFFSET UNITYSDK_OFFSET(0x17039C70)
#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_GETSKINNEDMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x17039A00)
#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x170380C0)
#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x17039040)
#define MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17039EA0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableUnitBlendShapeConfig_TypeDefinitionIndex = 81030;

	class PlayableUnitBlendShapeConfig : public ::MoleMole::Photo::PlayableUnitConfig_1<::Class_1_3A8CBD6A2FB912AF*>
	{
	public:
		// static const ::System::String* BlendShapePrefix; // 0x0
		// static const ::System::Int32 PropertyHandleAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 BlendShapeValueAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 BlendRequestAllocIndex = 0x2; // 0x0
		// static const ::System::Int32 BlendShapeDifferenceAllocIndex = 0x3; // 0x0
		// static const ::System::Int32 AllocCount = 0x4; // 0x0
		::UnityEngine::AvatarMask* blendShapeMask; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* _skinnedMeshRenderers; // 0x18
		::System::Int32 _blendShapeCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Class_1_3A8CBD6A2FB912AF* CreatePlayableUnit(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::Struct_2_ACD0EF80A5330786 context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::Class_1_3A8CBD6A2FB912AF*(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_CREATEPLAYABLEUNIT_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}

		::System::Void BuildPropertyHandles(::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> handles, ::UnityEngine::Animator* animator, ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* renderers)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::UnityEngine::Animator*, ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_BUILDPROPERTYHANDLES_OFFSET))(this, handles, animator, renderers);
		}

		::System::Void GetSkinnedMeshRenderers(::UnityEngine::AvatarMask* mask, ::UnityEngine::Animator* animator, ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMask*, ::UnityEngine::Animator*, ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_GETSKINNEDMESHRENDERERS_OFFSET))(this, mask, animator, result);
		}

		static ::System::Int32 GetBlendShapeParamCount(::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* renderers)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEUNITBLENDSHAPECONFIG_GETBLENDSHAPEPARAMCOUNT_OFFSET))(renderers);
		}
	};
}
