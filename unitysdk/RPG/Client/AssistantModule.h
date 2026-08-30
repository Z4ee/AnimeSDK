#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"

namespace RPG::Client { class AssistantTipShowCaseData; }
namespace RPG::Client { class AssistantTipsData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSISTANTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B3330A0)
#define RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSDATA_OFFSET UNITYSDK_OFFSET(0x1B333250)
#define RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSSHOWCASEDATA_OFFSET UNITYSDK_OFFSET(0x1B3331A0)
#define RPG_CLIENT_ASSISTANTMODULE_GETSHOWCASEALLTIPS_OFFSET UNITYSDK_OFFSET(0x1B333300)
#define RPG_CLIENT_ASSISTANTMODULE_GETSHOWTIPS_OFFSET UNITYSDK_OFFSET(0x1B333BD0)
#define RPG_CLIENT_ASSISTANTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B332AE0)
#define RPG_CLIENT_ASSISTANTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B333E90)
#define RPG_CLIENT_ASSISTANTMODULE__INITTIPSDATADICT_OFFSET UNITYSDK_OFFSET(0x1B332B40)
#define RPG_CLIENT_ASSISTANTMODULE__INITTIPSSHOWCASEDATADICT_OFFSET UNITYSDK_OFFSET(0x1B332DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistantModule_TypeDefinitionIndex = 62520;

	class AssistantModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AssistantTipsData*>* _TipsDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AssistantTipShowCaseData*>* _TipsShowCaseDataDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::AssistantTipShowCaseData* GetAssistantTipsShowCaseData(::System::UInt32 a1)
		{
			return ((::RPG::Client::AssistantTipShowCaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSSHOWCASEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AssistantTipsData* GetAssistantTipsData(::System::UInt32 a1)
		{
			return ((::RPG::Client::AssistantTipsData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* GetShowCaseAllTips(::RPG::GameCore::AssistantShowCaseType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>*(*)(::PVOID, ::RPG::GameCore::AssistantShowCaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETSHOWCASEALLTIPS_OFFSET))(this, a1);
		}

		::RPG::Client::AssistantTipsData* GetShowTips(::RPG::GameCore::AssistantShowCaseType a1)
		{
			return ((::RPG::Client::AssistantTipsData*(*)(::PVOID, ::RPG::GameCore::AssistantShowCaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETSHOWTIPS_OFFSET))(this, a1);
		}

		::System::Void _InitTipsDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE__INITTIPSDATADICT_OFFSET))(this);
		}

		::System::Void _InitTipsShowCaseDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE__INITTIPSSHOWCASEDATADICT_OFFSET))(this);
		}
	};
}
