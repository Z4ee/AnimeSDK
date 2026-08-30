#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_QA_AUTOMATA_UAUTODEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A374260)
#define RPG_QA_AUTOMATA_UAUTODEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1A3741E0)

namespace RPG::QA::Automata
{
	inline static constexpr unsigned int UAutoDebug_TypeDefinitionIndex = 52116;

	class UAutoDebug : public ::System::Object
	{
	public:
		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_AUTOMATA_UAUTODEBUG_LOG_OFFSET))(a1);
		}

		static ::System::Void LogFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_QA_AUTOMATA_UAUTODEBUG_LOGFORMAT_OFFSET))(a1, a2);
		}
	};
}
