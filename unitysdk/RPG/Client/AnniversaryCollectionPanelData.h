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

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1B320680)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B320300)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1B3201C0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_PANELTYPE_OFFSET UNITYSDK_OFFSET(0x1B320450)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABICON_OFFSET UNITYSDK_OFFSET(0x1B3205D0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x1B3204F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1B320160)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_ISFINISHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B31FF50)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA_SYNCSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B31CB30)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31C780)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONPANELDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0x1B31FD90)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionPanelData_TypeDefinitionIndex = 62488;

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
