#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_NODESTATEOVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B10350)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataStateAssetSO_NodeStateOverrideData_TypeDefinitionIndex = 78378;

	class WPGraphDataStateAssetSO_NodeStateOverrideData : public ::System::Object
	{
	public:
		::System::UInt16 nodeID; // 0x10
		::System::Boolean bIsClosed; // 0x12
		::System::Boolean bIsEnterPoint; // 0x13
		::Il2CppArray<::System::UInt16>* exitPoints; // 0x18
		::Il2CppArray<::System::Int32>* npcTagIDs; // 0x20
		::System::String* movementStyle; // 0x28
		::System::Single createInterval; // 0x30
		::System::Single createVarious; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_NODESTATEOVERRIDEDATA__CTOR_OFFSET))(this);
		}
	};
}
