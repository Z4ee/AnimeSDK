#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayJudgeEntry; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayRawExportCheck; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18294B40)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int PVSRuntimeReplayResultData_TypeDefinitionIndex = 70360;

	class PVSRuntimeReplayResultData : public ::System::Object
	{
	public:
		::System::Int32 schemaVersion; // 0x10
		::System::String* caseId; // 0x18
		::System::String* stageName; // 0x20
		::System::String* generatedAt; // 0x28
		::System::Boolean enabled; // 0x30
		::System::String* finalJudge; // 0x38
		::System::String* finalTag; // 0x40
		::System::String* finalLabel; // 0x48
		::System::String* finalStage; // 0x50
		::System::String* summary; // 0x58
		::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* sourceCase; // 0x60
		::RPG::Client::OpenWorld::PVSRuntimeReplayRawExportCheck* rawExportCheck; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::PVSRuntimeReplayJudgeEntry*>* judgeStages; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYRESULTDATA__CTOR_OFFSET))(this);
		}
	};
}
