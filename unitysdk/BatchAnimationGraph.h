#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"

class BAMaskLayerGraph;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONGRAPH_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x16A57510)
#define BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET UNITYSDK_OFFSET(0x16A579D0)
#define BATCHANIMATIONGRAPH_ENABLE_OFFSET UNITYSDK_OFFSET(0x16A573A0)
#define BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x16A576E0)
#define BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET UNITYSDK_OFFSET(0x16A574B0)
#define BATCHANIMATIONGRAPH_ISVALID_OFFSET UNITYSDK_OFFSET(0x16A57380)
#define BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET UNITYSDK_OFFSET(0x16A57700)
#define BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x16A57840)
#define BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET UNITYSDK_OFFSET(0x16A57C20)
#define BATCHANIMATIONGRAPH_REMOVEMASKLAYER_OFFSET UNITYSDK_OFFSET(0x16A57BB0)
#define BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET UNITYSDK_OFFSET(0x16A575E0)
#define BATCHANIMATIONGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16A57E60)

inline static constexpr unsigned int BatchAnimationGraph_TypeDefinitionIndex = 29114;

class BatchAnimationGraph : public ::System::Object
{
public:
	static ::BAMaskLayerGraph** StaticGet__maskLayerGraph()
	{
		return (::BAMaskLayerGraph**)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationGraph_TypeDefinitionIndex)->GetStaticField(0x30260);
	}
	static ::UnityEngine::Rendering::BANodeHash* StaticGet__outputNode()
	{
		return (::UnityEngine::Rendering::BANodeHash*)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationGraph_TypeDefinitionIndex)->GetStaticField(0xF890);
	}
	static ::UnityEngine::Rendering::BANodeHash* StaticGet__blendNode()
	{
		return (::UnityEngine::Rendering::BANodeHash*)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationGraph_TypeDefinitionIndex)->GetStaticField(0xF898);
	}
	static ::UnityEngine::Rendering::BANodeHash* StaticGet__clipNode1()
	{
		return (::UnityEngine::Rendering::BANodeHash*)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationGraph_TypeDefinitionIndex)->GetStaticField(0xF8A0);
	}
	static ::UnityEngine::Rendering::BANodeHash* StaticGet__clipNode0()
	{
		return (::UnityEngine::Rendering::BANodeHash*)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationGraph_TypeDefinitionIndex)->GetStaticField(0xF8A8);
	}
	::UnityEngine::Rendering::BatchAnimation* _baCache; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _clipIndex; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _maskIndex; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH__CTOR_OFFSET))(this);
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISVALID_OFFSET))(this);
	}

	::System::Void Enable(::UnityEngine::Rendering::BatchAnimation* ba, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ENABLE_OFFSET))(this, ba, enable);
	}

	::System::Boolean IsAnimValid(::System::Int32 count)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET))(this, count);
	}

	::System::Void AddClip(::System::String* name, ::UnityEngine::Rendering::BatchAnimationClip* clip, ::System::Int32 fadeFrame)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDCLIP_OFFSET))(this, name, clip, fadeFrame);
	}

	::System::Void SetClipFadeIn(::System::String* name, ::System::Int32 fadeFrame)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET))(this, name, fadeFrame);
	}

	::System::Int32 GetClipCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET))(this);
	}

	::System::Void PlayClips(::System::String* name, ::System::Single speed, ::System::Int32 playState)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET))(this, name, speed, playState);
	}

	::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::String* name, ::System::Single speed, ::System::Int32 playState)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET))(this, instance, name, speed, playState);
	}

	::System::Void AddMaskClip(::System::String* name, ::UnityEngine::Rendering::BatchAnimationClip* clip, ::UnityEngine::Rendering::BatchAnimationBoneMask* mask, ::System::Single weight)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET))(this, name, clip, mask, weight);
	}

	::System::Void RemoveMaskLayer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_REMOVEMASKLAYER_OFFSET))(this);
	}

	::System::Void PlayLayerClip(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::String* name, ::System::Boolean play, ::System::Int32 layer)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET))(this, instance, name, play, layer);
	}
};
