#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"

namespace RPG::Client { class AssistantTipShowCaseData; }
namespace RPG::Client { class AssistantTipsData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSISTANTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D3FF70)
#define RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSDATA_OFFSET UNITYSDK_OFFSET(0x9D40170)
#define RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSSHOWCASEDATA_OFFSET UNITYSDK_OFFSET(0x9D40090)
#define RPG_CLIENT_ASSISTANTMODULE_GETSHOWCASEALLTIPS_OFFSET UNITYSDK_OFFSET(0x9D40250)
#define RPG_CLIENT_ASSISTANTMODULE_GETSHOWTIPS_OFFSET UNITYSDK_OFFSET(0x9D40A40)
#define RPG_CLIENT_ASSISTANTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9D3FA30)
#define RPG_CLIENT_ASSISTANTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D40DB0)
#define RPG_CLIENT_ASSISTANTMODULE__INITTIPSDATADICT_OFFSET UNITYSDK_OFFSET(0x9D3FAD0)
#define RPG_CLIENT_ASSISTANTMODULE__INITTIPSSHOWCASEDATADICT_OFFSET UNITYSDK_OFFSET(0x9D3FD20)
#define RPG_CLIENT_ASSISTANTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D40E60)
#define RPG_CLIENT_ASSISTANTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9D40DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistantModule_TypeDefinitionIndex = 57607;

	class AssistantModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AssistantTipShowCaseData*>* _TipsShowCaseDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AssistantTipsData*>* _TipsDataDict; // 0x18

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

		::RPG::Client::AssistantTipShowCaseData* GetAssistantTipsShowCaseData(::System::UInt32 id)
		{
			return ((::RPG::Client::AssistantTipShowCaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSSHOWCASEDATA_OFFSET))(this, id);
		}

		::RPG::Client::AssistantTipsData* GetAssistantTipsData(::System::UInt32 id)
		{
			return ((::RPG::Client::AssistantTipsData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETASSISTANTTIPSDATA_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>* GetShowCaseAllTips(::RPG::GameCore::AssistantShowCaseType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AssistantTipsData*>*(*)(::PVOID, ::RPG::GameCore::AssistantShowCaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETSHOWCASEALLTIPS_OFFSET))(this, type);
		}

		::RPG::Client::AssistantTipsData* GetShowTips(::RPG::GameCore::AssistantShowCaseType type)
		{
			return ((::RPG::Client::AssistantTipsData*(*)(::PVOID, ::RPG::GameCore::AssistantShowCaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE_GETSHOWTIPS_OFFSET))(this, type);
		}

		::System::Void _InitTipsDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE__INITTIPSDATADICT_OFFSET))(this);
		}

		::System::Void _InitTipsShowCaseDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE__INITTIPSSHOWCASEDATADICT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
