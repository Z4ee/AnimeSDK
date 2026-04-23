#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_NATIVECURVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x31480)
#define ROOTMOTION_NATIVECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x31470)
#define ROOTMOTION_NATIVECURVE_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x313F0)
#define ROOTMOTION_NATIVECURVE_INITIALIZEVALUES_OFFSET UNITYSDK_OFFSET(0x31400)
#define ROOTMOTION_NATIVECURVE_PINGPONG_OFFSET UNITYSDK_OFFSET(0x31500)
#define ROOTMOTION_NATIVECURVE_REPEAT_OFFSET UNITYSDK_OFFSET(0x314B0)
#define ROOTMOTION_NATIVECURVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x31460)

namespace RootMotion
{
	inline static constexpr unsigned int NativeCurve_TypeDefinitionIndex = 40992;

	struct alignas(8) NativeCurve
	{
		::Unity::Collections::NativeArray_1<::System::Single> values; // 0x10
		::UnityEngine::WrapMode preWrapMode; // 0x20
		::UnityEngine::WrapMode postWrapMode; // 0x24

		::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_GET_ISCREATED_OFFSET))(this);
		}

		::System::Void InitializeValues(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_INITIALIZEVALUES_OFFSET))(this, count);
		}

		::System::Void Update(::UnityEngine::AnimationCurve* curve, ::System::Int32 resolution)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_UPDATE_OFFSET))(this, curve, resolution);
		}

		::System::Single Evaluate(::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_EVALUATE_OFFSET))(this, t);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_DISPOSE_OFFSET))(this);
		}

		::System::Single Repeat(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_REPEAT_OFFSET))(this, t, length);
		}

		::System::Single Pingpong(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_PINGPONG_OFFSET))(this, t, length);
		}
	};
}
