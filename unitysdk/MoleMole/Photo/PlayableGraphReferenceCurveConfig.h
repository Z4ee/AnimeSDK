#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2ACAE3B8E89364F1.h"
#include "unitysdk/Enum_3_A104014A7AFE0465.h"
#include "unitysdk/Foundation/NativeMemoryBlob.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Struct_2_4355D25F091C65D0.h"
#include "unitysdk/Struct_2_44BFEEFC722C6845.h"
#include "unitysdk/Struct_2_ACD0EF80A5330786.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x11D5D5F0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x11D5FC10)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_4A12AA2BEAE67A2D_1_OFFSET UNITYSDK_OFFSET(0x11D60B10)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_4A12AA2BEAE67A2D_2_OFFSET UNITYSDK_OFFSET(0x11D61000)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_4A12AA2BEAE67A2D_OFFSET UNITYSDK_OFFSET(0x11D602D0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_A87ABB37A2265E8F_OFFSET UNITYSDK_OFFSET(0x11D601B0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_AF5D1137CF44E9F3_OFFSET UNITYSDK_OFFSET(0x11D60400)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_E30C9EDC8C6E490C_1_OFFSET UNITYSDK_OFFSET(0x11D60CA0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_E30C9EDC8C6E490C_OFFSET UNITYSDK_OFFSET(0x11D607B0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x11D5FC20)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11D601A0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphReferenceCurveConfig_TypeDefinitionIndex = 78230;

	class PlayableGraphReferenceCurveConfig : public ::System::Object
	{
	public:
		// static const ::System::Int32 IntervalAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 EvaluateAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 DerivativeAllocIndex = 0x2; // 0x0
		// static const ::System::Int32 IntegrateAllocIndex = 0x3; // 0x0
		// static const ::System::Int32 AllocCount = 0x4; // 0x0
		::UnityEngine::AnimationCurve* curve; // 0x10
		::Enum_3_A104014A7AFE0465 flag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG__CTOR_OFFSET))(this);
		}

		::Struct_2_4355D25F091C65D0 Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animator* a2, ::Struct_2_ACD0EF80A5330786& a3, ::Foundation::NativeMemory* a4, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle> a5)
		{
			return ((::Struct_2_4355D25F091C65D0(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::Struct_2_ACD0EF80A5330786&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_CREATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::Foundation::NativeMemoryBuilder* a3, ::System::Span_1<::Foundation::NativeMemoryRequestHandle> a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_REQUEST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_1_A87ABB37A2265E8F(::Foundation::NativeMemory* a1, ::Foundation::NativeMemoryRequestHandle a2, ::Foundation::NativeVariableArray_1<::Struct_2_44BFEEFC722C6845>& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeVariableArray_1<::Struct_2_44BFEEFC722C6845>&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_A87ABB37A2265E8F_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_1_4A12AA2BEAE67A2D(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2, ::Foundation::NativeMemoryBlob a3, ::System::Int32& a4, ::Enum_3_2ACAE3B8E89364F1 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::Foundation::NativeMemoryBlob, ::System::Int32&, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_4A12AA2BEAE67A2D_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_1_AF5D1137CF44E9F3(::Foundation::NativeMemory* a1, ::Foundation::NativeMemoryRequestHandle a2, ::Foundation::NativeMemoryBlob& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryBlob&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_AF5D1137CF44E9F3_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_E30C9EDC8C6E490C(::Foundation::NativeMemory* a1, ::Foundation::NativeMemoryRequestHandle a2, ::Foundation::NativeMemoryBlob& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryBlob&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_E30C9EDC8C6E490C_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_1_4A12AA2BEAE67A2D_1(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2, ::Foundation::NativeMemoryBlob a3, ::System::Int32& a4, ::Enum_3_2ACAE3B8E89364F1 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::Foundation::NativeMemoryBlob, ::System::Int32&, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_4A12AA2BEAE67A2D_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_1_E30C9EDC8C6E490C_1(::Foundation::NativeMemory* a1, ::Foundation::NativeMemoryRequestHandle a2, ::Foundation::NativeMemoryBlob& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryBlob&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_E30C9EDC8C6E490C_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_1_4A12AA2BEAE67A2D_2(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2, ::Foundation::NativeMemoryBlob a3, ::System::Int32& a4, ::Enum_3_2ACAE3B8E89364F1 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::Foundation::NativeMemoryBlob, ::System::Int32&, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_METHOD_1_4A12AA2BEAE67A2D_2_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
