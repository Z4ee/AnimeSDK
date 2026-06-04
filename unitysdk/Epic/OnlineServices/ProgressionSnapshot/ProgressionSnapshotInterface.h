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

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ADDPROGRESSION_OFFSET UNITYSDK_OFFSET(0xA336E30)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_BEGINSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA336F90)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_DELETESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA337170)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ENDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA3373D0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONDELETESNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA336CD0)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONSUBMITSNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA336D70)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_SUBMITSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA337530)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA336E20)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA336E10)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int ProgressionSnapshotInterface_TypeDefinitionIndex = 42374;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result AddProgression(::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ADDPROGRESSION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result BeginSnapshot(::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions* a1, ::System::UInt32& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_BEGINSNAPSHOT_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteSnapshot(::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions*, ::System::Object*, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_DELETESNAPSHOT_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result EndSnapshot(::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ENDSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void SubmitSnapshot(::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions*, ::System::Object*, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_SUBMITSNAPSHOT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnDeleteSnapshotCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONDELETESNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSubmitSnapshotCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_PROGRESSIONSNAPSHOTINTERFACE_ONSUBMITSNAPSHOTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
