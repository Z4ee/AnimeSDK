#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Struct_2_5A85969690BAF8B8.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class RotationRatioCurve; }
namespace MoleMole::Photo { class Skeleton; }
namespace MoleMole::Photo { class TranslationRatioCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE_CREATE_OFFSET UNITYSDK_OFFSET(0x136E8910)
#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x136E9300)
#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE_REQUEST_OFFSET UNITYSDK_OFFSET(0x136E9360)
#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x136E94E0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int MotionRatioCurve_TypeDefinitionIndex = 59166;

	class MotionRatioCurve : public ::System::Object
	{
	public:
		::MoleMole::Photo::TranslationRatioCurve* translation; // 0x10
		::MoleMole::Photo::RotationRatioCurve* rotation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE__CTOR_OFFSET))(this);
		}

		::Struct_2_5A85969690BAF8B8 Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786& a3, ::Foundation::NativeMemory* a4, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> a5)
		{
			return ((::Struct_2_5A85969690BAF8B8(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE_CREATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::Foundation::NativeMemoryBuilder* a3, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE_REQUEST_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
