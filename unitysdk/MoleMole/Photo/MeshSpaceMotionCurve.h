#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/Struct_2_E2016BDCE994E996.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class RotationCurve; }
namespace MoleMole::Photo { class Skeleton; }
namespace MoleMole::Photo { class TranslationCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE_CREATE_OFFSET UNITYSDK_OFFSET(0x10BE4EB0)
#define MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x10BE5AE0)
#define MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE_REQUEST_OFFSET UNITYSDK_OFFSET(0x10BE5B40)
#define MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE5C80)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int MeshSpaceMotionCurve_TypeDefinitionIndex = 71063;

	class MeshSpaceMotionCurve : public ::System::Object
	{
	public:
		::MoleMole::Photo::TranslationCurve* translation; // 0x10
		::MoleMole::Photo::RotationCurve* rotation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE__CTOR_OFFSET))(this);
		}

		::Struct_2_E2016BDCE994E996 Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786& a3, ::Foundation::NativeMemory* a4, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> a5)
		{
			return ((::Struct_2_E2016BDCE994E996(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE_CREATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::Foundation::NativeMemoryBuilder* a3, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MESHSPACEMOTIONCURVE_REQUEST_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
