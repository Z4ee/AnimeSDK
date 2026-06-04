#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class QuestData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB1FA070)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB1FA0A0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xB1F9E80)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F9F80)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils_QuestCheckerFunc_TypeDefinitionIndex = 57736;

	class ActivityRewardUtils_QuestCheckerFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::QuestData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::QuestData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_QUESTCHECKERFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
