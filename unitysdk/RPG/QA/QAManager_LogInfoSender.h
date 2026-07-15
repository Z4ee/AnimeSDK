#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_QA_QAMANAGER_LOGINFOSENDER_SENDLOG_OFFSET UNITYSDK_OFFSET(0x19D466D0)
#define RPG_QA_QAMANAGER_LOGINFOSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D45EF0)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager_LogInfoSender_TypeDefinitionIndex = 49452;

	class QAManager_LogInfoSender : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_LOGINFOSENDER__CTOR_OFFSET))(this);
		}

		::System::Void SendLog(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER_LOGINFOSENDER_SENDLOG_OFFSET))(this, a1, a2, a3);
		}
	};
}
