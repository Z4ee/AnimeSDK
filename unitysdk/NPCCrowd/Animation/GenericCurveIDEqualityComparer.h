#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NapAnimator_GenericCurveID.h"

#define NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0xEC84BE0)
#define NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xEC84B80)
#define NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEC84C00)
#define NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xEC84C70)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GenericCurveIDEqualityComparer_TypeDefinitionIndex = 54842;

	class GenericCurveIDEqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::NapAnimator_GenericCurveID x, ::UnityEngine::NapAnimator_GenericCurveID y)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NapAnimator_GenericCurveID, ::UnityEngine::NapAnimator_GenericCurveID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		static ::System::Int32 CombineHash(::System::Int32 h1, ::System::Int32 h2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER_COMBINEHASH_OFFSET))(h1, h2);
		}

		::System::Int32 GetHashCode(::UnityEngine::NapAnimator_GenericCurveID obj)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::NapAnimator_GenericCurveID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GENERICCURVEIDEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
