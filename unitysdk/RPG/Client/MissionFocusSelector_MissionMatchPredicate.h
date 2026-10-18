#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class MainMissionData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD6D0480)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD6D04B0)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xD6D0380)
#define RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D0390)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionFocusSelector_MissionMatchPredicate_TypeDefinitionIndex = 66162;

	class MissionFocusSelector_MissionMatchPredicate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::MainMissionData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::MainMissionData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONFOCUSSELECTOR_MISSIONMATCHPREDICATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
