#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AssistantRuleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AssistantTipsConfigRow; }

#define RPG_CLIENT_ASSISTANTTIPSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19B35E00)
#define RPG_CLIENT_ASSISTANTTIPSDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x19B360A0)
#define RPG_CLIENT_ASSISTANTTIPSDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19B35F80)
#define RPG_CLIENT_ASSISTANTTIPSDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x19B36160)
#define RPG_CLIENT_ASSISTANTTIPSDATA_GET_TIPSRULE_OFFSET UNITYSDK_OFFSET(0x19B35FA0)
#define RPG_CLIENT_ASSISTANTTIPSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x19B36040)
#define RPG_CLIENT_ASSISTANTTIPSDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19B35F90)
#define RPG_CLIENT_ASSISTANTTIPSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B35F70)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistantTipsData_TypeDefinitionIndex = 59683;

	class AssistantTipsData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AssistantTipsData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::AssistantTipsData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AssistantRuleType get_TipsRule()
		{
			return ((::RPG::GameCore::AssistantRuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA_GET_TIPSRULE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA_GET_CONTENT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::RPG::GameCore::AssistantTipsConfigRow* get__Row()
		{
			return ((::RPG::GameCore::AssistantTipsConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTANTTIPSDATA_GET__ROW_OFFSET))(this);
		}
	};
}
