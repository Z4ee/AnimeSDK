#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BAGraphLayerTemplate; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONGRAPH_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x18E9B340)
#define BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET UNITYSDK_OFFSET(0x18E9BD80)
#define BATCHANIMATIONGRAPH_BABINIT_OFFSET UNITYSDK_OFFSET(0x18E9B1B0)
#define BATCHANIMATIONGRAPH_ENABLELAYER_OFFSET UNITYSDK_OFFSET(0x18E9B210)
#define BATCHANIMATIONGRAPH_ENABLEMASKLAYER_OFFSET UNITYSDK_OFFSET(0x18E9BEB0)
#define BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x18E9B4E0)
#define BATCHANIMATIONGRAPH_GETWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x18E9C4E0)
#define BATCHANIMATIONGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x18E9AC90)
#define BATCHANIMATIONGRAPH_HASMASKCLIP_OFFSET UNITYSDK_OFFSET(0x18E9BD20)
#define BATCHANIMATIONGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x18E9AE40)
#define BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET UNITYSDK_OFFSET(0x18E9B2E0)
#define BATCHANIMATIONGRAPH_ISVALID_OFFSET UNITYSDK_OFFSET(0x18E9B250)
#define BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET UNITYSDK_OFFSET(0x18E9B500)
#define BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x18E9B7F0)
#define BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET UNITYSDK_OFFSET(0x18E9BF10)
#define BATCHANIMATIONGRAPH_PLAYLAYER_OFFSET UNITYSDK_OFFSET(0x18E9B270)
#define BATCHANIMATIONGRAPH_PLAYWALKSTOP_OFFSET UNITYSDK_OFFSET(0x18E9C370)
#define BATCHANIMATIONGRAPH_RECYCLE_OFFSET UNITYSDK_OFFSET(0x18E9AD00)
#define BATCHANIMATIONGRAPH_RESET_OFFSET UNITYSDK_OFFSET(0x18E9AD60)
#define BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET UNITYSDK_OFFSET(0x18E9B3F0)
#define BATCHANIMATIONGRAPH_SETSTATECLIP_OFFSET UNITYSDK_OFFSET(0x18E9C7E0)
#define BATCHANIMATIONGRAPH_STARTWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x18E9C3E0)
#define BATCHANIMATIONGRAPH_TOSTOP_OFFSET UNITYSDK_OFFSET(0x18E9C6E0)
#define BATCHANIMATIONGRAPH_TOWALK_OFFSET UNITYSDK_OFFSET(0x18E9C5E0)
#define BATCHANIMATIONGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9CAE0)

inline static constexpr unsigned int BatchAnimationGraph_TypeDefinitionIndex = 35131;

class BatchAnimationGraph : public ::System::Object
{
public:
	static ::UnityEngine::Rendering::BAGraphLayerTemplate** StaticGet__graphTemplate()
	{
		return (::UnityEngine::Rendering::BAGraphLayerTemplate**)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationGraph_TypeDefinitionIndex)->GetStaticField(0x60540);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _maskIndex; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _clipIndex; // 0x18
	::UnityEngine::Rendering::BatchAnimation* _baCache; // 0x20
	::System::Int32 _CurrentMaskState; // 0x28
	::System::Int32 _CurrentPlayState; // 0x2C
	::System::UInt32 _LayerMask; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH__CTOR_OFFSET))(this);
	}

	static ::BatchAnimationGraph* Get()
	{
		return ((::BatchAnimationGraph*(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GET_OFFSET))();
	}

	static ::System::Void Recycle(::BatchAnimationGraph* a1)
	{
		return ((::System::Void(*)(::BatchAnimationGraph*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_RECYCLE_OFFSET))(a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_RESET_OFFSET))(this);
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_INIT_OFFSET))();
	}

	::System::Void BABInit(::UnityEngine::Rendering::BatchAnimation* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::UInt32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_BABINIT_OFFSET))(this, a1, a2);
	}

	::System::Void EnableLayer(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ENABLELAYER_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISVALID_OFFSET))(this);
	}

	::System::Boolean PlayLayer(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYER_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsAnimValid(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ISANIMVALID_OFFSET))(this, a1);
	}

	::System::Int32 AddClip(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationClip* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDCLIP_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetClipFadeIn(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_SETCLIPFADEIN_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetClipCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GETCLIPCOUNT_OFFSET))(this);
	}

	::System::Void PlayClips(::System::String* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIPS_OFFSET))(this, a1, a2, a3);
	}

	::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYCLIP_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean HasMaskClip(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_HASMASKCLIP_OFFSET))(this, a1);
	}

	::System::Void AddMaskClip(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationClip* a2, ::UnityEngine::Rendering::BatchAnimationBoneMask* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ADDMASKCLIP_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EnableMaskLayer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_ENABLEMASKLAYER_OFFSET))(this, a1);
	}

	::System::Void PlayLayerClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYLAYERCLIP_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void PlayWalkStop(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_PLAYWALKSTOP_OFFSET))(this, a1);
	}

	::System::Void StartWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_STARTWALKSTOPSTATE_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_GETWALKSTOPSTATE_OFFSET))(this, a1);
	}

	::System::Void ToWalk(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_TOWALK_OFFSET))(this, a1);
	}

	::System::Void ToStop(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_TOSTOP_OFFSET))(this, a1);
	}

	::System::Void SetStateClip(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPH_SETSTATECLIP_OFFSET))(this, a1, a2);
	}
};
