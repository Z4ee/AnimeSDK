#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotExperimentSentence; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT_GETALLSENTENCES_OFFSET UNITYSDK_OFFSET(0x197759C0)
#define RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT_GET_ISFIRSTTIME_OFFSET UNITYSDK_OFFSET(0x19775510)
#define RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT_MARKHASFINISHED_OFFSET UNITYSDK_OFFSET(0x197758C0)
#define RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197755C0)
#define RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT__INITDATA_OFFSET UNITYSDK_OFFSET(0x19775620)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookExperimentContext_TypeDefinitionIndex = 65048;

	class TarotBookExperimentContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotExperimentSentence*>* _SentenceData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFirstTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT_GET_ISFIRSTTIME_OFFSET))(this);
		}

		::System::Void MarkHasFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT_MARKHASFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotExperimentSentence*>* GetAllSentences()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotExperimentSentence*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT_GETALLSENTENCES_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEXPERIMENTCONTEXT__INITDATA_OFFSET))(this);
		}
	};
}
