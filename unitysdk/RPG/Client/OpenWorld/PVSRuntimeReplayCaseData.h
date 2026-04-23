#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYCASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC03F90)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int PVSRuntimeReplayCaseData_TypeDefinitionIndex = 67897;

	class PVSRuntimeReplayCaseData : public ::System::Object
	{
	public:
		::System::Int32 schemaVersion; // 0x10
		::System::String* caseId; // 0x18
		::System::String* stageName; // 0x20
		::System::String* exportedAt; // 0x28
		::UnityEngine::Vector3 sourcePosition; // 0x30
		::System::Int64 sourceSpace2DIndex; // 0x40
		::System::Int64 sourceSpace3DIndex; // 0x48
		::System::Int64 sourceDataIndex; // 0x50
		::System::Int32 objStageIndex; // 0x58
		::System::String* targetName; // 0x60
		::System::String* assetPath; // 0x68
		::System::Int32 blockIndex; // 0x70
		::UnityEngine::Bounds rawSampleBound; // 0x74
		::System::Single completeThreshold; // 0x8C
		::System::Single partialThreshold; // 0x90
		::System::String* runtimeStatus; // 0x98
		::System::Boolean isRuntimeCulled; // 0xA0
		::System::String* rootCause; // 0xA8
		::System::Boolean rawDataReady; // 0xB0
		::System::Boolean rawObjectMapped; // 0xB1
		::System::Int32 rawPrefabIndex; // 0xB4
		::System::Int32 rawObjectIndex; // 0xB8
		::System::Single rawVisibilityRate; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYCASEDATA__CTOR_OFFSET))(this);
		}
	};
}
