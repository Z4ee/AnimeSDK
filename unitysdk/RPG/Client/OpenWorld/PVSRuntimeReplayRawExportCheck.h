#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplaySamplerCheckInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYRAWEXPORTCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0xC312A80)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int PVSRuntimeReplayRawExportCheck_TypeDefinitionIndex = 68857;

	class PVSRuntimeReplayRawExportCheck : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::Int32 loadedVolumeCount; // 0x14
		::System::Int32 loadedSamplerCount; // 0x18
		::System::Int32 samplerCountBeforeMerge; // 0x1C
		::System::Int32 samplerCountAfterMerge; // 0x20
		::System::Boolean caseSamplerMerged; // 0x24
		::System::Int32 bakeEvaluatedSamplerCount; // 0x28
		::System::Int32 bakeVisibleSamplerCount; // 0x2C
		::System::Single bakeVisibilityRate; // 0x30
		::System::Boolean serializeSamplerExists; // 0x34
		::System::Boolean serializeResultExists; // 0x35
		::System::Boolean serializeVisibilityExists; // 0x36
		::System::Int64 samplerFileSize; // 0x38
		::System::Int64 resultFileSize; // 0x40
		::System::Int64 visibilityFileSize; // 0x48
		::System::Boolean remapObjIndexMatched; // 0x50
		::System::Int32 remapMatchCount; // 0x54
		::System::Int32 remapVisibleCount; // 0x58
		::System::Boolean hasNonZeroVisibilityEntry; // 0x5C
		::System::Int32 checkedSamplerCount; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::PVSRuntimeReplaySamplerCheckInfo*>* checkedSamplers; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYRAWEXPORTCHECK__CTOR_OFFSET))(this);
		}
	};
}
