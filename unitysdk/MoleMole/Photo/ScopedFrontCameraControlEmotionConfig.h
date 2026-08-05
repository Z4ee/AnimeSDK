#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_85E1FCC6DF9961D3;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class PlayableBlendSpace1DConfig; }
namespace MoleMole::Photo { class PlayableGraphClipConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x168872F0)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x16887980)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x168879F0)
#define MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x168880F0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ScopedFrontCameraControlEmotionConfig_TypeDefinitionIndex = 61090;

	class ScopedFrontCameraControlEmotionConfig : public ::System::Object
	{
	public:
		::MoleMole::Photo::PlayableBlendSpace1DConfig* blendSpace; // 0x10
		::MoleMole::Photo::PlayableGraphClipConfig* clip; // 0x18
		::System::Boolean useBlendSpace; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786& a3, ::Foundation::NativeMemory* a4, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> a5, ::Class_1_85E1FCC6DF9961D3* a6)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>, ::Class_1_85E1FCC6DF9961D3*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG_CREATE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::Foundation::NativeMemoryBuilder* a3, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SCOPEDFRONTCAMERACONTROLEMOTIONCONFIG_REQUEST_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
