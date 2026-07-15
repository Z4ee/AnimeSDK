#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionPanelEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionContentData; }
namespace RPG::GameCore { class AnniversaryCollectionTabConfigRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0x19B223A0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19B22020)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x19B21EE0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_PANELTYPE_OFFSET UNITYSDK_OFFSET(0x19B22170)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABICON_OFFSET UNITYSDK_OFFSET(0x19B222F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x19B22210)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x19B21E80)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_ISFINISHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19B21C70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x19B1E850)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1E4A0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0x19B21AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionPanelData_TypeDefinitionIndex = 59649;

	class AnniversaryCollectionPanelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AnniversaryCollectionContentData*>* ContentDataList; // 0x10
		::System::UInt32 TabID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_SYNCSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_ISFINISHCONDITIONCOMPLETE_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__INITDATA_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::RPG::GameCore::AnniversaryCollectionPanelEnum get_PanelType()
		{
			return ((::RPG::GameCore::AnniversaryCollectionPanelEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_PANELTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABNAME_OFFSET))(this);
		}

		::System::String* get_TabIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABICON_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_FinishConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_FINISHCONDITIONS_OFFSET))(this);
		}

		::RPG::GameCore::AnniversaryCollectionTabConfigRow* get__Row()
		{
			return ((::RPG::GameCore::AnniversaryCollectionTabConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET__ROW_OFFSET))(this);
		}
	};
}
