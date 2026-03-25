#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class AddProgressionOptions; }
namespace Epic::OnlineServices::ProgressionSnapshot { class BeginSnapshotOptions; }
namespace Epic::OnlineServices::ProgressionSnapshot { class DeleteSnapshotOptions; }
namespace Epic::OnlineServices::ProgressionSnapshot { class EndSnapshotOptions; }
namespace Epic::OnlineServices::ProgressionSnapshot { class OnDeleteSnapshotCallback; }
namespace Epic::OnlineServices::ProgressionSnapshot { class OnSubmitSnapshotCallback; }
namespace Epic::OnlineServices::ProgressionSnapshot { class SubmitSnapshotOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ADDPROGRESSION_OFFSET UNITYSDK_OFFSET(0x86DB4B0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_BEGINSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x86DB610)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_DELETESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x86DB7F0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ENDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x86DBA30)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONDELETESNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x86DB370)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONSUBMITSNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x86DB400)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_SUBMITSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x86DBB90)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x86DB4A0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x86DB490)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int ProgressionSnapshotInterface_TypeDefinitionIndex = 35745;

	class ProgressionSnapshotInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddprogressionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 BeginsnapshotApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DeletesnapshotApiLatest = 0x1; // 0x0
		// static const ::System::Int32 EndsnapshotApiLatest = 0x1; // 0x0
		// static const ::System::Int32 InvalidProgressionsnapshotid = 0x0; // 0x0
		// static const ::System::Int32 SubmitsnapshotApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result AddProgression(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ADDPROGRESSION_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result BeginSnapshot(::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions* options, ::System::UInt32& outSnapshotId)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_BEGINSNAPSHOT_OFFSET))(this, options, outSnapshotId);
		}

		::System::Void DeleteSnapshot(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions*, ::System::Object*, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_DELETESNAPSHOT_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result EndSnapshot(::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ENDSNAPSHOT_OFFSET))(this, options);
		}

		::System::Void SubmitSnapshot(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions*, ::System::Object*, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_SUBMITSNAPSHOT_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnDeleteSnapshotCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONDELETESNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSubmitSnapshotCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONSUBMITSNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
