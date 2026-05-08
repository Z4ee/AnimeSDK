#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_PATHSTATEOVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11D83B90)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataStateAssetSO_PathStateOverrideData_TypeDefinitionIndex = 78374;

	class WPGraphDataStateAssetSO_PathStateOverrideData : public ::System::Object
	{
	public:
		::System::UInt16 pathID; // 0x10
		::System::Boolean bIsOneWay; // 0x12
		::System::Boolean bIsClosed; // 0x13
		::System::Int32 cost; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_PATHSTATEOVERRIDEDATA__CTOR_OFFSET))(this);
		}
	};
}
