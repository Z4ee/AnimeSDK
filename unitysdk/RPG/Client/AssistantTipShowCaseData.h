#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AssistantTipsShowCaseRow; }

#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D40D50)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9D40E80)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_SHOWCASETYPE_OFFSET UNITYSDK_OFFSET(0x9D40960)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_TIPIDLIST_OFFSET UNITYSDK_OFFSET(0x9D409D0)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9D40EA0)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9D40E90)
#define RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D40E70)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistantTipShowCaseData_TypeDefinitionIndex = 57608;

	class AssistantTipShowCaseData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AssistantTipShowCaseData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::AssistantTipShowCaseData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::AssistantShowCaseType get_ShowCaseType()
		{
			return ((::RPG::GameCore::AssistantShowCaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_SHOWCASETYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TipIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET_TIPIDLIST_OFFSET))(this);
		}

		::RPG::GameCore::AssistantTipsShowCaseRow* get__Row()
		{
			return ((::RPG::GameCore::AssistantTipsShowCaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSHOWCASEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
