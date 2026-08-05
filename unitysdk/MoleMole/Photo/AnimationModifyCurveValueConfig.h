#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Struct_2_ABBDBB7B60DE9902.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationModifyCurveValueItem; }
namespace MoleMole::Photo { class Skeleton; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x14A1BE10)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x14A1BCB0)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x14A1C690)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x14A1C430)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1C7C0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationModifyCurveValueConfig_TypeDefinitionIndex = 58535;

	class AnimationModifyCurveValueConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Photo::AnimationModifyCurveValueItem*>* items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::Struct_2_ABBDBB7B60DE9902 Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786& a3, ::Foundation::NativeMemory* a4, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> a5)
		{
			return ((::Struct_2_ABBDBB7B60DE9902(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_CREATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Request(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::Foundation::NativeMemoryBuilder* a3, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_REQUEST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IEnumerable_1<::Foundation::Unreal::FName>* get_Names()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::Unreal::FName>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_NAMES_OFFSET))(this);
		}
	};
}
