#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/ENapSkeletonGraphicFrame.h"
#include "unitysdk/Spine/Unity/SkeletonGraphic.h"

#define SPINE_UNITY_NAPSKELETONGRAPHIC_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AD22D10)
#define SPINE_UNITY_NAPSKELETONGRAPHIC_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1AD22ED0)
#define SPINE_UNITY_NAPSKELETONGRAPHIC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD22E10)
#define SPINE_UNITY_NAPSKELETONGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD23000)

namespace Spine::Unity
{
	inline static constexpr unsigned int NapSkeletonGraphic_TypeDefinitionIndex = 39446;

	class NapSkeletonGraphic : public ::Spine::Unity::SkeletonGraphic
	{
	public:
		::Spine::Unity::ENapSkeletonGraphicFrame useFixFrame; // 0x268
		::System::Single fixGapTime; // 0x26C
		::System::Single fixJumpTime; // 0x270
		::System::Single sumTime; // 0x274

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NAPSKELETONGRAPHIC__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NAPSKELETONGRAPHIC_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NAPSKELETONGRAPHIC_UPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_NAPSKELETONGRAPHIC_UPDATE_1_OFFSET))(this, deltaTime);
		}
	};
}
